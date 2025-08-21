#include <iostream>
#include <cstdio>

void readFile() { 
    FILE* file = fopen("/safe/file.txt", "r"); 
    if (file) { 
        char buffer[256]; 
        fread(buffer, 1, sizeof(buffer), file); 
        fclose(file); 
    } 
}

void readRequestedFile(const char* filename) { 
    char buffer[256]; 
    FILE* file = fopen(filename, "r"); 
    if (file) { 
        fread(buffer, 1, sizeof(buffer), file); 
        fclose(file); 
    } 
}
