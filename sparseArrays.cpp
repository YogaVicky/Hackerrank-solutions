#include<iostream>
#include<string.h>
using namespace std;
int main(){
	int n , q , i , check , j;
	string s[1000] , a[1000];
	cin>>n;
	cin.ignore();
	for(i=0;i<n;i++){
		getline(cin,s[i]);
	}
	cin>>q;
	cin.ignore();
	for(i=0;i<q;i++){
		getline(cin,a[i]);
	}
	for(i=0;i<q;i++){
		check = 0;
		for(j=0;j<n;j++){
			if(a[i] == s[j])
				check++;
		}
		cout<<check<<endl;	
	}
	return 0;
}