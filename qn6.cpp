//program 6
#include<iostream>
using namespace std;

class Base{
	public:
		int x,y;
		void inputdata(){
		cout<<"Enter the x-coordinate"<<x<<endl;
		cin>>x;
		cout<<"Enter the y-coordiante"<<y<<endl;
		cin>>y;
	}
		friend void display(Base);
};
class Derived : public Base{
		public:
		void add_vector(Base &b1, Base &b2){
		b1.inputdata();
		b2.inputdata();
		b1.x += b2.x;
		b1.y += b2.y;
	}
};
void display(Base b1){
	    cout << "Sum of two vector is:" << b1.x << "i+" << b1.y << "j" << endl;
}
int main(){
	Base b1,b2,b3;
	Derived obj;
	obj.add_vector(b1, b2);
	display(b1);
	return 0;
}

