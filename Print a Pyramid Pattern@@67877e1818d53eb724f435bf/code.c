#include <stdio.h>

int main() {
    int N, i, j, spaces;
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        
        for (spaces = 0; spaces < N - i; spaces++) {
            printf("  ");  
        }
        
        
        for (j = 0; j < 2 * i - 1; j++) {
            printf("* ");
        }
        
        printf("\n");
    }

    return 0;
}
