//class template with multipe parameters
#include<iostream>
using namespace std;
template<class t1,class t2>
class test{
    t1 a;
    t2 b;
    public:
        test(){a=0;b=0;}
        test(t1 x,t2 y){
            a=x;
            b=y;
        }
        void show(){
            cout<<a<<" "<<b;
        }
};
int main(){
    test T1(23,5.3);
    test T2(10,'a');
    T1.show();
    T2.show();
    return 0;
}