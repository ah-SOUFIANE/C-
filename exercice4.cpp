#include <iostream>
#include <vector>
#include <climits>

void kadane1D(std::vector<int>& arr, int& maxSomme, int& start, int& end) {
    int sommeCourante = 0;
    int debutTemp = 0;
    maxSomme = INT_MIN;
    
    for (int i = 0; i < arr.size(); i++) {
        sommeCourante += arr[i];
        if (sommeCourante > maxSomme) {
            maxSomme = sommeCourante;
            start = debutTemp;
            end = i;
        }
        if (sommeCourante < 0) {
            sommeCourante = 0;
            debutTemp = i + 1;
        }
    }
}

void trouverSousTableauMaximal(std::vector<std::vector<int>>& matrice) {
    int lignes = matrice.size();
    int colonnes = matrice[0].size();
    
    int maxSomme = INT_MIN, startLigne, endLigne, startColonne, endColonne;
    
    for (int gauche = 0; gauche < colonnes; gauche++) {
        std::vector<int> sommeLignes(lignes, 0);

        for (int droite = gauche; droite < colonnes; droite++) {
            for (int i = 0; i < lignes; i++) {
                sommeLignes[i] += matrice[i][droite];
            }
            
            int sommeActuelle, debut, fin;
            kadane1D(sommeLignes, sommeActuelle, debut, fin);
            
            if (sommeActuelle > maxSomme) {
                maxSomme = sommeActuelle;
                startLigne = debut;
                endLigne = fin;
                startColonne = gauche;
                endColonne = droite;
            }
        }
    }

    std::cout << "Sous-tableau maximal : ";
    for (int i = startLigne; i <= endLigne; i++) {
        for (int j = startColonne; j <= endColonne; j++) {
            std::cout << matrice[i][j] << " ";
        }
    }
    std::cout << ", Somme = " << maxSomme << std::endl;
}

int main() {
    std::vector<std::vector<int>> matrice = {
        {-2, 1, -3, 4},
        {-1, 2, 1, -5},
        {4, -1, 2, 1}
    };

    trouverSousTableauMaximal(matrice);

    return 0;
}
