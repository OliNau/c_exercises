#include <stdio.h>

int main(void){
	int temp_res;
	int counter;
	for(int i = 1; i <= 10; i++){
		temp_res = 1;
		counter = i;
		while(counter >= 1){
			temp_res *= counter;
			counter--;
		}
		printf("The factorial of %i is %i\n", i, temp_res);
	}
	return 0;
}
