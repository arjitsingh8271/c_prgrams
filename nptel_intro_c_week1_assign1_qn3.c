/*
Given the coefficients of a pair of linear equations,
a1 x + b1 y = c1
a2 x + b2 y = c2
Find the solutions to x and y

Input:
Input consists two lines.
The first line contains coefficients of first equation, a1 b1 c1 in that order
The second line contains coefficients of second equation, a2 b2 c2 in that
order

Output:
The solutions to x and y.
*/

#include <stdio.h>

int main() {
    int a1, b1, c1;
    scanf("%d %d %d", &a1, &b1, &c1);

    int a2, b2, c2;
    scanf("%d %d %d", &a2, &b2, &c2);

    int x = ((c1 * b2) - (b1 * c2)) / ((a1 * b2) - (b1 * a2));
    int y = ((a1 * c2) - (c1 * a2)) / ((a1 * b2) - (b1 * a2));

    printf("%d %d\n", x, y);

    return 0;
}
