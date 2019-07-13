#include <iostream>
#include<string>
#include<math.h>
using namespace std;
int main(){
	int i , n , check = 0;
	string a;
	cin>>n;
	cin.ignore();
	getline(cin,a);
	for(i=0;i<n;i++){
		if(a[i] == '0' && a[i+1]=='1' && a[i+2]=='0'){
			i = i+2;
			check++;
		}
	}
	cout<<check;
	return 0;
}