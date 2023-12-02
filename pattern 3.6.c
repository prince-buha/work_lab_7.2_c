#include <stdio.h>

int main() {
    int i,j,s;

    for ( i = 1; i <= 5; i++) {
        
        for ( s = 4; s >= i; s--) {
            printf("   ");
        }

        
        int num = 5;
        for ( j = i; j <= 5; j++) {
            printf("%d ", num);
            num--;
        }

        printf("\n");
    }


}
