#include <iostream>
#include <vector>

void ligneAvecMaxSomme(const std::vector<std::vector<int>>& tableau) {
    int maxSomme = 0;
    int indexLigne = -1;

    for (size_t i = 0; i < tableau.size(); ++i) {
        int somme = 0;
        for (size_t j = 0; j < tableau[i].size(); ++j) {
            somme += tableau[i][j];
        }
        if (somme > maxSomme) {
            maxSomme = somme;
            indexLigne = i;
        }
    }

    if (indexLigne != -1) {
        std::cout << "La ligne avec la plus grande somme est la ligne " << indexLigne + 1 
                  << " avec une somme de " << maxSomme << "." << std::endl;
    } else {
        std::cout << "Le tableau est vide." << std::endl;
    }
}

int main() {
    std::vector<std::vector<int>> tableau = {
        {2, 5},
        {1, 2, 3, 4},
        {7, 1, 8}
    };

    ligneAvecMaxSomme(tableau);

    return 0;
}
