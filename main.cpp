#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int pin;
	cout<<"enter your pin"<<endl;
	cin>>pin;
	if(pin==1234 || pin==4321){
		cout<<"your pin is correct";
	}
	else {
	cout<<"your pin is wrong"<<endl;
	cout<<"set new pin";
	int newPin ;
	cin >>newPin;
	cout<<"please enter your new pin"<<endl;
	int pin2;
	cin>> pin2;
	if(newPin==pin2){
		cout<<"you can withdraw now";
	}
	else{
		cout<<"msti na kr bari ram moot mary ga";
	}
	
	
	}
	
	
	return 0;
}

