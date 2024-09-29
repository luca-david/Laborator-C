//Scrieţi un program pentru afişarea codurilor tuturor caracterelor cu coduri între 32 şi 127,
//folosind funcţia printf într-un ciclu, câte zece caractere pe o linie.


#include <stdio.h>

int main() {
    int count = 0;
    for (int ch = 32; ch <= 127; ch++) {
        printf("%c = %d ", ch, ch);
        count++;
        if (count == 10) {
            printf("\n");
            count = 0;
        }
    }
    return 0;
}
