    #include <iostream>
    using namespace std;
     
    int main() {
    	char ch;
    	cout<<"enter the character\n";
    	cin>>ch;
    	if((ch>='a'&& ch<='z')||(ch>='A'&& ch<='z')){
    		cout<<ch<<" is an alphabet\n";
    	}else if((ch>='0')&&(ch<='9')){
    		cout<<ch<<" is a digit\n";
    	}else{
    		cout<<ch<<" is special character\n";
    	}
    	return 0;
    }