//
// Created by lyndskg on 8/9/23.
//

#include "../include/graphQLOL/query_builder.h"

using namespace std;

void QueryBuilder::setOperation(const string& op) {
    operation = op;
}

QueryBuilder& QueryBuilder::field(const string& fieldName, const string& arguments) {
    baseQuery += fieldName;
    if (!arguments.empty()) {
        baseQuery += "(" + arguments + ")";
    }
    baseQuery += " ";
    return *this;
}

QueryBuilder& QueryBuilder::beginField(const string& fieldName, const string& arguments) {
    fieldsStack.push_back(fieldName + (arguments.empty() ? "" : "(" + arguments + ")") + " { ");
    return *this;
}

QueryBuilder& QueryBuilder::endField() {
    if (!fieldsStack.empty()) {
        baseQuery += fieldsStack.back() + " } ";
        fieldsStack.pop_back();
    }
    return *this;
}


QueryBuilder& QueryBuilder::variable(const string& varName, const string& varType, const string& defaultValue) {
//    variables[varName] = varType;
//    if (!defaultValue.empty()) {
//        baseQuery += "$" + varName + ": " + defaultValue;
//    }
//    return *this;

    variablesSegment += "$" + varName + ": " + varType;
    if (!defaultValue.empty()) {
        variablesSegment += " = " + defaultValue;
    }
    variablesSegment += ", ";
    return *this;
}

string QueryBuilder::build() const {
    return operation + " " + (variablesSegment.empty() ? "" : "(" + variablesSegment + ")") + "{ " + baseQuery + " }";
//    string finalQuery = "query { " + baseQuery + " }";
//    if (!variables.empty()) {
//        // Add variable declarations to the beginning of the query
//        // Pseudo: Iterate over variables map and append to finalQuery
//    }
//    return finalQuery;
}
