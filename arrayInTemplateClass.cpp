//passing an Array using template for different types of data
#include<iostream>
using namespace std;
template<class t>
class Array{
    t *a;
    int size;
    public:
        Array(t *n,int s){
            a = new t[s];
            for(int i = 0; i < s;i++)
                a[i]=n[i];
            size = s;
        }
        t largest();
};
template<class t>
t Array<t>::largest(){
    t max = a[0];
    for (int i = 0; i < size; i++){
        if(max < a[i])
            max = a[i];
    }
    return max;
}
int main(){
    int temp1[] = {1,23,4,5,2,9};
    Array<int> obj1(temp1,6);
    cout<<"Largest in int Array"<<obj1.largest();
    float temp2[] = {2.3,4.1,5.1,6.12,9.65};
    Array<float> obj2(temp2,5);
    cout<<"Largest in float Array"<<obj2.largest();
    return 0;
}