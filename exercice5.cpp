#include <iostream>
#include <vector>
#include <unordered_set>

bool estPermutation(const std::vector<std::vector<int>>& matrice) {
    int N = matrice.size();
    if (N == 0) return false;
    int M = matrice[0].size();
    int taille = N * M;

    std::unordered_set<int> nombres;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            int nombre = matrice[i][j];
            if (nombre < 1 || nombre > taille) {
                return false;
            }
            nombres.insert(nombre);
        }
    }

    for (int i = 1; i <= taille; ++i) {
        if (nombres.find(i) == nombres.end()) {
            return false;
        }
    }

    return true;
}

int main() {
    std::vector<std::vector<int>> matrice = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    if (estPermutation(matrice)) {
        std::cout << "C'est une permutation." << std::endl;
    } else {
        std::cout << "Ce n'est pas une permutation." << std::endl;
    }

    return 0;
}
