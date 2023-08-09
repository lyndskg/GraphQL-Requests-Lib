//
// Created by lyndskg on 8/9/23.
//

#ifndef GRAPHQLOL_REQUEST_MANAGER_H
#define GRAPHQLOL_REQUEST_MANAGER_H

#include <string>
#include <map>

using namespace std;

class RequestManager {
public:
    // Constructor with the API endpoint
    explicit RequestManager(const string& endpoint);

    // Destructor
    ~RequestManager() = default;

    // Sends a POST request with the provided GraphQL query
    string sendQuery(const string& query);

    // Set header fields for HTTP request
    void setHeader(const string& header, const string& value);

private:
    string endpoint;
    map<string, string> headers;

    // Helper functions for setting headers, handling timeouts, etc.
    void setupCurlOptions(void* curl, const string& query);
};


#endif //GRAPHQLOL_REQUEST_MANAGER_H
