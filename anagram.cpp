#include <iostream>
#include<string>
#include<math.h>
#include<algorithm>
using namespace std;
int main(){
	string a[100] ;
	int q , i , j, count[100] = {0};
	cin>>q;
	cin.ignore();
	for (i = 0;i<q; i++){
		getline(cin,a[i]);
	}
	int len;
	for (i = 0;i<q; i++){
		for (len = 0;a[i][len] != '\0'; len++);
			
	return 0;
}