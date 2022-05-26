#include<iostream>
using namespace std;
class Employee{
	public:
	int code,salary;
	string name , address;
	Employee(){
		cout<<"Enter your code:"<<endl;
		cin>>code;
		cout<<"Enter your name:"<<endl;
		cin>>name;
		cout<<"Enter your salary:"<<endl;
		cin>>salary;
		cout<<"Enter your address:"<<endl;
		cin>>address;	
	}
    Employee(Employee &e){
        code = e.code;
        name = e.name;
        address = e.address;
        salary = e.salary;
    }
	void display(){
        cout<<"Code "<<code<<endl << "Name " <<name<<endl;
        cout<<"Address "<<address<<endl<<"Salary "<<salary<<endl; 
    }
};
int main(){
	Employee e1;
   	Employee e2(e1);
   	e1.display();
   	e2.display();
  	return 0;
}
