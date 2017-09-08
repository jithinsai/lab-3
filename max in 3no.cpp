#include <iostream>
using namespace std;

int main() {
	float a,b,c;
    cout<<"enter three different numbers\n";
    cin>>a>>b>>c;
    if(a>b){
    	if(a>c){
    		cout<<a<<" is maximum\n";
    	}else{
    		cout<<c<<" is maximum\n";
    	}
    }else if(b>a){
    	if(b>c){
    		cout<<b<<" is maximum\n";
    	}else{
    		cout<<c<<" is maximum\n";
    	}
    }
	return 0;
}