#include<stdio.h>
void swap(int *a,int*b,int *c){
	int temp=*b;
	*b=*a;
	*a=*c;
	*c= temp;
}


int main(){
	int a=10;
	int b=15;
	int c=20;
	printf(" a : %d \n b :%d \n c :%d\n",a,b,c);
	 swap(&a,&b,&c);
	 printf(" After swaping value of a ,b,c \n");
	 printf(" a : %d \n b:%d \n c :%d",a,b,c);
}
