#include<stdio.h>
int binarysearch(int arr[],int left,int right,int key){
	
	while(left<=right){
		int mid= (left+right)/2	;
		if(arr[mid]==key){
	    return mid;
		}
		if(key<arr[mid]){
			right= mid-1;	
		}
		else{
			left= mid+1;
			
		}
		
	}
	return -1;
	
}
int main(){
	
	int arr[]={33,44,55,66,77,88,99};
	
	int size= sizeof(arr)/sizeof(int);
	printf(" size:%d\n",size);
	int key,left=0,right=size-1;
	printf("Enter your key you want to find\n");
	scanf("%d",&key);
int result=binarysearch(arr,0,size-1,key);
	printf(" result:%d\n",result);
		(result==-1)?printf(" your key is not "
		     "found\n"):printf(" your key is found at index :%d\n",result);
		}
	

