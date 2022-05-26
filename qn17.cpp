#include <iostream>
using namespace std;
class complex
{
    int real;
    int image;

public:
    void input()
    {
        cout <<"Enter the real and imaginary part of complex number:"<<endl;
        cin >>real;
        cin >>image;
    }
    friend void add(complex a1, complex a2);
};
void add(complex a1, complex a2)
{
    a1.real += a2.real;
    a1.image += a2.image;
    cout<<"The sum of two complex number is:"<<endl;
    cout<<a1.real<<"+i"<<a1.image<< endl;
}
int main()
{
    complex a1, a2;
    a1.input();
    a2.input();
    add(a1, a2);
    return 0;
}
