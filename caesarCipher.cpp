#include <iostream>
#include<string>
#include<math.h>
using namespace std;
int main(){
	string a;
	int n , k , i;
	cin>>n;
	cin.ignore();
	getline(cin,a);
	cin>>k;
	k=k%26;
	for(i=0;a[i]!='\0';i++){
		if(a[i]>96 && a[i]<123){
			if(a[i]+k<123)
				cout<<char(a[i]+k);
			else
				cout<<char(a[i]+k-26);
		}
		else if(a[i]>64 && a[i]<91){
			if(a[i]+k<91)
				cout<<char(a[i]+k);
			else
				cout<<char(a[i]+k-26);
		}
		else
			cout<<a[i];
	}
	return 0;
}