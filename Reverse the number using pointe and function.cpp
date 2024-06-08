#include<stdio.h>
void reverse(int *num){
	int reversed=0;
	while(*num>0){
		int rem=*num%10;
		reversed=reversed*10+rem;
		*num=*num/10;
	}
	*num=reversed;
}

int main(){
	
	
int num;
printf("Enter a number\n ");
scanf("%d",&num);
reverse(&num);//pass by reference
printf("%d",num);	
}
