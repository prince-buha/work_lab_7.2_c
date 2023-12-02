#include <stdio.h>

int main() {
    int rows = 9;
    int columns = 10;
    int i,j;

    for ( i = 1; i <= rows; i++) {
        for ( j = 1; j <= columns; j++) {
            if (j <= i && j <= columns - i + 1)
                printf("%d ", j);
            else if (j > i && j >= columns - i + 1)
                printf("%d ", columns - j + 1);
            else
                printf("  "); 

        }
        printf("\n");
    }
    return 0;
}

