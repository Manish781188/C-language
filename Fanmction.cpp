/////////// Function  in C

/*1.
#include<stdio.h>
/// 01. calculater
void add(){// user difine 
	printf(" i am inside the function\n");
	 int a,b;
	 printf(" Emter the valve of a and b");
	 scanf("%d%d",&a,&b);
	 int sum=a+b;
	 printf("sum of given number are %d\n",sum);
} 
void minus(){
		printf(" i am inside the function\n");
		int a,b;
			printf("  Enter the value of a and b");
			scanf("%d%d",&a,&b);
		int minus = a-b;
		printf(" minus of given number are %d\n",minus);
}
void multiply(){
		printf(" i am inside the function\n");
		int a,b;
		printf("  Enter the value of a and b");
		scanf("%d%d",&a,&b);
		int multiply = a*b;
		printf(" multiply of given number are %d\n",multiply);
}
int main(){
	 printf("hello mitro !!!!!!!!\n");
	 add();
	 multiply();
	 printf(" hi your function is executed");
}*/
/*2.
#include<stdio.h>
/// 02 calculater
void add(int a, int b){
	printf(" i am inside the function\n");
	 int sum=a+b;
	 printf("sum of given number are %d\n",sum);
} 
void minus(int a, int b){
		printf(" i am inside the function\n");
		int minus = a-b;
		printf(" minus of given number are %d\n",minus);
}
void multiply(int a, int b){
		printf(" i am inside the function\n");
		
		int multiply = a*b;
		printf(" multiply of given number are %d\n",multiply);
}
int main(){
	 printf("hello mitro !!!!!!!!\n");
	 int x,y;
	 printf(" enter the value of x and y");
	 scanf("%d%d",&x,&y);
	 add(x,y);
	 multiply( x,y);
	 printf(" hi your function is executed");
}*/
/*3.
#include<stdio.h>
int bonus( int salary){
	int calculation = 2000+salary;
	return calculation;
}
int  rishwat(int salary){
	int kalapaisa = 5000+salary;
	return kalapaisa;
}
int main(){
	int salary;
	printf(" enter your salary");
	scanf("%d",&salary);
	
	int fnlamt= bonus(salary);
	int fnlamt1= rishwat(salary);
	printf(" final amount after adding bonus is %d\n",fnlamt);
	printf(" final amount after adding kalapaisa  is %d\n",fnlamt1);
	if(fnlamt>10000){
		printf(" you can survive essily");
	}
	else{
		printf(" or kamao jaimhind");
	}
}*/
/*4.calculater
#include<stdio.h>
    void add(int a,int b){
	int result = a+b;
	printf(" value after adding two number %d\n",result);
	}
	void sub(int a,int b){
	int result = a-b;
	printf(" value after sub. two number %d\n",result);
}
	void multiplay(int a,int b){
	int result = a*b;
	printf(" value after multiplay two number %d\n",result);
}
	void divide(int a,int b){
	int result = a/b;
	printf(" value after division two number %d\n",result);
}
int main(){
	char operation;
	printf("enter the operation");
	scanf("%c",&operation);
	int num1,num2;
	printf("enter two number");
	scanf("%d%d",&num1,&num2);
	switch(operation){
		case'+':
			add(num1,num2);
			break;
    	case'-':
			sub(num1,num2);
			break;
		case'*':
			multiplay(num1,num2);
			break;
		case'/':
			divide(num1,num2);
			break;
			default:
				printf("wrong operation");
	}
	
}*/
/*/5. caculate the area and perimeret of circle, rectangle,sqaure,cylindre
#include<stdio.h>
float pi= 3.14;
void circle(){
	float r;
	printf("enter the radius of circle \n");
	scanf("%f",&r);
	float perimeter= 2*pi*r;
	float area= pi*r*r;
	printf(" perimerter of circle is %.2f\n",perimeter);
	printf(" area of circle is %.2f\n",area);	
}
void rectangle(){
	int l,b;
	printf("Enter the  l and b of rectalnge \n");
	scanf("%d%d",&l,&b);
	int perimeter= 2*(l+b);
	int area= l*b;
	printf("perimeter of rectangle is =%d \n ",perimeter);
	printf("area of rectangle is  = %d\n",area);
}
void square(){
	int side;
	printf("Enter the side of square\n");
	scanf("%d",&side);
	int perimeter= 4*side;
	int area= side *side;
	printf("perimeter of square is = %d\n",perimeter);
	printf("area of square  is = %d\n",area);
}
void cylinder(){
	float h,r;
	printf(" Enter the hight and redius of cylinder \n");
	scanf("%f%f",&h,&r);
	float  perimeter = (4*r)+(2*h);
	float  area=( 2*pi*r*h)+( 2*pi*r*r);
	printf("perimetre of cylinder =%.2f\n",perimeter);
	printf("area of cylinder= %.2f\n",area);
}

int main()
{
  char shape;
  printf("enter the shape");
  scanf("%c",&shape);
  switch(shape){
    case 'c':
      circle();
      break;
    
    case 'r':
      rectangle();
      break;
    
    case 's':
     square();
      break;
      
    case 'y':
      cylinder();
      break;
    
    default:
      printf("mai bhi maths fail tha");
}
	}*/
