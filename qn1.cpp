#include<iostream>
using namespace std;
class A{
    public:
int cube;
inline int san(int x){
    cube = x*x*x;
    cout<<"the value of cube is"<<cube; 
}
};
int main(){
    A a1;
    a1.san(3);

}