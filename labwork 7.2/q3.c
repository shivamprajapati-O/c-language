#include <stdio.h>  

int main() {
    int s;
    for (int i = 5; i >= 1; i--){
        for ( s = 1; s <= i ; s++) {  

            printf(" ");              
        }
        for (int j = i; j <=5; j++) {        
            printf("%d", i);              
        }
        printf("\n");                       
    }
    return 0;
}
