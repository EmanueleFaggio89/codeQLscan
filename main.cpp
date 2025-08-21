#include <iostream>
#include <vector>
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

void copyBytes(void* dest, const void* src, size_t n) {
    memcpy(dest, src, n);
}

size_t stringLength(const char* str) {
    return strlen(str);
}

int getMonthlySales(int i) {
    return i * 100; // Placeholder
}

int getValueFromArray(const int arr[], int size, int index) {
    if(index >= 0 && index < size)
        return arr[index];
    else
        return -1;
}

struct person {
    int status;
    char name[50];
};

person* allocatePerson() {
    person* p = (person*)malloc(sizeof(person));
    p->status = 0;
    strcpy(p->name, "John");
    return p;
}

void readFile() {
    FILE* file = fopen("/safe/file.txt", "r");
    if(file) {
        char buffer[256];
        fread(buffer, 1, sizeof(buffer), file);
        fclose(file);
    }
}

void readRequestedFile(const char* filename) {
    char buffer[256];
    memset(buffer, 'A', sizeof(buffer));
    FILE* file = fopen(filename, "r");
    if(file) {
        fread(buffer, 1, sizeof(buffer), file);
        fclose(file);
    }
}

void allocateAndFreeBuffer(size_t buffer_size) {
    char* buffer = (char*)malloc(buffer_size);
    free(buffer);
}

void readFileAndChecksum() {
    FILE* file = fopen("file.txt", "r");
    char buffer[1024];
    size_t bytesRead = fread(buffer, 1, sizeof(buffer), file);
    unsigned int checksum = 0;
    for(size_t i = 0; i < bytesRead; i++)
        checksum += buffer[i];
    if(checksum == 0)
        std::cout << "Buffer empty\n";
    fclose(file);
}

void readFileAndChecksumSave() {
    FILE* file = fopen("file.txt", "r");
    char buffer[1024];
    size_t bytesRead = fread(buffer, 1, sizeof(buffer), file);
    unsigned int checksum = 0;
    for(size_t i = 0; i < bytesRead; i++)
        checksum += buffer[i];
    if(checksum == 0)
        std::cout << "Buffer empty\n";
    FILE* out = fopen("checksum.txt", "w");
    fprintf(out, "Bytes: %zu Checksum: %u\n", bytesRead, checksum);
    fclose(file);
    fclose(out);
}

void readLargeBuffers() {
    char buf[1024];
    char buf1[1024];
    fgets(buf, 1024, stdin);
    fgets(buf1, 1024, stdin);
}

int scan() {
    char buf[1024];
    return scanf("%1023[^\n]", buf);
}

void readBuffer() {
    char buf[1024];
    fgets(buf, 10, stdin);
}

void runCommand(const std::string& cmd) {
    system(cmd.c_str());
}

// Entry point
int main(int argc, char* argv[]) {
    // 1. Memcpy
    char buffer[256];
    memcpy(buffer, "Hello", strlen("Hello") + 1);

    // 2. Vehicles
    std::vector<std::string> vehicles = {"car", "bike", "truck"};
    std::cout << "Enter vehicle index: ";
    int index;
    std::cin >> index;
    std::cout << vehicles[index] << std::endl;

    // 3. Atoi & vehicle display
    if(argc > 1) {
        int val = atoi(argv[1]);
        if(val >= 0 && val < vehicles.size())
            std::cout << vehicles[val] << std::endl;
        else
            std::cout << "invalid input\n";
    }

    // 4. Print all vehicles
    int idx;
    std::cin >> idx;
    std::cout << vehicles[idx] << std::endl;
    for(auto& v : vehicles)
        std::cout << v << std::endl;

    // 5. Array access
    int id_sequence[] = {1,2,3,4,5};
    std::cin >> index;
    std::cout << getValueFromArray(id_sequence, 5, index) << std::endl;

    // 6. Simple array access
    int arr[] = {0,1,2,3,4,5,6,7,8,9};
    std::cin >> index;
    if(index >= 0 && index < 10)
        std::cout << arr[index] << std::endl;
    else
        std::cout << -1 << std::endl;

    // 7. Arg parse
    if(argc > 1) {
        int val = atoi(argv[1]) + 1000;
        std::cout << val << std::endl;
    }

    // 8. Rand and sum
    int a = rand() % 991 + 10;
    int b = rand() % 991 + 10;
    int c = rand() % 991 + 10;
    int sum = a + b + c;
    long long sum2 = (long long)a + b + c;
    std::cout << "a : " << a << " b : " << b << " c : " << c << " sum: " << sum << " sum2: " << sum2 << std::endl;

    // 9. Sales
    sum = 0;
    for(int i = 0; i < 3; i++) sum += getMonthlySales(i);
    std::cout << "Quarter 1 sales: " << sum << std::endl;

    // 10. Offset printing
    if(argc > 1) {
        size_t buffer_size = atoi(argv[1]);
        char buffer2[buffer_size];
        memset(buffer2, 'A', buffer_size);
        std::cout << buffer2 << std::endl;
    }

    // 11. File write
    int fd = open("important_config", O_CREAT|O_TRUNC|O_WRONLY|O_EXCL, 0700);
    write(fd, "important_config", strlen("important_config"));
    close(fd);

    // 12. System commands
    if(argc > 1) {
        std::string cmd = "id " + std::string(argv[1]);
        int status = system(cmd.c_str());
        std::cout << "Exit status: " << status << std::endl;
    }

    system("ls");
    runCommand("ls");

    return 0;
}
