
// Trasnspose the squar  matix
#include<stdio.h>
void Transpose(int original[10][10],int Transposed[10][10],int rows,int col){
	for(int i=1;i<=rows;i++){
		for(int j=1;j<=col;j++){
			Transposed[j][i]=original[i][j];
		}
	}
}
void  Display(int arr[10][10],int rows,int col){
	for(int i=1;i<=rows;i++){
		for(int j=1;j<=col;j++){
		printf("%d\t",arr[i][j]);
	}
		printf("\n");
		}
	}

int main(){
	 int original[10][10];
	 int Transposed[10][10];
	 int rows,col;
	 printf(" enter the number of rows\n");
	 scanf("%d",&rows);
	 printf("enter the number of column\n");
	 scanf("%d",&col);
	 for(int i=1;i<=rows;i++){
	 	for(int j=1;j<=col;j++){
	 		scanf("%d",&original[i][j]);
		 }
	 }
	 printf("\n original matrix :\n");
	 Display(original,rows,col);
	 Transpose(original,Transposed,rows,col);
	 printf("\n Transposed matrix :\n");
	 Display(Transposed,rows,col);
}
