//
// Created by lyndskg on 8/9/23.
//

#include "include/xcode_redirect.hpp"

using namespace std;

int main(int argc, char* argv[]) {
    // To speed up I/O
    ios_base::sync_with_stdio(false);
    xcode_redirect(argc, argv);

    return 0; // Exit the program successfully.
} // main()