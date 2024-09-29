//Program care citeşte un număr N şi N note (între 1 şi 10) şi afişează procentul notelor sub 5.

#include <stdio.h>

int main() {
    int n, count;

    scanf("%d", &n);

    int array[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < n; i++) {
        if (array[i] < 5) {
            count++;
        }
    }

    int percentage = count * 100 / n;

    printf("%d\n", percentage);


    return 0;
}
