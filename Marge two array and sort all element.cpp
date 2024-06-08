// merge twp array and sort by babbule sort

#include<stdio.h>
void merge(int arr1[],int arr2[],int arr3[],int n1,int n2){ // n1 and n2 is size of arr1 and arr2
	int i;
	for(i=0;i<n1;i++){
		arr3[i]=arr1[i];
	}
	for(i=0;i<n2;i++){
		arr3[n1+i]=arr2[i];
	}
}
void babbulesort(int arr3[],int size){
	int i,j,temp;
	for(i=0;i<size-1;i++){
		for(j=0;j<size-i-1;j++){
			if (arr3[j]>arr3[j+1]){
				temp=arr3[j];
				arr3[j]=arr3[j+1];
				arr3[j+1]=temp;
			}
		}
	}
}
void printarray(int arr[],int size){
	for(int i=0;i<size;i++){
		printf("%d\t",arr[i]);
	}
	printf("\n");
}
int main(){
	int arr1[]={6,1,8,5,10};
	int size_of_arr1= sizeof(arr1)/sizeof(int);
	int arr2[]={2,3,7,4,1};
	int size_of_arr2= sizeof(arr1)/sizeof(int);
	int size_of_arr3= size_of_arr1+size_of_arr2;
	int arr3[size_of_arr3];
	merge(arr1,arr2,arr3,size_of_arr1,size_of_arr2);
	printf(" merge array before sorting\n");
	printarray(arr3,size_of_arr3);
	babbulesort(arr3,size_of_arr3);
	printf(" marege array after sorting\n");
	printarray(arr3,size_of_arr3);
}
	
//// merge two  sorted array
/*
#include<stdio.h>
int main(){
int arr1[]={1,4,6,8,9};
     int n1=sizeof(arr1)/sizeof(int);
     int arr2[]={2,3,5,7,10};  //2,3,,5,7,10
     int n2=sizeof(arr2)/sizeof(int);
     //int arr3[10];
   int n3=n1+n2;


   int arr3[n3];

   int i=0,j=0,k=0;

   while(k<n3){
    if(arr1[i]<arr2[j]){
        arr3[k]=arr1[i];
        k++;
        i++;
    }
    else{
        arr3[k]=arr2[j];
        k++;
        j++;
    }
   }
for(i=0;i<n3;i++){
    printf("%d\t",arr3[i]);
}

return 0;
}
*/
