#include <iostream>
#include <thread>

int main() {
    std::thread my_thread{[](int x) {
        std::cout << "Hello from thread " << x << std::endl;
    }, 25};
    my_thread.join();
    return 0;
}
