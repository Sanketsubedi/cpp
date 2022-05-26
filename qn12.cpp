#include<iostream>
using namespace std;
class time{
public:
    int hr;
    int min;
    int sec;
    void enter(){
        cout<<"Enter Hour, Minute and Second"<<endl;
        cin>>hr;
        cin>>min;
        cin>>sec;
    }
};
class add :public time{
	public:
		add adds(time t1){
			hr += t1.hr;
			min += t1.min;
			sec += t1.sec;
			return *this;
		}
	void display(){
        cout<<"Total time:"<< endl;
        cout<< "Hours:"<<hr<<" Minutes:"<<min<<" Seconds:"<<sec<<endl;
    }
    friend class xyz;
};
class xyz{
    int hour;
    int minute;
    int second;
	public:
    void data(){
        cout<<"Enter Hour, Minute and Second"<<endl;
        cin>>hour;
        cin>>minute;
        cin>>second;
    }
    xyz diff(time t2){
        hour -= t2.hr;
        minute -= t2.min;
        second -= t2.sec;
        return *this;
	}
	void display(){
        cout<<"Total time:"<<endl;
        cout<< "Hours:"<<hour<<" Minutes:"<<minute<<" Seconds:"<<second<<endl;
    }
};
int main()
{
    time t1;
    t1.enter();
    add a, b;
    a.enter();
    b = a.adds(t1);
    b.display();
    xyz x1, x2;
    x1.data();
    x2 = x1.diff(t1);
    x2.display();
    return 0;
}


