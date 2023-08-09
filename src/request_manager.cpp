//
// Created by lyndskg on 8/9/23.
//

#include "../include/graphQLOL/request_manager.h"
#include <curl/curl.h>

#include <curl/curl.h> // Pseudo: Assuming use of libcurl for HTTP requests

using namespace std;

RequestManager::RequestManager(const string& endpoint) : endpoint(endpoint) {
    headers["Content-Type"] = "application/json";
}

void RequestManager::setHeader(const string& header, const string& value) {
    headers[header] = value;
}

string RequestManager::sendQuery(const string& query) {
    CURL* curl = curl_easy_init();

    if (!curl) {
        // handle error
    }

    setupCurlOptions(curl, query);

    // Rest of curl options and logic to handle response...

    curl_easy_cleanup(curl);

    // Pseudo: Use libcurl or another HTTP library to send a POST request to `endpoint` with `query` in the body.
    // Pseudo: Set appropriate headers for GraphQL (e.g., "Content-Type: application/json")
    // Pseudo: Return the server response as a string
}

void RequestManager::setupCurlOptions(void* curl, const string& query) {
    // Pseudo: Set all the curl options, including headers and the provided query as POST body.
}

