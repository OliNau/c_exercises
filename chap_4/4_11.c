#include <stdio.h>

int main(void){
	int user_input, digit;
	int sum = 0;

	printf("Please enter the number to be summed.\n");
	scanf("%i%", &user_input);

	while(user_input !=0){
		digit = user_input % 10;
		sum += digit;
		user_input = user_input / 10;
	}

	printf("The result equals %i.\n", sum);

	return 0;
}
