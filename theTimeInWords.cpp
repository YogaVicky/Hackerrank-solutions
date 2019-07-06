#include <iostream>
#include<string>
#include<math.h>
using namespace std;
int main(){
	int m , h;
	cin>>h>>m;
	string a[29] = {"one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eightteen","nineteen","twenty ","twenty one","twenty two","twenty three","twenty four","twenty five","twenty six","twenty seven","twenty eight","twenty nine"};
	if(m<30){
		if(m==1){
			cout<<a[m-1]<<" minute past "<<a[h-1];
		}
		else if(m==15){
			cout<<"quarter past "<<a[h-1];	
		}
		else if(m==0){
			cout<<a[h-1]<<" o'clock";
		}
		else
			cout<<a[m-1]<<" minutes past "<<a[h-1];
	}
	else{
		if(m==30){
			cout<<"half past "<<a[h-1];	
		}
		else if(m==45){
			cout<<"quarter to "<<a[h];	
		}
		else
			cout<<a[60-m-1]<<" minutes to "<<a[h];
	}
	return 0;
}