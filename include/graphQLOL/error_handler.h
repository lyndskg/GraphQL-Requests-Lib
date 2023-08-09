//
// Created by lyndskg on 8/9/23.
//

#ifndef GRAPHQLOL_ERROR_HANDLER_H
#define GRAPHQLOL_ERROR_HANDLER_H

#include <string>
#include <exception>

using namespace std;

namespace ErrorHandler {

    // Custom exception class for GraphQL-related errors
    class GraphQLException : public exception {
    public:
        explicit GraphQLException(const string& message);
        const char* what() const noexcept override;

    private:
        string message;
    };

    // Function to handle API errors
    // This function can be defined in the error_handler.cpp file
    void handleAPIError(const string& rawResponse);

} // namespace ErrorHandler

#endif //GRAPHQLOL_ERROR_HANDLER_H
