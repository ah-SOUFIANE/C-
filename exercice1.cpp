#include <iostream>

int main() {
    int arr[] = {1, 2, 3, 2, 1};  
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int unique = 0;
    
    for (int i = 0; i < n; i++) {
        unique ^= arr[i];  
    }
    
    std::cout << "Le nombre unique est : " << unique << std::endl;

    return 0;
}
