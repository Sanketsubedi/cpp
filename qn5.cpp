#include<iostream>
using namespace std;
class mountain{
	public:
	string name;
	int height;
	string location;
	mountain(){
		cout<<"Enter the name of mountain"<<endl;
		cin>>name;
		cout<<"Enter the height of mountain"<<endl;
		cin>>height;
		cout<<"Enter the location of mountain"<<endl;
		cin>>location;
	}
	int cmprheight(){
		mountain m1,m2;
		if(m1.height>m2.height){
			return true;
		}	
		else{
			return false;
		}
	}
	void displayinfo(){
		cout<<"name = "<<name<<endl;
        cout<<"location = "<<location<<endl;
        cout<<"height = "<<height<<endl;
	}
};
int main(){
	mountain m1, m2;
	
}
