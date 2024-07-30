#include<iostream>
using namespace std;
class thisExample{
    int data;
    public:
        void setData(int newVal){
            this->data=newVal;
        }
        int getData(){
            return this->data;
        }
};
int main(){
    thisExample obj;
    int result;
    obj.setData(100);
    result = obj.getData();
    cout<<"The result is "<<result;
    return 0;
}