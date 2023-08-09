//
// Created by lyndskg on 8/9/23.
//

#ifndef GRAPHQLOL_QUERY_BUILDER_H
#define GRAPHQLOL_QUERY_BUILDER_H

#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

class QueryBuilder {
public:
    QueryBuilder() = default; // Default constructor
    ~QueryBuilder() = default; // Default destructor

    // Set the operation type: query, mutation, subscription
    void setOperation(const string& op);

    // Add a field to the query
    QueryBuilder& field(const string& fieldName, const string& arguments = "");

    // Add a nested field (e.g., person { name age })
    QueryBuilder& beginField(const string& fieldName, const string& arguments = "");
    QueryBuilder& endField();

    // Add a variable to the query
    QueryBuilder& variable(const string& varName, const string& varType, const string& defaultValue = "");

    // Finalize and get the query
    string build() const;

private:
    // Private members for storing query components
    string operation;
    string baseQuery;
    unordered_map<string, string> variables;
    vector<string> fieldsStack;
    string variablesSegment;

    // Private methods for internal operations
    string buildFields() const;
    string buildVariables() const;
};

#endif //GRAPHQLOL_QUERY_BUILDER_H
