#include<stdio.h>
int main(){
	int num;
	int i;
	int m=0;
	int flag=0;
	
	printf("Enter the Number of check prime");
	scanf("%d",&num);
	m = num/2;
	
	for(i=2; i<=m;i++){
		if (num%i==0){
			printf("Number is not Prime");
			flag=1;
			break;
		}
	}
	if(flag==0){
		printf("Number is prime");
		return 0;
	}
	
}
