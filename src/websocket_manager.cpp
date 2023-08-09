//
// Created by lyndskg on 8/9/23.
//

#include "../include/graphQLOL/websocket_manager.h"
#include <websocketpp/config/asio_no_tls.hpp>
#include <websocketpp/client.hpp>

using std::string;

namespace WebSocketManager {

    typedef websocketpp::client<websocketpp::config::asio> client;

    void establishConnection(const string& wsEndpoint) {
        // Implement WebSocket connection logic using a library like WebSocket++

        client wsClient;

        wsClient.init_asio();
        wsClient.set_message_handler(onMessage);

        websocketpp::lib::error_code ec;
        client::connection_ptr con = wsClient.get_connection(wsEndpoint, ec);
        if (ec) {
            // Handle error
        }

        wsClient.connect(con);
        wsClient.run();
    }

    void onMessage(const string& message) {
        // Pseudo: Handle incoming WebSocket message.
        // Implement logic to handle incoming WebSocket messages
    }

    // Implement additional functions for sending messages, handling connection events, etc.
    // For example:
    // void sendMessage(const string& message);
    // void handleConnectionOpen();
    // void handleConnectionClose();

} // namespace WebSocketManager