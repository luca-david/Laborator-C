//Scrieţi un program care afişează numărul de cifre obţinut prin alipirea numerelor 1, 2, 3, …, n (1234567891011..)

//  Intrare	    Ieşire
//  100	        192

#include <stdio.h>

int main() {
    int n = 100;

    int count = 0;

    for (int i = 1; i <= 100; i++) {
        if (i / 10 == 0) {
            printf("%d, numere pana la 9\n", i);
            count = count + 1;
        }
        else if (i / 100 == 0) {
            printf("%d, numere cu 2 cifre\n", i);
            count = count + 2;
        }
        else if (i / 1000 == 0) {
            printf("%d, 3 cifre\n", i);
            count = count + 3;
        }
    }
    printf("%d\n", count);

    return 0;
}
