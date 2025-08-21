void copyBytes(void* dest, const void* src, size_t n) { memcpy(dest, src, n); }

size_t stringLength(const char* str) { return strlen(str); }

char buffer[256]; memcpy(buffer, "Hello", strlen("Hello")+1);

std::cout << "Enter vehicle index: "; int index; std::cin >> index; std::cout << vehicles[index] << std::endl;

int val = atoi(argv[1]); if(val >= 0 && val < vehicles.size()) std::cout << vehicles[val] << std::endl; else std::cout << "invalid input\n";

std::vector<std::string> vehicles = {"car", "bike", "truck"}; int idx; std::cin >> idx; std::cout << vehicles[idx] << std::endl; for(auto &v : vehicles) std::cout << v << std::endl;

int atoi(const char* str);

int main(int argc, char* argv[]) { int idx = atoi(argv[1]); if(idx < argc) std::cout << argv[idx] << std::endl; return 0; }

int getValueFromArray(const int arr[], int size, int index) { return (index >= 0 && index < size) ? arr[index] : -1; }

int main() { int index; std::cin >> index; int id_sequence[] = {1,2,3,4,5}; int val = getValueFromArray(id_sequence, 5, index); return val; }

int getValueFromArray(const int arr[], int size, int index) { if(index >= 0 && index < size) return arr[index]; else return -1; }

int main() { int index; std::cin >> index; int id_sequence[] = {1,2,3,4,5}; return getValueFromArray(id_sequence, 5, index); }

int getValueFromArray(const int arr[], int size, int index) { if(index >= 0 && index < size) return arr[index]; else return -1; }

int main() { int index; std::cin >> index; int id_sequence[] = {1,2,3,4,5}; return getValueFromArray(id_sequence, 5, index); }

int getValueFromArray(const int arr[], int size, int index) { if(index < 0 || index >= size) return -1; else return arr[index]; }

int main() { int index; std::cin >> index; int id_sequence[] = {1,2,3,4,5}; return getValueFromArray(id_sequence, 5, index); }

int getValueFromArray(const int arr[], int size, int index) { if(index < 0 || index >= size) return -1; else return arr[index]; }

int main() { int index; std::cin >> index; int id_sequence[] = {1,2,3,4,5}; return getValueFromArray(id_sequence, 5, index); }

int getValueFromArray(const int arr[], int size, int index) { if(index >= 0 && index < size) return arr[index]; else return -1; }

int main() { int index; std::cin >> index; int id_sequence[] = {1,2,3,4,5}; std::cout << getValueFromArray(id_sequence, 5, index) << std::endl; return 0; }

int getValueFromArray(const int arr[], int size, int index) { if(index >= 0 && index < size) return arr[index]; else return -1; }

int main() { int index; std::cin >> index; int id_sequence[] = {1,2,3,4,5}; std::cout << getValueFromArray(id_sequence, 5, index) << std::endl; return 0; }

int getValueFromArray(const int arr[], int size, int index) { if(index >= 0 && index < size) return arr[index]; else return -1; }

int main() { int index; std::cin >> index; int id_sequence[] = {1,2,3,4,5}; std::cout << getValueFromArray(id_sequence, 5, index) << std::endl; return 0; }

int getValueFromArray(const int arr[], int size, int index) { if(index >= 0 && index < size) return arr[index]; else return -1; }

int main() { int index; std::cin >> index; int id_sequence[] = {1,2,3,4,5}; std::cout << getValueFromArray(id_sequence, 5, index) << std::endl; return 0; }

int main() { int input; std::cin >> input; int arr[] = {0,1,2,3,4,5,6,7,8,9}; if(input >= 0 && input < 10) std::cout << arr[input]; else std::cout << -1; }

int main() { int index; std::cin >> index; int arr[] = {0,1,2,3,4,5,6,7,8,9}; if(index >= 0 && index < 10) std::cout << arr[index]; else std::cout << -1; }

int main() { int index; std::cin >> index; int arr[] = {0,1,2,3,4,5,6,7,8,9}; if(index >= 0 && index < 10) std::cout << arr[index]; else std::cout << -1; }

int main(int argc, char* argv[]) { int val = atoi(argv[1]) + 1000; std::cout << val << std::endl; return 0; }

int main(int argc, char* argv[]) { const int offset = 1000; int val = atoi(argv[1]) + offset; std::cout << val << std::endl; return 0; }

int main(int argc, char* argv[]) { int val = atoi(argv[1]) + 1000; std::cout << val << std::endl; return 0; }

#include <iostream> #include <cstring>

int a = rand() % 991 + 10; int b = rand() % 991 + 10; int c = rand() % 991 + 10; int sum = a + b + c; long long sum2 = (long long)a + b + c; std::cout << "a : " << a << " b : " << b << " c : " << c << " sum: " << sum << " sum2: " << sum2 << std::endl;

int a = rand() % 991 + 10; int b = rand() % 991 + 10; int diff = a - b; std::cout << "a: " << a << " b: " << b << " diff: " << diff << std::endl;

