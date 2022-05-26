#include<iostream>
using namespace std;
class complex{
	int real ,image;
	public:
		complex(int r = 1 , int i = 5){
			real = r;
			image = i;
		}
		void sum(complex c1, complex c2){
			cout<<"Sum of two complex number:"<<c1.real + c2.real<<"+i"<<c1.image + c2.image;
		}
};
int main(){
	complex c1 ,  c2(6,7) , c3;
	c3.sum(c1,c2);
	return 0;
}
