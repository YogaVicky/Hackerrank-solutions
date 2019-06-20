#include <iostream>
#include<string>
#include<math.h>
#include<algorithm>
using namespace std;
void isFunny( string a ){
	string b = a ;
	// cout<<"HELLO";
	int len , i , j = 0;
	for(len = 0;a[len]!='\0'; len++);
		// cout<<len<<endl;
	for(i = len-1;i>=0; i--){
		b[j] = a[i];
		j++;
	}
	int check = 0;
	// cout<<a<<endl<<b<<endl<<len;
	for(i = 0;i<len-1; i++){
		if(abs(a[i] - a[i+1]) != abs(b[i] - b[i+1]))
			check++;
	}
	if(check == 0)
		cout<<"Funny"<<endl;
	else
		cout<<"Not Funny"<<endl;
}
int main(){
	int q , i;
	string a[10];
	cin>>q;
	// cout<<q;
	cin.ignore();
	for (i = 0;i<q; i++){
		getline(cin,a[i]);
	}
	for (i = 0;i<q; i++){
		// cout<<"HEllo";
		isFunny(a[i]);
	}
	return 0;
}