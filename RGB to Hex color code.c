#include <stdio.h>

int main() {
    int r, g, b;
    printf("Enter RGB values: ");
    scanf("%d %d %d", &r, &g, &b);
    printf("Hex Color Code: #%02X%02X%02X\n", r, g, b);
    return 0;
}
