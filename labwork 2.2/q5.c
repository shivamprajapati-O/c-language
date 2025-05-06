#include <stdio.h>
int main()
{
    int r ;
    float pi = 3.14 ;
    printf("Enter the radius of the circle  :- ");
    scanf("%d",&r);
    printf("Perimeter of the circle is - %.2f " , 2 * pi *r);
    return 0;
}