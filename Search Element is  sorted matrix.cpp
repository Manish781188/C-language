#include<stdio.h>
int searchmatrix(int matrix[10][10],int rows,int cols,int target){
	int row=0;
	int col=cols-1;// start from topright corner
	
	while(row<rows && col>=0){
		if(matrix[row][col]==target){
			printf("elemenet found at [%d][%d]\n",row,col);
			return 1;
		}
		else if(matrix[row][col]>target){
			col--;
		}
		else{
			row++;
		}
	}
	return 0;
}
int main(){
	int matrix[10][10];
	int rows,cols,target;
	printf(" Enter the number of rows\n");
	scanf("%d",&rows);
	printf("Enter the number of column\n");
	scanf("%d",&cols);
	printf(" Enter the elements of sorted matrix\n");
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			scanf("%d",&matrix[i][j]);
		}
	}
	printf(" Enter the element you want to search\n");
	scanf("%d",&target);
	
	if(searchmatrix(matrix,rows,cols,target)){
		printf("Target %d maninu mil gya \n",target);
		
	}
	else{
	printf(" Element is not found");	
	}
}
