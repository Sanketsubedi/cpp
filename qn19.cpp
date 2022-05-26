#include <iostream>
#include <cmath>
using namespace std;
class traingle
{
    float Area;
	int a,b,c,s;  

public:
    traingle()
    {
        a = 12;
        b = 20;
        c = 14;
    }
    traingle(int x, int y, int z)
    {
        a = x;
        b = y;
        c = z;
    }
    void area()
    {
        s = (a + b + c) / 2;
        Area = sqrt(s * (s - a) * (s - b) * (s - c));
        cout<<" Area: " <<Area<< endl;
        }
};
int main()
{
    traingle t1;
    traingle t2(10, 11, 12);
    t1.area();
    t2.area();
    return 0;
}
