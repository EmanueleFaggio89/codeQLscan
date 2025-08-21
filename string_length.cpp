#include <cstring>
#include <iostream>

size_t stringLength(const char* str) {
    return strlen(str);
}

int main() {
    const char* msg = "Hello world";
    std::cout << "Length: " << stringLength(msg) << std::endl;
    return 0;
}
