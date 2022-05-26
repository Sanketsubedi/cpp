#include<iostream>
using namespace std;
class bank{
	public:
	char name[30];
	int acnumber;
	char type[10];
	double balance = 0;
	void initial(){
		cout<<"enter your name:"<<endl;
		cin>>name;
		cout<<"enter account number:"<<endl;
		cin>> acnumber;
		cout<<"enter the type of account:"<<endl;
		cin>>type;
	}
	void deposit(){
		int cash;
		cout<<"enter the amount to deposit:"<<endl;
		cin>>cash;
		balance+= cash;	
		cout<<"Amount deposit successfully!!";
	}
	void withdraw(){
		double draw;
		cout<<"The total balance in your account is:"<<balance<<endl;
		cout<<"enter the amount you want to withdraw:"<<endl;
		cin>>draw;
		if(draw<=balance){
			balance = balance - draw;
			cout<<"Amount withdrawn successfully!!"<<endl;
			cout<<"Your balance now is:"<<balance<<endl;
		}
		else{
			cout<<"invalid amount"<<endl;
		}
	}
	void display(){
		cout<<"The account holder name:"<<name<<endl;
		cout<<"Final balance:"<<balance<<endl;
	}
};
int main(){
	bank b1;
	b1.initial();
	b1.deposit();
	b1.withdraw();
	b1.display();
}
