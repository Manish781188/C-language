#include<stdio.h>
#include<stdlib.h>
int main(){
	//use of callloc
	int *ptr;
	int n;
	printf("Enter the seze you want\n");
	scanf("%d",&n);
	ptr= (int*)calloc(n,sizeof(int));
	for(int i=0;i<n;i++){
		printf(" Enter the value no %d if this array\n",i);
		scanf("%d",&ptr[i]);
	}
//	free(ptr); //free to the memory
	
	for(int i=0;i<n;i++){
		printf(" the value at no %d of this array is %d\n",i,ptr[i]);
     }
 ///use of reallocation
 printf(" Enter the new value of array you want creat\n");
 scanf("%d",&n);
 ptr = (int*)realloc(ptr,n*sizeof(int));
	
	for(int i=0;i<n;i++){
		printf(" Enter the value no %d if this array\n",i);
		scanf("%d",&ptr[i]);
	}
	for(int i=0;i<n;i++){
		printf(" the value at no %d of this array is %d\n",i,ptr[i]);
     }
    
}
