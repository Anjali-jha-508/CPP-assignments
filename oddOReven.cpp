#include <iostream>
using namespace std;

int main(){
cout<<"---CHECK WEATHER THE INTEGER IS ODD OR EVEN---"<<endl;

int num;
cout<<"Enter the number: ";
cin>>num;
	if(num % 2 == 0){
		cout<< endl << num <<" is EVEN.";
	}
	else{
		cout<< endl << num <<" is ODD.";
	}
return 0;
}
