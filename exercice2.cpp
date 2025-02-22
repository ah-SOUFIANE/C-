#include <iostream>

void trouverPaires(int tableau[], int taille, int cible) {
    for (int i = 0; i < taille; i++) {
        for (int j = i + 1; j < taille; j++) {
            if (tableau[i] + tableau[j] == cible) {
                std::cout << "(" << tableau[i] << ", " << tableau[j] << ")  ";
            }
        }
    }
    std::cout << std::endl;
}

int main() {
    int tableau[] = {1, 4, 6, 2, 3, 5, 7};  
    int taille = sizeof(tableau) / sizeof(tableau[0]);  
    int cible = 7;  

    trouverPaires(tableau, taille, cible);  

    return 0;
}
