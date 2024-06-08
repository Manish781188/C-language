#include<stdio.h>
struct student{
	char Firstname[50];
	int roll;
	float marks;
}s[3];

int main(){
	int i;
	printf("Enter Information of student :\n");
	//stote
	
	for(i=0;i<3;i++){
		s[i].roll=i+1;
		printf("\n For Roll  number %d, \n ",s[i].roll);
		printf("Enter first name :\n");
		scanf("%s",&s[i].Firstname);
		printf(" Entere marks :\n");
		scanf("%f",&s[i].marks);
	}
	printf(" Displaying Information\n");
	
		for(i=0;i<3;i++){

		printf("\n For Roll  number %d, \n ",i+1);
		printf("Enter first name :%s\n",s[i].Firstname);

		printf(" Entere marks :%.2f\n",s[i].marks);
		
	}
	}
