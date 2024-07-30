//passing different parameters to sum 
#include<iostream>
using namespace std;
template <class t1,class t2>
t2 sum(t1 a,t2 b){
    return a+b;
}
int main(){
    cout<<"sum of 5 and 8.6: "<<sum(5,8.6);
    return 0;
}