
#include <iostream>
#define LINUX

int main() {
    #if defined(WINDOWS)
        std::cout << "Chuong tr�nh dang ch?y tr�n h? di?u h�nh Windows" << std::endl;
    #elif defined(LINUX)
        std::cout << "Chuong tr�nh dang ch?y tr�n h? di?u h�nh Linux" << std::endl;
    #else
        std::cout << "Kh�ng th? x�c d?nh h? di?u h�nh" << std::endl;
    #endif
    return 0;
}

