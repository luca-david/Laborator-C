//Se citeşte de la tastatură un număr natural P.
//Să se determine toate tripletele distincte de numere întregi (i, j, k)
//cu proprietatea că ele pot reprezenta laturile unui triunghi de perimetru P. Folosiţi maxim două instrucţiuni for.


#include <stdio.h>

int main() {

    int p;
    scanf("%d", &p);

    for (int i = 0; i <= p; i++) {
        for (int j = i; j <= p; j++) {
            int k = p - i - j;
            if (i + j >= k && i + k >= j && j + k >= i) {
                printf("%d %d %d\n", i, j, k);
            }
        }
    }
    return 0;
}
