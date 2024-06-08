// square matrix roted 90 degree
#include<Stdio.h>
void rotate(int matrix[10][10],int n){
	//transopose
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;++j){
			int temp=matrix[i][j];
			 matrix[i][j]=matrix[j][i];
			 matrix[j][i]=temp;
		}
	}
	//reverse each row of the transpose matrix
	for(int i=0;i<n;i++){
		for(int j=0;j<n/2;++j){
			//swap element of matrix[i][j] an matrix[i][n-1-i]	
			int temp=matrix[i][j];
		 matrix[i][j]=matrix[i][n-1-j];
		 matrix[i][n-1-j]=temp;
	}
	}
}
void Display(int matrix[10][10],int n){
	for(int i=0;i<n;i++){
 	for(int j=0;j<n;j++){
 		printf("%d\t",matrix[i][j]);
	 }
	 printf("\n");
}
}

int main() {
int matrix[10][10];
int n;
printf("Enter the size of  the square matrix\n");
scanf("%d",&n);
 printf(" Enter the element of the matrix \n");
 for(int i=0;i<n;i++){
 	for(int j=0;j<n;j++){
 		scanf("%d",&matrix[i][j]);
	 }
 }
 printf("\n original matrix\n");
 Display(matrix,n);	
 rotate(matrix,n);
 printf(" \n after rotating 90 degee clockwise\n");
 Display(matrix,n);	
}
