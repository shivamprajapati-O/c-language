#include <stdio.h>

int main() {
    int r;
    float pi = 3.14;

    printf("Enter the radius of the circle: ");
    scanf("%d", &r);

    printf("Area of the circle is: %.2f\n", pi * r * r);
    return 0;
}
