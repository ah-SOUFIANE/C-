#include <iostream>

void trierPairsImpairs(int tableau[], int taille) {
    int indexPair = 0; 

    for (int i = 0; i < taille; i++) {
        if (tableau[i] % 2 == 0) { 
            std::swap(tableau[i], tableau[indexPair]);
            indexPair++; 
        }
    }
}

int main() {
    int tableau[] = {3, 8, 5, 2, 4, 7};  
    int taille = sizeof(tableau) / sizeof(tableau[0]);  

    trierPairsImpairs(tableau, taille);  

    for (int i = 0; i < taille; i++) {
        std::cout << tableau[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
