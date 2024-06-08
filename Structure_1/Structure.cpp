#include<stdio.h>
struct Detail{//user define data type
	int salary;
	float age;
	char Name;
}Manager;
 void printDetailofManager(){
 	Manager.age=52.4;
 	Manager.Name='k';
 	Manager.salary=500;
 	printf(" \nName of the Manager is %c\n",Manager.Name);
printf(" salary of the Manager is %d\n",Manager.salary);
printf(" age of the Manager is %f\n",Manager.age);	
 }

int main(){
	struct Detail person1,person2;
person1.age=22.5;
person1.salary=200;
person1.Name='p';

person2.age=21.5;
person2.salary=2000;
person2.Name='m';

printf(" Name of the perason1 is %c\n",person1.Name);
printf(" salary of the person1 is %d\n",person1.salary);
printf(" age of the person1 is %f\n",person1.age);	

printf(" \nName of the perason2 is %c\n",person1.Name);
printf(" salary of the person2 is %d\n",person1.salary);
printf(" age of the person2 is %f\n",person1.age);	
	printDetailofManager();
}
