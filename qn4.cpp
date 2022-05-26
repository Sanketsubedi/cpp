#include<iostream>
using namespace std;
class Teacher{
	int tid;
	char subject[30];
	public:
	void get_teach(){
		cout<<"Enter your teacher's id->"<<endl;
		cin>>tid;
		cout<<"Enter your subject->"<<endl;
		cin>>subject;
		cout<<"------------------"<<endl;
	}
	void display_teach(){
		cout<<"Teacher's id->"<<tid<<endl;
		cout<<"Teacher's subject->"<<subject<<endl;
	}
};
class Staff{
	int sid;
	char position[30];
	public:
		void get_staff(){
		cout<<"Enter your staff's id->"<<endl;
		cin>>sid;
		cout<<"Enter your position->"<<endl;
		cin>>position;
		cout<<"------------------"<<endl;
	}
	void display_staff(){
		cout<<"Staff's id->"<<sid<<endl;
		cout<<"Staff's position->"<<position<<endl;
	}
};
class coordinator: public Teacher, public Staff{
	char department[30];
	public:
	void get_coordinator(){
    cout <<"Enter your department"<<endl;
    cin >> department;
    Teacher::get_teach();
    Staff::get_staff();
 	}
	void display_coordinator(){
    Teacher::display_teach();
    Staff::display_staff();
    cout <<"Department:"<<department<<endl;
		}
};
int main(){
    coordinator c1,c2;
    c1.get_coordinator();
    c2.get_coordinator();
    c1.display_coordinator();
    c2.display_coordinator();
    return 0;
}
