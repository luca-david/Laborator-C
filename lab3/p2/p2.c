//Scrieţi un program pentru afişarea primelor n numere naturale nenule, câte m pe o linie.
//După fiecare 24 de linii complete afişate,
//programul va trebui să afişeze un rând liber. Pentru a afişa un rând liber, folosiţi:
//printf("\n");


/*Intrare	Ieşire
15 4	    1 2 3 4
            5 6 7 8
            9 10 11 12
            13 14 15 */

#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int count = 0;
    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
        count++;
        if (count == m) {
            printf("\n");
            count = 0;
        }
    }
    return 0;
}
