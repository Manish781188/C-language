/// pointer by function
#include<stdio.h>

void increament(int *ptr){
	*ptr=*ptr+1;
	printf(" Address which is pass in the function %p\n",ptr);
	printf(" I am inside the fuction and my score is %d\n",*ptr);
}
void decreament(int age){
	age--;
	printf("Valve of age inside the function %d\n",age);
	
}
int main(){
printf(" Example of pass by value(copy)\n");	
int age=22;
	printf(" value of age is %d \n",age);
	decreament(age);//pass by copy
	printf(" value of age after decreament %d\n",age);
	printf("\n Example of call by reference\n");

  int score=50;
int *ptr=&score;
printf("Value of address of my variabe is %p\n",ptr);
printf(" Value of score is %d\n",*ptr);

increament(ptr);// pass by reference/address
printf(" Value of score after increament  %d\n",*ptr);

}
