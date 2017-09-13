#include <iostream>
using namespace std;

int main() {
	int a,b;
	cout<<"enter the month number:\n";
	cin>>a;
	switch(a){
		case 1:
		cout<<" The month is january it has 31 days\n";
		break;
		case 2:
		cout<<" enter the year\n";
	cin>>b;
	if(b%100==0){
		if(b%400==0){
			cout<<" The month is february it has 29 days\n";
		}else{
			cout<<" The month is february it has 28 days\n";
		}
	}else if(b%4==0){
		cout<<" The month is february it has 29 days\n";
	}else{
		cout<<" The month is february it has 28 days\n";
	}
		break;
		case 3:
		cout<<" The month is march it has 31 days\n";
		break;
		case 4:
		cout<<" The month is april it has 30 days\n";
		break;
		case 5:
		cout<<" The month is may it has 31 days\n";
		break;
		case 6:
		cout<<" The month is june it has 30 days\n";
		break;
		case 7:
		cout<<" The month is july it has 31 days\n";
		break;
		case 8:
		cout<<" The month is august it has 31 days\n";
		break;
		case 9:
		cout<<" The month is september it has 30 days\n";
		break;
		case 10:
		cout<<" The month is october it has 31 days\n";
		break;
		case 11:
		cout<<" The month is november it has 30 days\n";
		break;
		case 12:
		cout<<" The month is december it has 31 days\n";
		break;
	}
	return 0;
}