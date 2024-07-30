#include<iostream>
using namespace std;
class base{
    public:
        virtual void display(){
            cout<<"I'm in base class";
        }
};
class derived:public base{
    public:
        void display(){
            cout<<"I'm in derived class";
        }
};
int main(){
    base *bptr,b;
    derived d;
    bptr = &d;
    bptr->display();
    bptr = &b;
    bptr->display();
    return 0;
}