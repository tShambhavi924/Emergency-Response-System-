#include <iostream>
#include "httplib.h"

int main() {
    // Create a client to connect to the API server
    httplib::Client client("http://jsonplaceholder.typicode.com");

    // Send a GET request to the API endpoint
    auto res = client.Get("/posts/1");

    // Check the response
    if (res && res->status == 200) {
        std::cout << "Response:\n" << res->body << std::endl;
    } else {
        std::cerr << "Error: Failed to connect or fetch data from the API!" << std::endl;
    }

    return 0;
}

