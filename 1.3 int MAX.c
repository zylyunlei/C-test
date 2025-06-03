#include <stdio.h>

int main() {
    int max(int x, int y); // Function prototype for max
    int a,b,c;
    printf("输入两个数字逗号隔开: "); // Prompt user for input
    scanf("%d,%d", &a, &b); // Read two integers from input
    c = max(a, b); // Call the max function to find the maximum of a and b
    printf("max is %d\n", c); // Print the maximum value
    return 0; // Return 0 to indicate successful execution
}

int max(int x, int y) {
    int z;
    if(x>y)z=x;
    else z=y; // If x is greater than y, assign x to z; otherwise assign y to z
    return z; // Return the maximum value
}