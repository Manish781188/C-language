/// 1. swap 3 number
/*
#include<stdio.h>
 void swap(int *a, int *b,int *c){
 	int temp;
 	temp=*a;
 	*a=*b;
 	*b=*c;
 	*c=temp;
 	
}
 int main(){
 	
 	int a,b,c;
 	printf("Enter the value of a , b and c \n");
 	scanf("%d%d%d",&a,&b,&c);
 	printf(" After swap value of -\n A :%d \n B : %d  \n C: %d",a,b,c);
 	swap(&a,&b,&c);
 	
 }*/
 ///2. dyanamic allocated array
 /*
 #include<stdio.h>
 #include<stdlib.h>
 
 int main(){
 	
 int *ptr;
 int n;
 printf(" Enter the size of array\n");
 scanf("%d",&n);
 ptr= (int*)malloc(n*sizeof(int));
   
   for(int i=0;i<n;i++){
   	printf("Enter the %d value of array\n",i);
   	scanf("%d",&ptr[i]);
   }
 	int sum=0;
 	
 	 for(int i=0;i<n;i++){
   	printf("%d\t",ptr[i]);
    sum=sum+ptr[i];	
   }
   
   printf("\n sum of the array %d",sum);
 }*/
 
 ////3.search element in 2D array
 
 #include<stdio.h>
 int search(int arr[10][10], int rows,int cols,int key){
 int 	row=rows;
    int col=cols-1;
    
    while(row<rows && col>=0){
    	if(arr[10][10]==key){
    		return 1;
		}
		else if(arr[10][10]>key){
			col--;
		}
		else{
			row++;
		}
	}
	return 0;
}
 int main(){
 	int arr[10][10];
 	int rows;
 	int cols;
 	printf("Enter the number of row  and col \n");
 	scanf("%d%d",&rows,&cols);
 	printf("Enter the element of the 2D array \n");
     for(int i=0;i<rows;i++){
     	for(int j=0;j<cols;j++){
     		scanf("%d",&arr[i][j]);
     	}
			 }
	for(int i=0;i<rows;i++){
     	for(int j=0;j<cols;j++){
     		printf("%d\t",arr[i][j]);
     	}
     	printf("\n");
			 }
	
	    int key;
		 printf(" Entere the key of you want to found\n");
		 scanf("%d",key);
		search(arr,rows,cols,key);
		
		if(	search(arr,rows,cols,key)){
		
		 	printf("Element %d manu mil gaya  bhai shahab\n",key);
		 }
		 else{
		 	printf("element not find\n");
		 }
	}
	
		 
 
