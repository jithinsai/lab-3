    #include <iostream>
    using namespace std;
     
    int main() {
    	int a,b,c,d,e,f;
    	cout<<"enter the amount:\n";
    	cin>>a;
                if(a>2000){
                b=a/2000,c=(a-b*2000)/500,d=(a-b*2000-c*500)/100,e=(a-b*2000-c*500-d*100)/10,f=(a-b*2000-c*500-d*100-e*10);
        	cout<<b<<" 2000 notes\n"<<c<<" 500 notes\n"<<d<<" 100 notes\n"<<e<<" 10 notes"<<f<<" change\n";
                }else if(a>500){
                b=a/500,c=(a-b*500)/100,d=(a-b*500-c*100)/10,e=(a-b*500-c*100-d*10);
                cout<<b<<" 500 notes\n"<<c<<" 100 notes\n"<<d<<" 10 notes\n"<<e<<" change\n";
                }else{
                b=a/100,c=(a-b*100)/10,d=(a-b*100-c*10);
                cout<<b<<" 100 notes\n"<<c<<" 10 notes\n"<<d<<" change\n";
                }
    	return 0;
    }