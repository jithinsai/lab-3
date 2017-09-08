#include <iostream>
using namespace std;

int main() {
	char ch;
	cout<<"enter an alphabet\n";
	cin>>ch;
	if((ch>='a')&&(ch<='z')){
		cout<<ch<<" is an lower case alphabet\n";
	}else if ((ch>='A')&&(ch<='z')){
		cout<<ch<<" is a upper case alphabet\n";
	}else{
		cout<<ch<<" is not an alphabet\n";
	}
	return 0;
}