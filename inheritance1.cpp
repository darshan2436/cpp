#include<iostream>
using namespace std;
class A{
	int a;
	public:
		int b;
		void setab(){
			a=10;b=10;
		}
		int geta(){
			return a;
		}
		void showa(){
			cout<<"a="<<a;
		}
};
class B: public A{
	int c;
	public:
		void mul();
		void display();
};
void B::mul(){
	c=b*geta();
}
void B::display(){
	showa();
	cout<<"b="<<b<<endl;
	cout<<"c="<<c<<endl;
}
int main(){
	B b;
	b.setab();
	b.mul();
	b.showa();
	b.display();
	b.b=20;
	b.mul();
	b.display();
	return 0;
}