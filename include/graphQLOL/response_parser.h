//
// Created by lyndskg on 8/9/23.
//

#ifndef GRAPHQLOL_RESPONSE_PARSER_H
#define GRAPHQLOL_RESPONSE_PARSER_H

#include <string>
#include <nlohmann/json.hpp>

using std::string;

namespace ResponseParser {

    // Parse the raw API response into a JSON object
    nlohmann::json parse(const string& rawResponse);

}

#endif //GRAPHQLOL_RESPONSE_PARSER_H
