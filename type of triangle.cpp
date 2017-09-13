#include <iostream>
using namespace std;

int main() {
	float a,b,c;
	cout<<"enter the sides of a triangle\n";
	cin>>a>>b>>c;
	if((a+b>c)&&(a+c>b)&&(b+c>a)){
		if((a=b)&&(b=c)){
			cout<<"the triangle is equilateral\n ";
		}else if((a=b)||(a=c)||(b=c)){
			cout<<" the triangle is  isosceles\n";
		}else{
			cout<<" the triangle is scalene\n";
		}
	}else{
		cout<<" the input is invalid\n";
	}
	return 0;
}