int sum = 0; for(int i = 0; i < 12; i++) sum += getMonthlySales(i); std::cout << "Total sales: " << sum << std::endl;

int sum = 0; for(int i = 0; i < 3; i++) sum += getMonthlySales(i); std::cout << "Quarter 1 sales: " << sum << std::endl;

int totalSales = 0; totalSales += getMonthlySales(0); totalSales += getMonthlySales(1); totalSales += getMonthlySales(2); std::cout << "Total sales: " << totalSales << std::endl;

void readFile() { FILE* file = fopen("/safe/file.txt", "r"); if(file) { char buffer[256]; fread(buffer, 1, sizeof(buffer), file); fclose(file); } }

void readRequestedFile(const char* filename) { char buffer[256]; FILE* file = fopen(filename, "r"); if(file) { fread(buffer, 1, sizeof(buffer), file); fclose(file); } }

void readRequestedFile(const char* filename) { char buffer[256]; memset(buffer, 'A', sizeof(buffer)); FILE* file = fopen(filename, "r"); if(file) { fread(buffer, 1, sizeof(buffer), file); fclose(file); } }

int main(int argc, char* argv[]) { size_t buffer_size = atoi(argv[1]); char buffer[buffer_size]; memset(buffer, 'A', buffer_size); std::cout << buffer << std::endl; return 0; }

void allocateAndFreeBuffer(size_t buffer_size) { char* buffer = (char*)malloc(buffer_size); free(buffer); }

void readFileAndChecksum() { FILE* file = fopen("file.txt", "r"); char buffer[1024]; size_t bytesRead = fread(buffer, 1, sizeof(buffer), file); unsigned int checksum = 0; for(size_t i = 0; i < bytesRead; i++) checksum += buffer[i]; if(checksum == 0) std::cout << "Buffer empty\n"; fclose(file); }

void readFileAndChecksumSave() { FILE* file = fopen("file.txt", "r"); char buffer[1024]; size_t bytesRead = fread(buffer, 1, sizeof(buffer), file); unsigned int checksum = 0; for(size_t i = 0; i < bytesRead; i++) checksum += buffer[i]; if(checksum == 0) std::cout << "Buffer empty\n"; FILE* out = fopen("checksum.txt", "w"); fprintf(out, "Bytes: %zu Checksum: %u\n", bytesRead, checksum); fclose(file); fclose(out); }

struct person { int status; char name[50]; };

person* allocatePerson() { person* p = (person*)malloc(sizeof(person)); p->status = 0; return p; }

person* allocatePerson() { person* p = (person*)malloc(sizeof(person)); p->status = 0; return p; }

person* allocatePerson() { person* p = (person*)malloc(sizeof(person)); p->status = 0; return p; }

person* allocatePerson() { person* p = (person*)malloc(sizeof(person)); p->status = 0; return p; }

person* allocatePerson() { person* p = (person*)malloc(sizeof(person)); p->status = 0; strcpy(p->name, "John"); return p; }

person* allocatePerson() { person* p = (person*)malloc(sizeof(person)); p->status = 0; return p; }

void readLargeBuffers() { char buf[1024]; char buf1[1024]; fgets(buf, 1024, stdin); fgets(buf1, 1024, stdin); }

int scan() { char buf[1024]; return scanf("%1023[^\n]", buf); }

void readBuffer() { char buf[1024]; fgets(buf, 10, stdin); }

int main() { FILE* file = fopen("important_config", O_CREAT|O_TRUNC|O_WRONLY, S_IRUSR|S_IWUSR); fwrite("important_config", 1, strlen("important_config"), file); fclose(file); return 0; }

int main() { int fd = open("important_config", O_WRONLY|O_CREAT, S_IRUSR|S_IWUSR); write(fd, "important_config", strlen("important_config")); close(fd); return 0; }

int main() { int fd = open("important_config", O_RDWR|O_CREAT|O_TRUNC, S_IRUSR|S_IWUSR|S_IRGRP|S_IROTH); write(fd, "important_config", strlen("important_config")); close(fd); return 0; }

int main() { int fd = open("important_config", O_CREAT|O_TRUNC|O_WRONLY|O_EXCL, 0700); write(fd, "important_config", strlen("important_config")); close(fd); return 0; }

int main() { int fd = open("important_config", O_RDWR|O_CREAT, 0700); write(fd, "important_config", strlen("important_config")); close(fd); return 0; }

FILE* output = popen("getent passwd username", "r");

int main(int argc, char* argv[]) { if(argc < 2) return 1; std::string cmd = "cat /etc/passwd | grep " + std::string(argv[1]); system(cmd.c_str()); return 0; }

int main(int argc, char* argv[]) { if(argc < 2) return 1; std::string cmd = "id " + std::string(argv[1]); int status = system(cmd.c_str()); std::cout << "Exit status: " << status << std::endl; return 0; }

int main() { system("ls"); return 0; }

void runCommand(const std::string& cmd) { system(cmd.c_str()); }

int main() { std::string cmd = "ls"; runCommand(cmd); return 0; }

int main() { std::string cmd = "ls"; system(cmd.c_str()); return 0; }




