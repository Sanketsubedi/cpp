#include <iostream>
using namespace std;
class multi
{
    int a=1;
    int b=2;

public:
    multi(int x=0)
    {
    }
    void operator*(multi m1)
    {
        a *= m1.a;
        b *= m1.b;
        cout << "Multipication of two object is:" << endl;
        cout<<" a ="<<a<<endl;
        cout<<" b ="<<b<<endl;
    }
};
int main()
{
    multi m1, m2(2);
    m1 *m2;
    return 0;
}
