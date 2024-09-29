//Să se scrie un program care citeşte un şir de numere (pozitive şi negative)
//şi afişează numărul de numere negative şi numărul de numere pozitive din şirul citit

/*
Intrare	        Ieşire
5
-2 3 5 -7 11    2 3

5
2 3 4 4 5	    0 5
*/

#include <stdio.h>

int main() {
    int n, pos, neg;

    scanf("%d", &n);

    int array[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < n; i++) {
        if (array[i] >= 0) {
            pos++;
        }
        else {
            neg++;
        }
    }

    printf("%d %d\n", neg, pos);

    return 0;
}
