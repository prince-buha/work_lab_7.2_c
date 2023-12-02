  
#include<stdio.h>
main() {
  int i,j,s;
    for ( i = 1; i <= 5; i++) {
        
        for (s = 1; s <= 5 - i + 1; s++) {
            printf("%d ", j);
        }

        
        for ( j = 1; j < 2 * i - 2; j++) {
            printf("  ");
        }

        
        for ( j = 5 - i + 1; j >= 1; j--) {
            if (j != 5 || i == 1) 
                printf("%d ", j);
        }

        printf("\n");
    }

    
}
