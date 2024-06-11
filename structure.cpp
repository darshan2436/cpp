#include<iostream>
#include<string.h>
using namespace std;
struct date{
	int year;
	int month;
	int day;
};
struct patient{
	string name;
	int age;
	int bedNo;
	char natureOfIllness[30];
	date birthday;
	char gender[10];
	date admission;
    void GetData(){
        cout<<"Enter name,age,nature of illness,date of birth(dd-mm-yy),gender,date of admission(dd-mm-yy):\n";
        cin>>name>>age>>natureOfIllness>>birthday.day>>birthday.month>>birthday.year>>gender>>admission.day>>admission.month>>admission.year;
    }
	void display(){
	cout<<"Name:"<<name<<"\nAge:"<<age<<"\nNature of Illness:"<<natureOfIllness<<"\nDate of Birth:"<<birthday.year<<"/"
	<<birthday.month<<"/"<<birthday.day<<"\nGender:"<<gender<<"\nAdmission date:"<<admission.year<<"/"<<admission.month<<"/"
	<<admission.day;
	}
};
int main()
{
	patient p;
    p.GetData();
    p.display();
   return 0;
}
