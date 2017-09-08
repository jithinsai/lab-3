#include <iostream>
using namespace std;

int main() {
	float a,b,c;
	cout<<"enter the angles traingle\n";
	cin>>a>>b>>c;
	if(a+b+c==180){
		cout<<"triangle is valid";
	}else{
		cout<<"triangle is invalid";
	}
	return 0;
}