/*6.calculate final amt after adding the interest ,
the print the amount of time to repay the amount
#include<stdio.h>
int cattime(int p, int r,int t){
	int intrestamt= (p*r*t)/100;
	printf(" your intrest amt = %d\n",intrestamt);
	int finalamt= intrestamt+p;
	printf("finalamt is=%d\n ",finalamt);
	return finalamt;
}

int main(){
	int Pamt,rate,time;
	printf("enter your Pamt,rate,time ");
	scanf("%d%d%d",&Pamt,&rate,&time);
int result =  cattime(Pamt,rate,time);
if (result>10000&& result<=20000){
	printf("we need at leastm 6 months");
}
	if(result>20000 && result<=30000){
		printf(" We need at least 12 months");
	} 
	if (result>30000&& result<=40000){
		printf(" We need at least 18 months");
	}
	if (result>40000&& result<=50000){
		printf(" We need at least 24months ");
	}
	if (result>50000){
		printf(" aglr janm me ana ");
	}
}*/
///7.  find prime number bitween two intervals
/*#include<stdio.h>
 int checkprime(int n){
	int i, flag=1;
	for (i=2;i<n;i++){
	if(n%i==0){
		flag=0;
		break;
	}	
		}
		return flag;
	}
		
int main() {
	int start,end,temp,flag;
	printf("entern the starting and ending value of interval");
	scanf("%d%d",&start,&end);
	if (start>end){//swapping two value with out using third vaariable
		start=start+end;
		end= start-end;
	   start=start-end;
	//using third varible
	//temp=start;
	//start=end;
	//end=start;
	}
	printf(" prime numbers bitween %d and %d are : \n",start,end);
	for(int i=start+1;i<end;i++ ){
		flag= checkprime(i);
		if(flag==1){
			printf("%d\t",i);
		}
	}
}*/
//8. check gretest number
/*#include<stdio.h>
int greatest(int n1,int n2,int n3){
	
	if(n1>n2&&n1>n2){
		printf("N1 is greater\n");
	 	return n1;
	 }
	 else if(n2>n1&&n2>n3){
	 		printf("N2 is greater\n");
	 	return n2;
	 }
	 else{
	 		printf("N3 is greater\n");
	 	return n3;
	 }
}
int main(){
	int n1,n2,n3;
	printf("Enter a  three number\n ");
	scanf("%d%d%d",&n1,&n2,&n3);
	 int  result=greatest(n1,n2,n3);
	 printf(" my greatest number is a =%d",result);
}*/
//9.Develop a basic banking system in C. Create functions for deposit, withdrawal, 
//and display balance. The user should be able to perform these
 //actions based on their choice in the main menu of the program.
/*#include<stdio.h>
int balance=0;
void deposit(){
  int amount;
  printf("enter the amount you want to deposit...   \n");
  scanf("%d",&amount);
  balance=balance+amount;
  printf("Amount %d deposited successfully \n",amount);
}
void withdraw(){
  int amount;
  printf("Enter the amount you want to withdraw... \n");
  scanf("%d",&amount);
  if(amount>balance){
    printf("Kangaal....\n");
  }else{
    balance=balance-amount;
    printf("Amount %d withdrawn successfully \n",amount);
  }
}
void displayBalance(){
  printf("your current balance is %d\n",balance);
}

int main(){
  int choice;
  
  do{
    printf("\n Welcome to my bank!!!!!\n");
    printf("1.Deposit\n");
    printf("2.Withdraw\n");
    printf("3.Display Balance\n");
    printf("4.Exit\n");
    printf("Enter your Choice \n");
    scanf("%d",&choice);
    
    switch(choice){
      case 1:
        deposit();
        break;
      case 2:
        withdraw();
        break;
      case 3:
        displayBalance();
        break;
      case 4:
        printf("Thank you for using our bank");
        break;
      default:
        printf("enter a valid choice");
    }
    
  }while(choice!=4);
  }*/
