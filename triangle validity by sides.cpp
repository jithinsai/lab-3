#include <iostream>
using namespace std;

int main(){ 
	int a,b,c;
	cout<<"enter the three sides of the triangle\n";
	cin>>a>>b>>c;
	if((a+b>c) && (a+c>b) && (c+b>a)){
		cout<<"the triangle is valid\n";
	}else{
		cout<<"the triangle is invalid\n";
	}
	
	return 0;
}