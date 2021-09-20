#include <stdio.h>

int main() {
    int a = 10;
    double b = 12.34567890;
    printf("%s%d\n", "Sum of int and double outputted as int: ", int(a+b));
    printf("%s%lf\n", "Sum of int and double outputted as double: ", (a+b));
    printf("%s%0.10lf\n", "Sum of int and double outputted as a double with set precision: ", (a+b));

    printf("%s\n", "Powers of 2 that fit within the unsigned int data type: ");
    for (unsigned int i = 1, j = 0; j <= 32; i *= 2, j++) {
        if (i == 0) printf("%u  %u %s\n", j, i, "OVERFLOW!");
        else printf("%u  %u\n", j, i);
    }
}
