#include<stdio.h>


int main(){
	int matrix[10][10];
	int row,col;
	printf("enter your row\n");
	scanf("%d",&row);
	printf("enter your col\n");
	scanf("%d",&col);
	printf("enter the element of matrix %d x %d\n",row,col);
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			scanf("%d",matrix[i][j]);
		}
	}
	/*
	printf("Initial matrix\n");
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			printf("%d\t",matrix[i][j]);
		}
		printf("n");
	}
	*/
}
