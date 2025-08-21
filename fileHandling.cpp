#include <iostream>
#include <fstream>

int main() { 
    FILE* file = fopen("important_config", O_CREAT|O_TRUNC|O_WRONLY, S_IRUSR|S_IWUSR); 
    fwrite("important_config", 1, strlen("important_config"), file); 
    fclose(file); 
    return 0; 
}

int main() { 
    int fd = open("important_config", O_WRONLY|O_CREAT, S_IRUSR|S_IWUSR); 
    write(fd, "important_config", strlen("important_config")); 
    close(fd); 
    return 0; 
}
