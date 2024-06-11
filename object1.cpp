#include<iostream>
using namespace std;
class employee{
    char name[20];
    int yearOfJoining;
    double salary;
    char address[20];
    public:
        void inData(){
            cout<<"Enter your name, year of joining, salary and address:\n";
            cin>>name>>yearOfJoining>>salary>>address;
        }
        void output(employee e1,employee e2,employee e3){
            cout<<"Name     Year of Joining   Address"<<endl;
            cout<<e1.name<<"     "<<e1.yearOfJoining<<"       "<<e1.address<<endl;
            cout<<e2.name<<"     "<<e2.yearOfJoining<<"       "<<e2.address<<endl;
            cout<<e3.name<<"     "<<e3.yearOfJoining<<"       "<<e3.address<<endl;
        }
};
int main(){
    employee e1,e2,e3,e4;
    e1.inData();
    e2.inData();
    e3.inData();
    e4.output(e1,e2,e3);
    return 0;
}