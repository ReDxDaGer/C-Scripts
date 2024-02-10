#include <stdio.h>

int main(void)
{
	int num1, num2 ,res;
	printf("Hello Guys today we will be checking from the number entered here that ,  which one is max ???\n");
	printf("Enter the Firts number!! : ");
	scanf("%d",&num1);
	printf("Entert the Seconf number!! : ");
	scanf("%d",&num2);
	res = max(num1,num2);

}
int max(int a , int b){
	
	int bigger;

	bigger = a;
	printf("Now we will check which one of the following number is the max !! \n");
	
	if(a>b){
		printf("The 1st no. is greater !! which is ");
		printf("%d",a);
	}
	else if(a==b){
		printf("They both are equal !! No one is max\n");
	}
	else{
		printf("The second no. is max !! which is ");
		printf("%d",a);
	}
	return bigger;
}