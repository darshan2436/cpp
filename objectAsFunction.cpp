#include<iostream>
using namespace std;
class Time{
	int hours;
	int minutes;
	public:
	void gettime(int h,int m)
	{hours=h ;minutes=m;}
		void puttime(){
			cout<<"hours:"<<hours<<endl;
			cout<<"minutes:"<<minutes<<endl;
        }
		void sumtime(Time t1,Time t2){
			minutes=t1.minutes+t2.minutes;
			hours=minutes%60;
			minutes=minutes/60;
			hours=hours+t1.hours+t2.hours;
        }
};
int main(){
	Time t1,t2,t3;
	t1.gettime(4,45);
	t2.gettime(3,10);
	t3.sumtime(t1,t2);
	cout<<"t1=";t1.puttime();
	cout<<"t2=";t2.puttime();
	cout<<"t3=";t3.puttime();
	return 0;
}