///////Array
/*#include<stdio.h>
int main(){
	int RollNo[5]={11,12,13,14,15};
	RollNo[12]=18;
	printf(" value of index is %d\n",RollNo[12]);
		int size=sizeof(RollNo);
	//int size=sizeof(RollNo[2]);
	printf(" size is %d",size);
}*/
/*#include<stdio.h>
int main(){
	int size=5;
	int Rollno[size];
	for(int i=0;i<size;i++){
		scanf("%d",&Rollno[i]);
	}
//}*/
//#include<stdio.h>
//int main(){
//	int rollno[6]={2,7,8,1,6,12};
//	for(int i=0;i<6;i++){
//		if( rollno[i]%2==0){
//			printf("%d\t",rollno[i]);
//		}
//	}
//}
/*
#include<stdio.h
int main()	
	int rollno[6]={2,7,8,1,6,12};
	for(int i=5;i>=0;i--){
	printf("%d\t",rollno[i]);
		}
}*/
/*
#include<stdio.h>
void printarray(){
	int num[]={1,2,3,4,5};
	int size= sizeof(num)/sizeof(num[0]);
	for(int i=0;i<=size-1;i++){
	
		printf(" %d\t",num[i]);
}
}
int main() {
  printarray();
}*//*
#include<stdio.h>
int main(){

	int num[5]= {6,8,2,4,1};
//	index o to 4
	printf("value at index 3 =%d\n",num[3]);
	for (int i=0;i<5;i++){
		printf("%d\n",num[i]);
	}
	
	 int second[]={2,5};
	 printf("value at imdex 1: %d\n",second[1]);
	 printf(" I am working");
}*/
////1.smallest nu,ber in array
/*
#include<stdio.h>
int main(){
	int marks[]={ 7,2,8,1,9};
	int size= sizeof(marks)/sizeof(int);
	printf(" soze of array =%d\n",size);
	
	int smallest=marks[0];
	int index=0;
	for(int i=0;i<size;i++){
		if(marks[i]<smallest)
{
	smallest=marks[i];
 index=i;
	}	
	}
	printf(" smallest value in the array is: %d at index : %d",smallest,index) ;
}*/
////2. percentatage 
/*
#include<stdio.h>
int main(){
	int  marks[5]={40,20,35,15,40};
	int sum=0,percentage,size=5;
	for(int i=0;i<size;i++){
		sum+=marks[i]; //sum=sum+marks[i]
	}
	percentage=sum*100/250;
	printf(" percentage is : %d",percentage);
}*/
/////3. find key in an aerray with in index
/*
#include<stdio.h>
void scanarray(int arr[],int size){
	for(int i=0; i<size;i++){
		scanf("%d",&arr[i]);
	}
}
int search(int arr[],int size,int key){
	int index=0;
	for(int i=0;i<size;i++){
		if(arr[i]==key){
		printf("  Hurray found your key\n");
		index=i;
	}
	}
	return index;
	
}
int main(){
	int arr[5];
	int key;
	scanarray(arr,5);
	printf(" which element you want to find");
	scanf("%d",&key);
	int result=search(arr,5,key);
	printf("found at index : %d\n",result); 
	
}*/
/////4. even and odd
/*
#include<stdio.h>
int main(){

 int odd[10]={5,4,7,8,3,23,45,68,54,90};
 printf("your odd number are :\n");
 for(int i=0;i<10;i++){
 	if(odd[i]%2!=0){
 		printf(" %d\t",odd[i]);
	 }
 }
 printf(" your even number are :\n");

 for(int i=0;i<10;i++){
 	if(odd[i]%2==0){
 		printf(" %d\t",odd[i]);
	 }
 }
}*/
////5. find duplicate in an array and print it 
/*
#include<stdio.h>
int main(){
	int arr[5]={1,3,2,2,5};
	printf("duplicates in an array:\n");
	for(int i=0;i<5;i++){
		for(int j=i+1;j<5;j++){
		if(arr[i]==arr[j]){
			printf(" %d\t",arr[i]);
		}
		}
		}
		return 0;
	}
	*/
	////6.find a key in an array or linear search
	/*
	#include<stdio.h>
	
	
	int main(){
		int key,flag=0;
		int arr[]={5,4,7,8,9};
		int size = sizeof(arr)/sizeof(int);
		printf("Enter  the value of key you want to  find\n");
		scanf("%d",&key);
		for(int i=0;i<size;i++){ //traversing 
			if(arr[i]==key){
				printf(" your key %d is found on %d index",key,i);
				flag++;
				break;
				
			}
			
		}
		if(flag==0){
			printf("key is not found");
		}
		}*/
		
		/////7.  search by function
	/*	//linear search
#include<stdio.h>
//0 == false 1 == true
bool search(int arr[],int n,int key){
  //traversing ghoomna hai
  int flag=false;
  for(int i=0;i<n;i++){//traversing
    if(arr[i]==key){
      printf("your key %d is found on %d index\n",key,i);
      flag=true;
      break;
    }
  }
  return flag;
}

int main(){
  int arr[]={5,9,13,7,1};
  int size=sizeof(arr)/sizeof(int);
  
  int key;
  printf("enter the value of key u want to find \n");
  scanf("%d",&key);
  
  //function call  
  bool result=search(arr,size,key);
  printf("returned value from function is %d\n",result);
  if(result==false){
    printf("key not found");
  }
}*/
////8. bubble sort(increasing order)
/*
#include<stdio.h>

void bubblesort( int arr[],int size){
	int i,j,temp; // i for passes and j for swapping
	int flag=0;
	for(i=0;i<size-1;i++){
		for(j=0;j<size-i-1;j++){
			if (arr[j]>arr[j+1]){
		   temp =arr[j];
		   arr[j]=arr[j+1];
		   arr[j+1]=temp;
		   flag++;
			}
		}
		if(flag==0){
			break;
		}
	}
}
void printArray(int arr[],int size){

int i;
for(i=0;i<size;i++){
	printf("%d\t",arr[i]);
}
printf("\n");

}
int main(){
	int arr[]={5,7,3,9,2};
	int size= sizeof(arr)/sizeof(int);
	printf(" Initial array\n");
	printArray(arr,size);
	bubblesort(arr, size);
	printf(" sorted array\n");
	printArray(arr,size);
}*/

