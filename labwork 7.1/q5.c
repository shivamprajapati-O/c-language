#include <stdio.h>  

int main() {
    for (int i = 1; i<=5; i++){
        for (int j = i; j<=5;j++ ) {        
            printf("%d ", i);              
        }
        printf("\n");                       
    }
    return 0;
}
