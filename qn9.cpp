#include<iostream>
using namespace std;
class Account{
	int accno,balance ;
	static int min_balance;
	public:
	void input(){
		cout<<"Enter account number: "<<endl;
		cin>>accno;
		cout<<"Enter balance: "<<endl;
		cin>>balance;
		cout<<"Enter the minimum balance: "<<endl;
		cin>>min_balance;
	}	
	void display(){
		cout<<"Your account number : "<<accno<<endl;
		cout<<"Your balance :  "<<balance<<endl;
	}
	static void displaymin(){
		cout<<"Your minimum balance : "<<min_balance<<endl;
		cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\"<<endl;
	}
};
int Account::min_balance =0;
int main(){
	int i;
	Account a[5];
	for(i=0;i<5;i++){
		a[i].input();
		a[i].display();
		Account::displaymin();		
	}
return 0;
}
