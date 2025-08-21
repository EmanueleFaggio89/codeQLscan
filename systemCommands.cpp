#include <iostream>
#include <cstdlib>

int main(int argc, char* argv[]) { 
    if(argc < 2) 
        return 1; 
    std::string cmd = "cat /etc/passwd | grep " + std::string(argv[1]); 
    system(cmd.c_str()); 
    return 0; 
}

int main() { 
    system("ls"); 
    return 0; 
}

void runCommand(const std::string& cmd) { 
    system(cmd.c_str()); 
}

int main() { 
    std::string cmd = "ls"; 
    runCommand(cmd); 
    return 0; 
}
