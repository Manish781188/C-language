///////////////1. making calculater using switch
////#include<stdio.h>
//int main(){
//    int output;
//	char operater;
//	printf("enter a operater\n");
//	scanf("%c",&operater);
//	int num1,num2;
//	printf("enter two number to perform a operation\n");
//	scanf("%d%d",&num1,&num2);
//	switch(operater){
//	case'+':
//	output=num1+num2;
//	printf("your addition is =%d",output);
//	break;
//	case'-':
//	output = num1-num2;
//	printf("your subtraction is=%d",output);
//	break;
//	case'*':
//	output= num1*num2;
//	printf("your multification is = %d",output);
//	break;
//	case'/':
//	output= num1/num2;
//	printf("your divide is =%d",num1,num2);
//	break;
//	default:
//		printf("enter you wrong operater");
//}
//return 0;
//	}
	
	////////2.ckeck trangle type 
//	#include<stdio.h>
//	int main(){
//	 int num1,num2,num3; 
  //  printf(" Enter first number : "); 
    //scanf("%d",&num1); 
 //
   // printf(" Enter second number : "); 
    //scanf("%d",&num2); 
 //
   // printf(" Enter third number : "); 
    //scanf("%d",&num3); 
 
    
    //if ( num1==num2 && num2==num3 ){ 
       // printf("This is an Equlateral triangle"); 
   // } 
 //
   // else if ( num1!=num2 && num2!=num3 ){ 
 //       printf("This is an Scalen triangle"); 
   // } 
 //
   // else{ 
     //   printf("This is Isoceleus triangle"); 
   // } 
 
    //return 0; 
     
//}


/////3. convert temperetute
//#include<stdio.h>
//int main(){
//	int fh,cl;
//	printf(" convert tempereture from fahrenheit to celsius\n");
//	printf("convert tempereture frome ceosius to fahrenheit\n");
//	int choice;
//	printf("enter your choice10,20\n");
//	scanf("%d",&choice);
//	if (choice==10){
//		printf("enter tempereture in fehrenheit\n");
//		scanf("%d",&fh);
//		cl=(fh-32)/1.8;
//		printf("tempereture in celsius%d\n",cl);
//		
//	}
//	else if(choice==20){
//		printf("enter tempereture in celsius\n");
//		scanf("%d",&cl);
//		fh=(cl*1.8)+32;
//		printf("tempereture in fehrenheit\n %d",fh);
//	}
//	else
//	{
//	printf("invailed choice");	
//	}
//	return 0;
		
//}

// traffc light simulater
//#include<stdio.h>
//int main(){
//	int light; 
//	printf(" your  coler id is = red1,yellow2,green3");
//	scanf("%d",&light);
//	if (light==1){
//		printf("stop");
//	}
//	else if(light==2){
//		printf("prepare to drive");
//			}
//	else if (light==3)
//	
//	{
//		printf("go to drive");
//	}
//	else
//		{printf("light is not work");
//	}
//	return 0;		
//}

///check eligible for vote
//#include<stdio.h>
//int main(){
//	int age;
//	printf("enter your age");
//	scanf("%d",&age);
//	if (age>=18){
//		printf("your are eligible for vote ",age);
//	}
//	else
//	{
//		printf("your are not eligibe for vote\n");
//		printf("because your age is under 18");
//	}
//	return 0;
//}
/// bank account balence checker
//#include<stdio.h>
//int main(){
//	int current_balance;
//	int withdral;
//	printf("enter your current balance and amount you want to withdraw");
//	scanf("%d%d",&current_balance,&withdral);
//int update_balance;
//	if(current_balance>0&& withdral<current_balance){
//		update_balance=current_balance-withdral;
//		printf("update amount %d",update_balance);
//	}
//	
//	else{
//		printf(" insufficient balance");
//	}
//		
//			return 0;
//}
//////////////LOOP/////////////
///////////for/////////
//1.factorial
//#include<stdio.h>
//int main(){
//	int num,i,fact=1;
//	printf("enter your number");
//	scanf("%d",&num);
//	for(i=1;i<=num;i++){
//		fact= fact*i;
//	
//	}
//		printf("fact=%d",fact);
//	return 0;
//}
///////////2.sum of n natural number 
//#include<stdio.h>
//int main (){
//	int sum=0,i,num;
//	printf("enter your number");
//	scanf("%d",&num);
//	for(i=1; i<=num;i++){
//	sum = sum+i;
//	}
//	printf("sum=%d",sum);
//}
/////3.even
//#include<stdio.h>
//int main(){
//	int i,a=2,even;
//	for(i=1;i<=10;i++){
//	even=a*i;
//	printf("%d\n",even);
//}
//return 0;
//}

