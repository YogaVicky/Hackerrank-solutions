#include <iostream>
#include<string>
#include<math.h>
using namespace std;
int main(){
	int q , i , check[10] , j;
	string b;
	cin>>q;
	cin.ignore();
	for(i=0;i<q;i++){
		int check1 = 0;
		getline(cin,b);
		for(j=0;b[j+1]!='\0';j++){
			if(b[j]==b[j+1])
				check1++;
		}
		check[i]=check1;
	}
	for(i=0;i<q;i++){
		cout<<check[i]<<endl;
	}
	return 0;
}