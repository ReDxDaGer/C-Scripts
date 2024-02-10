#include <stdio.h>



void print_array(int arr[],int size){
	int i;
	for (i=0;i<size;i++){
		printf("%d\n",arr[i]);
	}
}

int main(void){
	int some[5],more[10] , i;
	for(i=0;i<5;i++){
		some[i]=i*i;
		more[i]= some[i];
	}
	for (i=5;i<10;i++){
		more[i] = more[i-1]+more[i-2];
	}
	print_array(some,5);
	print_array(more,10);
	print_array(more,8);
	
	return 0;
}
