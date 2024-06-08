	#include<stdio.h>
int main(){
	int arr[]={8,3,5,4,9,10};
	int size=sizeof(arr)/sizeof(int);
	printf(" Initial arrat\n");
	for(int i=0;i<size;i++){
		printf("%d\t",arr[i]);
	}
	printf("\n");
	 for(int i=0;i<size-1;i++){
	 	int min_index=i;
	 	for(int j=i+1;j<size;j++){
	 		if(arr[j]<arr[min_index]){
	 			min_index=j;
			 }
		 }
		 if(arr[min_index!=i]){
		 	int temp=arr[i];
		 	arr[i]=arr[min_index];
		 	arr[min_index]=temp;
		 }
	 }
	 
	printf(" After sorting array\n");
	for(int i=0;i<size;i++){
		printf("%d\t",arr[i]);
	}
	printf("\n");
}
