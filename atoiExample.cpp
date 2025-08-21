#include <iostream>
#include <cstdlib>

int main(int argc, char* argv[]) { 
    int idx = atoi(argv[1]);
    if (idx < argc) 
        std::cout << argv[idx] << std::endl; 
    return 0; 
}
