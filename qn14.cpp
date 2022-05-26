//programshowing unkown error can't debug 
#include<iostream>
using namespace std;
class base{
	public:
		string name;
		int roll;
		base(){
		};
};
class input : public base{
	public:
	void input(){
	cout<<"Enter the following details of the student"<<endl;
    cout<<"Name:"<<endl;
    cin>>name;
    cout<<"Roll No."<<endl;
    cin>>roll;
	}
}; 
class output : public base{
	public:
	void display(){
	cout << "Details of the student" << endl;
    cout<<"Name:"<<name<<endl;
    cout<<"Roll No."<<roll<<endl;
	}
};
int main(){
    int num;
    cout << "Enter the number of student" << endl;
    cin >> num;
    output o1[num];
    for (int i = 0; i < num; i++)
    {
        o1[i].input();
        o1[i].display();
    }

    return 0;
}