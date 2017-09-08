#include <iostream>
using namespace std;

int main() {
	int a;
	cout<<"enter the week day number\n";
	cin>>a;
	switch(a){
		case 1:
		cout<<"sunday\n";
		break;
	    case 2:
		cout<<"monday\n";
		break;
		case 3:
		cout<<"tuesday\n";
		break;
		case 4:
		cout<<"wednesday\n";
		break;
		case 5:
		cout<<"thursday\n";
		break;
		case 6:
		cout<<"friday\n";
		break;
		case 7:
		cout<<"saturday\n";
		break;
		case 8:
		cout<<"the number is invalid";
		break;
	}
	return 0;
}