////}
////4.exponent
//#include<stdio.h>
//int main(){
//int base,exponent,power=1,i;
//printf("enter a base=");
//scanf("%d",&base);
//printf("enter exponent=");
//scanf("%d",&exponent);
//for(i=1;i<=exponent;i++){
// power=power*base;   
//}
//printf("%d^%d=%d",base,exponent,power);
//return 0;
//}

////5.///print hello word 10 time
//#include<stdio.h>
//int main(){
// int i;
// for(i=1;i<=10;i++){
// 	printf("hello word\n");
// }
//}
//////6.print sum of odd number
//#include<stdio.h>
//int main(){
//	int i,sum;
//	for(i=1;i<=100;i++){
//		if(i%2!=0){
//			sum+=i;
//		//printf("%d\n",i);
//		}
//	}
//	printf("sum=%d",sum);
// }
//////7. make a table n number 
//#include<stdio.h>
//int main(){
//	int i,j,n;
//	printf("  table start from 1 to ");
//	scanf("%d",&n);
//	printf("multification from 1 to %d",n);
//	for(i=1; i<=10; i++){
//		for(j=1; j<=10; j++){
//			printf("%d x %d = %d\n",j,i,i*j);
//		}
//	printf("\n");
//	}
//}
////////////////8./ chacking the prime number
//#include<stdio.h>
//int main(){
//	int i,num;
//	int flag=0;
//	printf(" entar a number");
//	scanf("%d",&num);
//	for(i=2; i<num; i++){
//		if(num%i==0){
//			flag++;
//		}
//	}
//	if(flag==0){
//		printf("%d is a prime number",num);
//	}
//	else{
//		printf("not prime");
//		
//	}
//}
///////9./fibonacii series?
//#include<stdio.h>
//int main(){
//int n;
//int first=0,second=1,result;
//printf("enter the number og range of fabonacii ");
//scanf("%d",&n);
//printf("%d\t %d\t",first,second);
//for(int i=2;i<=n;i++){
//	result = first+second;
//	printf("%d\t",result);
//	first=second;
//	second=result;
//}	
//}

////////////10./patern
/////right half pyramid 
//#include<stdio.h>
//int main(){
//	int rows=6;
//int i,j;
//for(i=1;i<=rows;i++){
//	for(j=1; j<=i;j++){
//		printf("*");
//	}
//	printf("\n");
//}	
//}
/////////////////11. left helf pyaramid
//#include<stdio.h>
//int main(){
//	int i,j,space;
//	int rows;
//	printf("enter the number of rows");
//	scanf("%d",&rows);
//	for(i=1;i<=rows; i++){  //parent loop
//		for(space =1; space<=rows- i; space++){ // child loop A
//			printf(" ");
//		}
//		for(j=1; j<=i;j++){// child loop B
//			printf("*");
//		}
//		printf("\n");
//	}
//}
///////////12.ful pyramid 
//#include<stdio.h>
//int main(){
//	int i,j,space;
//	int rows;
//	printf("enter the number of rows");
//	scanf("%d",&rows);
//	for(i=1;i<=rows; i++){  //parent loop
//		for(space =1; space<=rows- i; space++){ // child loop A
//			printf(" ");
//		}
//		for(j=1; j<=2*i-1;j++){// child loop B
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
///////13.ulta pyramid
//#include<stdio.h>
//int main(){
//	int i,j,space;
//	int rows;
//	printf("enter the number of rows");
//	scanf("%d",&rows);
//	for(i=rows;i>=1; i--){  //parent loop
//		for(space =rows-i; space>=1; space--){ // child loop A
//			printf(" ");
//		}
//		for(j=2*i-1; j>=1;j--){// child loop B
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
/////////////14. rombas patern
//#include<stdio.h>
//int main(){
//	int i,j;
//	int rows;
//	printf("enter the number of rows= ");
//	scanf("%d",&rows);

