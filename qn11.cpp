#include<iostream>
using namespace std;
class time{
	int hour,minute,second;
	public:
	time(int x=0,int y=0,int z=0){
		hour= x;
		minute= y;
		second = z;
	}
	time add(time t1){
		hour += t1.hour;
		minute += t1.minute;
		second += t1.second;
		return  *this;
	}
	void display()
    {
        cout<<"Total time:"<<endl;
        cout<<"Hours: "<<hour<< " Minute: "<<minute<<" Second:"<<second<<endl;
    }
};
int main(){
	time t1(4,15,16),t2(5,20,26),t3;
	t3 = t1.add(t2);
	t3.display();
	return 0;
}
