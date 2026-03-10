/* Write a program that asks the user to enter the numbers from 1 to 16 (in any order) and then displays the numbers
 * in a 4 by 4 arrangement, followed by the sums of the rows, columns, and diagonals.
*/

#include <stdio.h>

int main (void) {
    int one, two, three, four, five, six, seven, eight;
    int nine, ten, eleven, twelve, thirteen, fourteen, fifteen, sixteen;

    printf("Enter the numbers from 1 to 16 in any order: ");
    scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d", &one, &two, &three, &four, &five, &six, &seven, &eight, &nine, &ten,
        &eleven, &twelve, &thirteen, &fourteen, &fifteen, &sixteen);

    printf("%d\t%d\t%d\t%d\n",              one, two, three, four);
    printf("%d\t%d\t%d\t%d\n",              five, six, seven, eight);
    printf("%d\t%d\t%d\t%d\n",              nine, ten, eleven, twelve);
    printf("%d\t%d\t%d\t%d\n\n", thirteen, fourteen, fifteen, sixteen);

    printf("Row sums: %d %d %d %d\n", (one + two + three + four), (five + six + seven + eight),
        (nine + ten + eleven + twelve), (thirteen + fourteen + fifteen + sixteen));

    printf("Column sums: %d %d %d %d\n", (one + five + nine + thirteen), (two + six + ten + fourteen),
        (three + seven + eleven + fifteen), (four + eight + twelve + sixteen));

    printf("Diagonal sums: %d %d\n", (thirteen + ten + seven + four), (one + six + eleven + sixteen));

    return 0;

}