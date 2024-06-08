/*1. 
#include<iostream>
using namespace std;
  
  class employe{
  	public:
  	int a=10,b=20,c=30;
  };
  int main(){
  	employe pankaj;
  	cout<<pankaj.a;
  }*/
  /*2.
#include<iostream>
using namespace std;
  
  class employe{
  	public:
  	int salary=1000;
  	void printmessage(){
  		cout<<" per month salary is : "<<salary;
	  }
	};
  int main(){
  	employe pankaj;
pankaj.printmessage();
}*/
/*3.
#include<iostream>
using namespace std;
  
  class employe{
  	int a,b,c;
  	public:
  		int e,d;
  		 void setdata( int a, int b, int c);//jo values ko enter kareja  
  		 void getdata(){// values ko print karega
  		 	cout<<"the value in a = "<<a<<endl;
  		 	cout<<"the value in b ="<<b<<endl;
  		 	cout<<"the value in c = "<<c<<endl;
  		 	cout<<"the value in d ="<<d<<endl;
  		 	cout<<"the value in e ="<<e<<endl;
		   }
	};
 void 	employe::setdata(int a1,int b1,int c1){
		a=a1;
		b=b1;
		c=c1;
		
	}
  int main(){
  	employe shamser;
  	
	shamser.setdata(10,20,30);
	shamser.e=40;
	shamser.d=50;
	shamser.getdata();
  	
}
*/
/*4
#include<iostream>
using namespace std;
class binary {
	private :
		string s;
		public:
			void read();
			void check();
			void check_pin();
			//void one_compliment();
			void display();
};
void binary :: read(){
	cout<<"enter a string"<<endl;
	cin>>s;
}
void binary::display(){
	cout<<" Displaying your binary string"<<endl;
	for(int i=0;i<s.length();i++){
		cout<<s.at(i);
	}
}
void binary::check_pin(){
	for(int i=0;i<s.length();i++){
		if(s.at(i)!=0&& s.at(i)!='1'){
			cout<<"Incorrect binary formate"<<endl;
			break;
		}
	}
}

		

int main(){
	binary b;
	b.read();
	b.check_pin();
	
	b.display();
}
*/

