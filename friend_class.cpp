#include<iostream>
using namespace std;
class xyz;
class abc{
	int a;
	public:
		void getData(xyz&);
		void sum(xyz);
		void diff(xyz);
};
class xyz{
	int x;
	public:
		friend class abc;
};
void abc::getData(xyz &a1){
	cout<<"Enter the value to a: ";
	cin>>a;
	cout<<"Enter the value to x: ";
	cin>>a1.x;
}
void abc::sum(xyz a1){
	cout<<"The sum is: "<<a+a1.x<<endl;
}
void abc::diff(xyz a1){
	cout<<"The difference is: "<<a-a1.x<<endl;
}
int main()
{
    abc o1;
    xyz o2;
    o1.getData(o2);
    o1.sum(o2);
    o1.diff(o2);
    return 0;
}