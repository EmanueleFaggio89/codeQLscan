#include <cstring>
#include <iostream>

void copyBytes(void* dest, const void* src, size_t n) {
    memcpy(dest, src, n);
}

int main() {
    char src[] = "Hello";
    char dest[10];
    copyBytes(dest, src, strlen(src) + 1);
    std::cout << dest << std::endl;
    return 0;
}
