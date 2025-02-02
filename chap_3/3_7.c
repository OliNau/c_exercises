#include <stdio.h>

int main (void){
	int days = 256, days_per_week = 7;
	int next_multiple = days + days_per_week - days % days_per_week;
	printf("%i rounded up to %i days per week equals %i days.\n", days, days_per_week, next_multiple);

	return 0;
}
