#include <iostream>
#include<string>
#include<math.h>
using namespace std;
int main(){
	int n , i , a[100][26] = {0} , j;
	string b;
	cin>>n;
	cin.ignore();
	for(i=0;i<n;i++){
		getline(cin,b);
		for(j=0;b[j]!='\0';j++){
			a[i][b[j]-'a']++;
		}
	}
	int check = 0 , check1;
 	for(j=0;j<26;j++){
 		check1=0;
 		for(i=0;i<n;i++){
 			if(a[i][j]==0)
 				check1=1;
 		}
 		if(check1==0)
 			check++;
 	}
 	cout<<check;
	return 0;
}