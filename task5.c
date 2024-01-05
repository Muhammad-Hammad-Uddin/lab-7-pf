#include<stdio.h>

int main(){
    int i,j,k,rows=5;

    for ( i = 1; i <= rows; i++) {
        
        for ( j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        
        printf("*");

        for ( k = 1; k < (i - 1) * 2; k++) {
            printf(" ");
        }

        if (i > 1) {
            printf("*");
        }

        printf("\n");
    }

    for ( i = rows - 1; i >= 1; i--) {

        for ( j = 1; j <= rows - i; j++) {
            printf(" ");
        }
       
        printf("*");

        for ( k = 1; k < (i - 1) * 2; k++) {
            printf(" ");
        }

        if (i > 1) {
            printf("*");
        }

        printf("\n");
    }

    
}
