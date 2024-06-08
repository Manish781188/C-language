///1.palindron
/*
#include<stdio.h>
int main(){
	int num,newnum,rem,rev=0;
	printf("Enter  the  number to check a palindrone\n ");
	scanf("%d",&num);
   newnum=num;
   while(num>0){
   	rem= num%10;
   	rev= rev*10+rem;
   	num= num/10;
   }
    if(rev==newnum){
    	printf(" this a palindrone\n");
	}
	else{
		printf("this not palindron");
	}
	return 0;
}*/
//2.percentage (array)
/*
  #include<stdio.h>
  int main(){
  

	int marks[5],size=5,sum=0,percentage=0;
	
	for(int i=0;i<size;i++){
		printf(" Enter a number \n");
		scanf("%d",&marks[i]);
	}
	for(int i=0;i<size;i++){
	 	sum+=marks[i];
	}
  percentage= sum*100/500;
	printf(" your  percentage : %d\n",percentage);
	if(percentage=90&& percentage<=100){
		printf("grade : A\n");
		
	}
	 else if (percentage=80&&percentage<90){
	 	printf(" grade : B\n");
	 }
	 else if(percentage=70&& percentage<80){
	 	printf(" grade : C\n");
	 }
	 	else if(percentage=60&& percentage<70){
	 		printf("grade : D\n");
	 		
		 }
		 else{
		 	printf(" fail");
		 }
	 }*/
	 
	 ////3. bnking 
	 /*
	 #include<stdio.h>
	int  balance=0;
	 void Deposite(){
	 	int amount=0;
	 	printf(" Enter the amount of you want to deposite\n");
	 	scanf("%d",&amount);
	 	balance=amount+balance;
	 	printf(" your amount  %d is deposite successfully....\n", amount);
	 	}
	 	void withdrawal(){
	 		int amount=0;
	 		printf(" Enter the amount of you want to withdrawal\n");
	 		scanf("%d",&amount);
	 		
	 		if(balance<amount){
	 			printf(" kangal....");
			 }
			 else{
			 	balance=balance-amount;
			
	 		printf("your amount %d is withdrawal successfully....\n" ,amount);
		 }
	}
		 void displaybalance(){
		 	
		 	printf("your bank balance is : %d\n",balance);
		 	
		 }
	 int main(){
	 	int choice;
	 	
	 	do{
	 		printf("Well come tomy bank.......\n");
	 		printf(" 1.Depodite\n");
	 		printf(" 2. withdrawal\n");
	 		printf(" 3. bankbalance\n");
	 		printf(" 4. Exit");
			 	printf(" thank you for using bank\n ");
	 	printf("Enter your choice\n");
	 	scanf("%d",&choice);
	 	switch(choice){
	 		case 1:
	 			Deposite();
	 			break;
	 			case 2 :
	 				withdrawal();
	 				break;
	 				case 3 :
	 					displaybalance();
	 					break;
	 					case 4:
	 					printf(" thank you for using bank");
	 						break;
	 						default :
	 
	 							printf("invailede choice");
	 						}
	 					}
	 while(choice!=4);	 
	 		
	}*/
	//4.   left half pyaramid
	/*
	#include<stdio.h>
	int main(){
		int i,j,k,rows;
		printf("Enter the rows");
		scanf("%d",&rows);
		for(i=1;i<=rows;i++){
			for(j=1;j<=rows-i;j++){
				printf(" ");
			}
			for(k=1;k<=i;k++){
				printf("*");
			}
			printf("\n");
		}
		
	}*/
	 
	 
