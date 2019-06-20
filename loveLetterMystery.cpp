#include <iostream>
#include<string>
#include<math.h>
#include<algorithm>
using namespace std;
int main(){
	string a[10] ;
	int q , i , j, count[10] = {0};
	cin>>q;
	cin.ignore();
	for (i = 0;i<q; i++){
		getline(cin,a[i]);
	}
	int len;
	for (i = 0;i<q; i++){
		for (len = 0;a[i][len] != '\0'; len++);
		for(j = 0;j<len/2; j++){
			count[i] = count[i] + abs(a[i][j] - a[i][len-j-1]);
		}
	}
	for (i = 0;i<q; i++){
		cout<<count[i]<<endl;
	}
	return 0;
}