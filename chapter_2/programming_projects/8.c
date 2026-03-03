/* Write a program that calculates the remaining balance on a loan after the first, second, and third monthly payments:
 * Display each balance with two digits after the decimal point. Hint: Each month, the balance is decreased by the
 * amount of the payment, but increased by the balance times the monthly interest rate. To find the monthly interest
 * rate, convert the interest rate entered by the user to a percentage and divide it by 12.
 */

#include <stdio.h>

int main(void) {
    float loan;
    float interest;
    float monthly;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);

    printf("Enter interest rate: ");
    scanf("%f", &interest);

    printf("Enter monthly: ");
    scanf("%f", &monthly);

    loan = (loan - monthly) + (loan * ((interest / 100.00) / 12));
    printf("\nBalance remaining after first payment: $%.2f\n", loan);

    loan = (loan - monthly) + (loan * ((interest / 100.00) / 12));
    printf("Balance remaining after second payment: $%.2f\n", loan);

    loan = (loan - monthly) + (loan * ((interest / 100.00) / 12));
    printf("Balance remaining after third payment: $%.2f\n", loan);

    return 0;
}