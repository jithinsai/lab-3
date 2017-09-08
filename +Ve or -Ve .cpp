#include <iostream>
using namespace std;

int main() {
	float a;
    cout<<"enter the number\n";
    cin>>a;
    if(a>0){
    	cout<<a<<" is a positive number";
    }else if(a<0){
    	cout<<a<<" is a negative number";
    }else{
    	cout<<" a is equla to zero";
    }
    return 0;
}