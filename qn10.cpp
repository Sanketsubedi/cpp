#include<iostream>
using namespace std;
class Employee{
	public:
		int id;
		string name;
	void getdata(){
		cout<<"Enter your id: "<<endl;
		cin>>id;
		cout<<"Enter your name"<<endl;
		cin>>name;	
		}
	void putdata(){
		cout<<"ID: "<<id<<endl;
		cout<<"Name: "<<name<<endl;
	}	
};
class Manager: public Employee{
	public:
	string  department;
	void getdata(){
		Employee::getdata();
		cout<<"Enter your Department: "<<endl;
		cin>>department;	
	}
	void putdata(){
		Employee::putdata();
		cout<<"Department: "<<department<<endl;
	}
	
};
class ComputerOperator: public Employee{
	public:
		int typing_speed;
		void getdata(){
		Employee::getdata();
		cout<<"Enter your Typing speed: "<<endl;
		cin>>typing_speed;	
		}
		void putdata(){
		Employee::putdata();
		cout<<"Typing speed: "<<typing_speed<<endl;
		}
};
int main(){
	Manager m;
	m.getdata();
	m.putdata();
	ComputerOperator c;
	c.getdata();
	c.putdata();
	return 0;
}
