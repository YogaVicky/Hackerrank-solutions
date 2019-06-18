#include <iostream>
#include<string>
#include<math.h>
#include<algorithm>
using namespace std;
void isFunny( string a ){
	string b;
	int len , i;
	for(len = 0;a[len]!='\0'; len++);
	for(i = 0;a[i]!='\0'; i++)
		b[i] = a[i];
	cout<<b;
}
int main(){
	int q , i;
	string a[10];
	cin>>q;
	cin.ignore();
	for (i = 0;i<q; i++){
		getline(cin,a[i]);
	}
	for (i = 0;i<q; i++){
		isFunny(a[i]);
	}
	return 0;
}