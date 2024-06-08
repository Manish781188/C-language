#include<stdio.h>
struct complex{
	int img;
	float real;
};
struct number{
	struct complex comp;
	int integer;
}num1;
int main(){
num1.comp.img=11;
num1.comp.real=5.25;
num1.integer=6;
printf(" Imaginary part : %d\n",num1.comp.img);
printf(" Real patr : %.2f\n",num1.comp.real);
printf("Integer : %d\n ",num1.integer);

	
}
