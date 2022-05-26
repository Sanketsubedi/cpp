#include<iostream>
using namespace std;
class si{
	public:
		int p,t;
		int r = 8;
		int intrest;
		void input(){
			cout<<"enter the principle"<<endl;
			cin>>p;
			cout<<"enter the time"<<endl;
			cin>>t;
		}
		void output(){
			intrest = (p*t*r)/100;
			cout<<"The simple of intrest of given data is:"<<intrest<<endl;
			cout<<"--------------------------------------"<<endl;
		}
};
int main(){
	si s1,s2,s3;
	s1.input();
	s1.output();
	s2.input();
	s2.output();
	s3.input();
	s3.output();
	}
