//
// Created by lyndskg on 8/9/23.
//

# include "../include/graphQLOL/response_parser.h"

using std::string;

namespace ResponseParser {
    nlohmann::json parse(const string& rawResponse) {
        try {
            return nlohmann::json::parse(rawResponse);
        } catch (const nlohmann::json::exception& e) {}
        // Handle JSON parsing error here
        // You can throw your custom exceptions or return an error object
        // Example: throw ParseException("Failed to parse JSON response");
        // Replace "ParseException" with your custom exception class
    }
} // namespace ResponseParser
