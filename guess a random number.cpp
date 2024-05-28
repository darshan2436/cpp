#include<iostream>
#include<ctime>
#include<stdlib.h>
using namespace std;
int main()
{
   srand(time(NULL));
   int random = (rand()%10) + 1;
   int guess;
   int tries=3;
   cout<<"***********Guess The Number**********"<<endl;
   cout<<"         (1-10)\n";
   do{
   	cout<<"Guess a number:";
   	cin>>guess;
   	tries--;
	if(guess==random){
   cout<<"Congratulation you guessed it correct\n"<<endl;
   	cout<<"**************************************";	
	}
   	if(tries==0&&guess!=random){
   		cout<<"Sorry you lost\nThe number was "<<random<<"\n"<<endl;
   		cout<<"**************************************";
   		exit(0);
	   }
	if(guess>random){
		cout<<"Going too high Buddy\n";
	}
	else if(guess<random){
		cout<<"Not That less\n";
	}
   }while(guess!=random);
   return 0;
}

