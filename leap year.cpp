#include <iostream>
using namespace std;

int main() {
	int a;
	cout<<" enter the year\n";
	cin>>a;
	if(a%100==0){
		if(a%400==0){
			cout<<a<<" is a leap year\n";
		}else{
			cout<<a<<" is non leap year\n";
		}
	}else if(a%4==0){
		cout<<a<<" is a leap year\n";
	}else{
		cout<<a<<" is non leap year\n";
	}
	return 0;
}