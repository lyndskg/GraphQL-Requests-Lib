//
// Created by lyndskg on 8/9/23.
//

#ifndef GRAPHQLOL_WEBSOCKET_MANAGER_H
#define GRAPHQLOL_WEBSOCKET_MANAGER_H

#include <string>

using namespace std;

namespace WebSocketManager {
    // Establishes a WebSocket connection to the provided endpoint
    void establishConnection(const string& wsEndpoint);

    // Function to handle incoming WebSocket messages
    void onMessage(const string& message);

    // Add more functions for managing WebSocket communication
    // For example, functions to send messages, handle connection events, etc.

} // namespace WebSocketManager

#endif //GRAPHQLOL_WEBSOCKET_MANAGER_H
