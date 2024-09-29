//Să se scrie un program pentru calculul numărului combinărilor de n luate câte m
//C(n,m)=n!/(m!*(n-m)!)

/*Intrare	Ieşire
    5 3	     10
*/


#include <stdio.h>

int main() {
    int n,m, fact_n = 1, fact_m = 1, fact_k = 1;

    scanf("%d %d", &n, &m);

    int k = n - m;

    for (int i = 1; i <= n; i++) {
        fact_n = fact_n * i;
    }
    for (int j = 1; j <= m; j++) {
        fact_m = fact_m * j;
    }
    for (int p = 1; p <= k; p++) {
        fact_k = fact_k * p;
    }

    int combinari = fact_n / (fact_m * fact_k);
    printf("%d\n", combinari);


    return 0;
}
