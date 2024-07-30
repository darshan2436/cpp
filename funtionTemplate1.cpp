//passing array of different type to find the largest one in the array
#include<iostream>
using namespace std;
template <class t1>
t1 largest(t1 *a,int size){
    t1 max = a[0];
    for(int i=0;i<size;i++){
        if(max<a[i]){
            max = a[i];
        }
    }
    return max;
}
int main(){
    int a[]={1,4,25,2,6,10,61,65};
    cout<<"Largest in the int array:"<<largest(a,8);
    float b[] = {4.5,6.2,9.2,3.3};
    cout<<"Largest in the float array: "<<largest(b,5);
    return 0;
}