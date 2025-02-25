#include <stdio.h>

int main (void) {
	float number, accum;
	char operator;

	accum = 0.0;
	
	while (operator != 'E' && operator != 'e'){

		printf("Please enter input in the following format: float char(+/-/*///S/E)\n");
		scanf("%f %c", &number, &operator);
	
		switch (operator){
			case '+':
				accum += number;
				break;	
			case '-':
				accum -= number;
				break;
			case '*':
				accum *= number;
				break;
			case '/':
				accum /= number;
				break;
			case 'S':
			case 's':
				accum = number;
				break;
			case 'e':
			case 'E':
				continue;
				break;
			default:
				printf("Invalid operator, command skipped.");
				break;
			
		}
	printf("The result is %f\n", accum);
	}

	return 0;
}