//	for(i=0;i<=rows;i++){
//		for(j=0; j<=rows-i; j++){
//			printf(" ");
//		}
//		for(int k=0;k<=rows; k++){
//		printf("*");
//		}
//		printf("\n");
//	} //aposite side
//14.1//for(i=0;i<rows;i++){
//	for(j=0;j<i; j++){
//		printf(" ");
//	}
//	for(int k=0;k<rows;k++){
//		printf("*");
//	}
//	printf("\n");
//}
//}
//////15.//// inverted half left pyramid
//#include<stdio.h>
//int main(){
//	int i,j,k;
//	int rows;
//	printf("enter the number of rows=");
//	scanf("%d",&rows);
//	for(i=rows;i>=1;i--){
//		for(j=rows-i;j>=1;j--){
//			printf(" ");
//		}
//		for(k=i;k>=1;k--){
//			printf("*");
//		}
//		printf("\n");
//	}
//
//}

///////////16.whole sequre
//#include<stdio.h>
//int main(){
//	int i,j;
//	int rows;
//	printf("enter the rows");
//	scanf("%d",&rows);
//	for(i=1; i<=rows; i++){
//		for(j=1; j<=rows; j++){
//			if(i==1|| i==rows || j==1|| j==rows){
//				printf("*");
//			}
//			else{
//				printf(" ");
//			}
//		}
//		printf("\n");
//	}
//}
//////////17.//diamond shape 
/*#include<stdio.h>
int main(){
		int i,j,k, rows;
		 printf("enter the rows ");
		scanf("%d",&rows);
		for(i=1;i<=rows;i++){
			for(j=1;j<=rows-i;j++)
			{
				printf(" ");
			}
			for(k=1;k<=2*i-1;k++)
		{
			printf("*");
		}
		printf("\n");
		}
		for(i=rows-1;i>=1;i--){ //second part
			for(j=rows-i;j>=1;j--){
				printf(" ");
			}
			for(k=2*i-1;k>=1;k--){
				printf("*");
			}
			printf("\n");
		}
	
}*/
//////18. HCF and LCM
/*#include<stdio.h>
int main(){
	int num1,num2,i,hcf, lcm;
	printf("enter num1 and num2 ");
	scanf("%d%d",&num1,&num2); 
	for(i=1;i<=num1 && i<=num2; i++){
 if(num1%i==00 && num2%i== 0){
	hcf=i;
}
}
printf(" hcf is %d",hcf);
lcm = ( num1*num2)/hcf;// roe lcm 
printf("LCM is = %d",lcm);
}*/
//////////// while loop
// syantax of while { while(condition)}
//////	syantax of do while{ do{at least one time } while(condition)
///////01.//reverse number
//#include<stdio.h>
//int main(){
//	int remainder,reverse=0,num;
//	printf("enter the number you want to reverse");
//	
//	scanf("%d",&num);
//	while(num!=0){
//		remainder= num%10;
//		reverse= reverse*10+remainder;
//		num=num/10;
//	}
//		printf("reverse number is %d",reverse);	
//}
////////////////02. palindrome
/*#include<stdio.h>
int main(){
	int rem,num,orgnum,rev=0;
	printf("enter the number you want to check=");
	scanf("%d",&num);
    orgnum=num;
	while(num>0){
		rem= num%10;
		rev= rev*10+rem;
		num= num/10;
	}
	printf("reverse is : %d\n",rev);
	if(orgnum==rev){
		printf(" number is   palindrome");
	}
	else{
		printf("number is  not  palindrome");
	}
}*/
/////// do while 
/*#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main (){
	
	srand(time(0));// initialzaed randam number to 0
	int randamNumber= (rand()%100)+1;// gererate a randam  number bt 1 to 100
	int guess;
	int attempt=0;
	printf(" welcome to number guess game \n");
	do
	{
		printf(" enter your guess \n");
		scanf("%d",&guess);
		attempt++;
		if(guess<randamNumber){
			printf("try to higher number\n");
		}
		else if ( guess>randamNumber){
			printf("try a lower number\n");
		}
		else{
			printf("mubarakee");
		}
	} while(guess!= randamNumber);
	printf(" your attempt is %d",attempt);
	return 0;
}*/
