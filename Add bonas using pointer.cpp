#include<stdio.h>
void Total_salary(int *salary){
	int bonas=2000;
	int total_salary= *salary+bonas;
	*salary=total_salary;
}

int main(){
	int salary;
	printf(" Enter your salary\n");
	scanf("%d",&salary);
	
	Total_salary(&salary);
	printf(" Total salary :%d",salary);
}
