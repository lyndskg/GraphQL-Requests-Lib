//
// Created by lyndskg on 8/9/23.
//

#include "../include/graphQLOL/error_handler.h"

using namespace std;

ErrorHandler::GraphQLException::GraphQLException(const string& msg) : message(msg) {}

const char* ErrorHandler::GraphQLException::what() const noexcept {
    return message.c_str();
}

void ErrorHandler::handleAPIError(const string& rawResponse) {
    // Pseudo: Parse the rawResponse and throw GraphQLException with appropriate message if there's an error.
}
