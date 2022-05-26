#include<iostream>
using namespace std;
class Room{
	public:
		int length,breadth,height;
		int area , volume;
		void getdata(){
		cout<<"Enter length breadth height:"<<endl;
		cin>>length>>breadth>>height;
		area = length * breadth;
		volume = length * breadth * height;
		}
		void displaydata(){
		cout<<"The area is "<<area<<endl<<"The volume is "<<volume<<endl;
		}
};
int main(){
	Room r[2];
	r[0].getdata();
	r[0].displaydata();
	r[1].getdata();
	r[1].displaydata();
	return 0;
}
