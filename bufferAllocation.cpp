#include <cstdlib>
#include <iostream>

void allocateAndFreeBuffer(size_t buffer_size) { 
    char* buffer = (char*)malloc(buffer_size); 
    free(buffer); 
}

int main(int argc, char* argv[]) { 
    size_t buffer_size = atoi(argv[1]); 
    char buffer[buffer_size]; 
    memset(buffer, 'A', buffer_size); 
    std::cout << buffer << std::endl; 
    return 0; 
}
