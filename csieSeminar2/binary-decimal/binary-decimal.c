
#include <stdio.h>

int bin_to_dec();
int dec_to_bin();

int main() {
    bin_to_dec();
    dec_to_bin();
    return 0;
}

int bin_to_dec() {
    int n, remainder = 0, decimal = 0, power = 1;
    printf("Choose a binary number: ");
    scanf("%d", &n);

    while(n != 0) {
        remainder = n % 10;   //this gets the last digit of the number
        decimal = decimal + remainder * power;   //updates decimal and applies conversion rule
        n = n / 10;   //removes the last digit
        power = power * 2;   //increases the power after every iteration
    }
    printf("%d\n", decimal);
}


int dec_to_bin() {
    int n, remainder = 0, binary = 0, decimalPlace = 1;
    printf("Choose a decimal number: ");
    scanf("%d", &n);

    while (n != 0) {
        remainder = n % 2;
        binary = binary + remainder * decimalPlace;
        decimalPlace = decimalPlace * 10;
        n = n / 2;
    }
    printf("%d\n", binary);

    return 0;
}
