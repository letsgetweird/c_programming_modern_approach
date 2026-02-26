/* write a program that computes the volume of a sphere with a 10-meter radius
 * using the formula v=4/3(pie)r^3. Write the fraction 4/3 as 4.0f/3.0f. (Try writing it as 4/3
 * . What happens?)
 *
 */

#include <stdio.h>

int main(void) {
    printf("The volume is %f", (4.0f/3.0f) * 3.14 * (10 * 10 * 10));
}