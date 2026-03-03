/* Modify 5.c so that the polynomial is evaluated using the following formula: ((((3x+2x)x-5)x-1)x+7)x-6
 *
 */

#include <stdio.h>

int main(void) {
    int x;

    printf("Enter a value for x: ");
    scanf("%d", &x);

    int value = (((((3 * x) + (2 * x)) * x - 5) * x - 1 ) * x + 7) * x - 6;

    printf("The value of polynomial ((((3x+2x)x-5)x-1)x+7)x-6 is: %d", value);
    return 0;
}