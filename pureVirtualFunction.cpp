#include<iostream>
using namespace std;
class base{
    public:
        virtual void display() = 0;
};
class derived: public base{
    public:
        void display(){
            cout<<"I'm in derived class"<<endl;
        }
};
class derived1: public base{
    public:
        void display(){
            cout<<"I'm in derived class 1";
        }
};
int main(){
    base *bptr[2];
    derived d1;
    derived1 d2;
    bptr[0] = &d1;
    bptr[1] = &d2;
    bptr[0]->display();
    bptr[1]->display();
    return 0;
}