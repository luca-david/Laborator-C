//Să se scrie un program care determină valoarea minimă dintre toate valorile maxime pe
//liniile unei matrice de numere intregi (punct in “şa”)
/*
Intrare	        Ieşire
4 4
2 17! 1 4          8
9 2 11! 3
1 8! 5 6
8 9! 3 4
*/

#include <stdio.h>

int main() {
    int k, l, max;

    scanf("%d %d", &k, &l);

    int array[k][l];

    for (int i = 0; i < k; i++) {
        for (int j = 0; j < l; j++) {
            scanf("%d", &array[i][j]);
        }
    }
    int min = 100;
    for (int i = 0; i < k; i++) {
        max = 0;
        for (int j = 0; j < l; j++) {
            if (max < array[i][j]) {
                max = array[i][j];
            }
        }
        if (max < min) {
            min = max;
        }
    }
    printf("%d\n", min);

    return 0;
}
