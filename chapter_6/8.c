/* Write a program that prints a one-month calendar. The user specifies the number of days in the month 
 * and the day of the week on which the month begins
*/

#include <stdio.h>

int main(void){

	int days, day_of_week, blanks;

	printf("Enter number of days in month: ");
	scanf("%d", &days);
	printf("Enter starting day of the week (1=Sun, 7=Sat): ");
	scanf("%d", &day_of_week);

	printf("\n");

	blanks = day_of_week - 1 ;

	for (int i = 0; i < blanks; i++) {
		printf("\t");
	}

	for (int i = 1; i <= days; i++) {
		printf("%d\t", i);

		if ((i + day_of_week - 1) % 7 == 0) {
			printf("\n");
		}
	}

		
	printf("\n");

	return 0;
}
