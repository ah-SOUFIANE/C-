#include <iostream>

int main() {
    int arr[] = {1, 2, 3, 2, 1};  // Example input
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int unique = 0;
    
    for (int i = 0; i < n; i++) {
        unique ^= arr[i];  // XOR all elements
    }
    
    std::cout << "Le nombre unique est : " << unique << std::endl;

    return 0;
}
