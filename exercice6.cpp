#include <iostream>
#include <vector>

void sommeDesLignes(const std::vector<std::vector<int>>& tableau) {
    for (size_t i = 0; i < tableau.size(); ++i) {
        int somme = 0;
        for (size_t j = 0; j < tableau[i].size(); ++j) {
            somme += tableau[i][j];
        }
        std::cout << "Somme de la ligne " << i + 1 << ": " << somme << std::endl;
    }
}

int main() {
    std::vector<std::vector<int>> tableau = {
        {1, 2, 3},
        {4, 5},
        {6, 7, 8, 9}
    };

    sommeDesLignes(tableau);

    return 0;
}
