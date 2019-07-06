#include <iostream>
#include<string>
#include<math.h>
using namespace std;
int main(){
	string a;
	char b[81];
	int i , j = 0 ;
	float s;
	// cin.ignore();
	getline(cin,a);
	for(i = 0;a[i]!='\0'; i++){
		if(a[i]!=' '){
			b[j] = a[i];
			j++;
		}
	}
	int l = j;
	int ul , ll;
	b[j]='\0';
	// cout<<b;
	// cout<<j;
	s = sqrt(j);
	if(ceil(s)*floor(s)>j){
		ul = ceil(s);
		ll = floor(s);
	}
	else{
		ul = ceil(s);
		ll = floor(s)+1;
	}

	// cout<<s<<" "<<ceil(s)<<" "<<floor(s)<<endl;
	for(i = 0;i<ul; i++){
		for(j = 0;j<ll; j++){
			int s1 = ul;
			if((i+j*s1)<l)
				cout<<b[i+j*s1];
			// cout<<i+(j*ceil(s));
		}
		cout<<" ";
	}
	return 0;
}