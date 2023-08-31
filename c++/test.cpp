
#include <iostream>
#define LINUX

int main() {
    #if defined(WINDOWS)
        std::cout << "Chuong trình dang ch?y trên h? di?u hành Windows" << std::endl;
    #elif defined(LINUX)
        std::cout << "Chuong trình dang ch?y trên h? di?u hành Linux" << std::endl;
    #else
        std::cout << "Không th? xác d?nh h? di?u hành" << std::endl;
    #endif
    return 0;
}

