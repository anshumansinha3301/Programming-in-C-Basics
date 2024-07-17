#include <stdio.h>

int main() {
    int a[10][10], b[10][10], mul[10][10], r, c, i, j, k;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &r, &c);
    printf("Enter elements of first matrix:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter elements of second matrix:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    printf("Product of the matrices:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            mul[i][j] = 0;
            for(k = 0; k < c; k++) {
                mul[i][j] += a[i][k] * b[k][j];
            }
            printf("%d\t", mul[i][j]);
        }
        printf("\n");
    }
    return 0;
}
