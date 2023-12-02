#include <stdio.h>

int main() {
    int i,j,s;

    for (i = 1; i <= 5; i++) {
        
        for ( s= 1; s < i; s++) {
            printf("   ");
        }

        
        int num = (i % 2 == 0) ? 0 : 1;
        for ( j = i; j <= 5; j++) {
            printf("%d ", num);
            num = 1 - num;
        }

        printf("\n");
    }

    
}
