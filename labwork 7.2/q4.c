#include <stdio.h>  

int main() {
    int s;
    for (int i = 1; i<=5; i++){
        for ( s = 1; s <= i ; s++) {  

            printf(" ");              
        }
        for (int j = i; j<=5;j++) {  
                  
            printf("%d", !((i+j)%2));              
        }
        printf("\n");                       
    }
    return 0;
}
