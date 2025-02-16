#include <stdio.h>

int main() {
    int a, b, c;

    // Taking input for three sides
    
    scanf("%d %d %d", &a, &b, &c);

    // Check if it forms a valid triangle
    if (a + b > c && a + c > b && c + b > a) {
        // Check for Equilateral Triangle
        if (a == b && b == c) {
            printf("Equilateral\n");
        }
        // Check for Scalene Triangle
        else if (a != b && b != c && a != c) {
            printf("Scalene \n");
        }
        // If not equilateral or scalene, it must be Isosceles
        else {
            printf("Isosceles \n");
        }
    } else {
        // Case when the sides do not form a valid triangle
        printf("Not a valid triangle\n");
    }

    return 0;
}
