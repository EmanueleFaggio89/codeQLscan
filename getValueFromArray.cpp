#include <iostream>

int getValueFromArray(const int arr[], int size, int index) { 
    if (index >= 0 && index < size) 
        return arr[index]; 
    else 
        return -1; 
}

int main() { 
    int index;
    std::cin >> index;
    int id_sequence[] = {1,2,3,4,5};
    std::cout << getValueFromArray(id_sequence, 5, index) << std::endl;
    return 0; 
}
