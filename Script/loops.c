#include <math.h>
#include <stdio.h>

int main(void){
	int num1 , num2;
	printf("Hello sir i will be checking your age if you are eligible enough to get a licence or not !! \n");
	printf("Please enter your age here sir :  ");
	scanf("%d", &num1);
	if (num1 >= 18){
		printf("You are eligible to drive !! \n");
	}
	else{
		printf("You are not eligible enough to drive !!\n");
	}

}
