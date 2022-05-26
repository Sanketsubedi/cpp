#include<iostream>
#include<conio.h>
using namespace std;
class temp 
{
 int x, y, q;
 public:
 void input(int a , int b){
 	x = a;
 	y = b;
 }
friend void swap(temp &t);
void display() 
{
 cout<<"After Swap x is :"<<x<<endl;
 cout<<"After Swap y is :"<<y<<endl;
}
};
void swap(temp &t) 
{
    t.q = t.x;
    t.x = t.y;
    t.y = t.q;
}
int main() 
{
    temp t1;
    t1.input(5, 10);
    swap(t1);
    t1.display();
    return 0;
}
