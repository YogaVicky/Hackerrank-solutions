#include<iostream>
#include<string>
using namespace std;
int main(){
	int m , i;
	string a , b;
	cin>>m;
	cin.ignore();
	getline(cin,a);
	getline(cin,b);
	int t1 , t2;
	for(i =0 ;i<m;i++){
		cout<<(a[i]-'0'||b[i]-'0')<<endl;
	}
	return 0;
}