///9.selection sort  
/*
#include<stdio.h>
void selectionsort(int arr[],int size){
	int i,j,min_index,temp;
	for(i=0;i<size-1;i++){
		min_index=i;
		for(j=i+1;j<size;j++){
			if(arr[j]<arr[min_index]){
				min_index=j;
				
			}
		}
		if(min_index!=i){
			temp=arr[i];
			arr[i]=arr[min_index];
			arr[min_index]=temp;
		}
	}
}
void printArray(int arr[],int size){
	for(int i=0;i<size;i++){
		printf("%d\t",arr[i]);
	}
	printf("\n");
}
int main (){
	int arr[]={11,2,6,1,7};
	int size= sizeof(arr)/sizeof(int);
	printf("Initial array\n");
	printArray(arr,size);
	selectionsort(arr,size);
	printf("After sorting array\n");
	printArray(arr,size);
}*/
//10. binary search 
/*
#include<stdio.h>
int  binarysearch( int arr[],int left,int right,int key){
	while(left<=right){
		int mid = (left+right)/2;
		if(arr[mid]==key){
			return mid;
		}
		if(arr[mid]<key){
			left=mid+1;
		}
		else{
			right=mid-1;
		}
	
	}
	return -1;
}


int main(){

int arr[]={7,13,23,29,38,55,65};
int size= sizeof(arr)/sizeof(int);
int key;
printf(" Enter the value of key u want to search\n");
scanf("%d",&key);

int result=binarysearch(arr,0,size-1,key);
(result==-1)?printf(" key is not present in"   // ternary operater : use like a if else
                  "the array")
                   :printf("key is present at index %d",result);
}*/

