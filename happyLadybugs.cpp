#include <iostream>
#include<string>
#include<math.h>
using namespace std;
int main(){
	int g , n , i , res[100] = {0} , j  ,k;
	string a;
	cin>>g;
	for(i=0; i<g; i++){
		// cout<<i<<" "<<g<<endl;
		cin>>n;
		cin.ignore();
		getline(cin,a);
		int check1[26] = {0},check2 = 0,c=0;
		for(j = 0;a[j]!='\0'; j++){
			if(a[j]!=a[j+1] && a[j]!=a[j-1])
				c++;
			if(a[j]!='_')
				check1[a[j]-'A']++;
			else
				check2++;
		}
		int check=0;
		// cout<<check2<<endl;
		for(j = 0;j<26; j++){
			if(check1[j] == 1)
				check++;
		}
		// cout<<c<<endl;
		if((check2 != 0 && check == 0)||c==0){
			// cout<<"YES";
			res[i]++;
		}
		// for(k=0; k<=i; k++){
		// cout<<res[k]<<" ";
	}
	// cout<<endl;
	// for(i=0; i<g; i++){
	// 	cout<<res[i]<<" ";
	// }
	for(i=0; i<g; i++){
		// cout<<res[i]<<endl;
		if(res[i]==0)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;
	}
	return 0;
}