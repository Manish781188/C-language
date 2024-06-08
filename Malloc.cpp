#include<stdio.h>
#include<stdlib.h>

int main(){
	// use of malloc
	int *ptr;
	int n;
	printf(" Enter the size you want \n");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int)); // dynamically memory allocation
	for(int i=0;i<n;i++){ //input the values 
		printf("Enter the value no %d of this array\n",i);
		scanf("%d",&ptr[i]);
	}
	for(int i=0;i<n;i++){ // print the values
		printf(" the value at %d of this array is %d\n",i,ptr[i]);
	}
	
}
