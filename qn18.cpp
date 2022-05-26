#include <iostream>
using namespace std;
class time{
    int hour;
    int minute;

public:
    void input(){
        cout << "Enter the hour and minute: " << endl;
        cin >> hour;
        cin >> minute;
    }
    friend void add(time a1, time a2);
};
void add(time a1, time a2){
    a1.hour += a2.hour;
    a1.minute += a2.minute;
    cout<< "Final time is: "<<endl;
    cout<<"Hours: "<< a1.hour<<endl;
    cout<<"Minutes:"<< a1.minute<<endl;
}
int main(){
    time t1, t2;
    t1.input();
    t2.input();
    add(t1, t2);
    return 0;
}
