//Scrieţi un program care afişează toate numerele prime dintre primii n termeni ai şirului Fibonacci.
//El se construieşte după următoarele reguli:
//F(0)=0 F(1)=1 F(k)=F(k-1)+F(k-2), pentru orice k>1
//Şirul lui Fibonacci este următorul: 0, 1, 1, 2, 3, 5, 8, 13, 21

/*Intrare	  Ieşire
    5	        2
                3
*/

#include <stdio.h>

    //functie care sa verifice daca un numar este prim
int prime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i < num; i++) {
        if (num % 2 == 0) {
            return 0;
        }
        else {
        return 1;
        }
    }
}

int main() {
    int k;
    int fib, a = 0, b = 1;

    scanf("%d", &k);

    for (int i = 2; i < k; i++) {
        fib = a + b;
        a = b;
        b = fib;

        if (prime(fib)) {
            printf("%d ", fib);
        }
    }

    return 0;
}
