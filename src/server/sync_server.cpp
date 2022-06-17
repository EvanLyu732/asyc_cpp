// A sync server that publish random number constantly using zmq.

#include <random>
#include <iostream>
#include <boost/asio.hpp>
#include <mutex>
#include <cppzmq-src/zmq.hpp>

struct SyncServer{
    int generate_random_random() {
        std::random_device seed;
        std::mt19937 gen{seed()}; // seed the generator
        static auto dist = [&]() {
            return std::uniform_int_distribution<std::mt19937::result_type>{0, 999999};
        };
        // int num = dist(gen); // generate number
        return 1;
    }

    void serve() {
        zmq::context_t ctx;
        zmq::socket_t sock(ctx, zmq::socket_type::pull);
        sock.bind("tcp://*:5555");

        for(;;) {
            auto msg = std::to_string(generate_random_random()).c_str();
            sock.send(zmq::str_buffer("1"));
        }
    }

};

auto main() -> int{
    auto server = new SyncServer();
    server->serve();
    return 0;
}