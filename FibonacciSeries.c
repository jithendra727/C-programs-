#include<stdio.h>
int main()
{
	int num1 = 0 ;
	int num2 = 1 ;
	int num3;
	int number;
	int i;
	
	printf (" Enter the number of elements: ");
	scanf("%d",&number);
	
	printf ("\n%d %d ",num1, num2);
	for(i=2; i<number; ++i){
		num3 = num1+num2;
		printf("%d ",num3);
		num1 = num2;
		num2 = num3;
	}
	return 0;
}
