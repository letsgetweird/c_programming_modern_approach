/* prompt the user for the radius
*/

#include <stdio.h>

int main(void) {
    int radius;

    printf("Enter radius: ");
    scanf("%d", &radius);

    printf("The volume is %f", (4.0f/3.0f) * 3.14 * (radius * radius * radius));
}