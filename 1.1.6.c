#include <stdio.h>

int main() {
    int max(int x, int y, int z);
    int a, b, c, d;
    printf("输入三个数字逗号隔开: ");  // Prompt user for input
    scanf("%d,%d,%d", &a, &b, &c);
    d = max(a,b,c);
    printf("max is %d\n", d); // Print the maximum value

    // Read two integers from input
    return 0; // Return 0 to indicate successful execution
}   

int max(int x, int y, int z) {
    int m;
    if (x > y && x > z) {
        m = x; // If x is greater than both y and z, assign x to m
    } else if (y > x && y > z) {
        m = y; // If y is greater than both x and z, assign y to m
    } else {
        m = z; // Otherwise, assign z to m
    }
    return m; // Return the maximum value
}