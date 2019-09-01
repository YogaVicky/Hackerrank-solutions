#include<iostream>
using namespace std;
int main(){
	int a[100000][5] , q , n , b[100000] = {0} , lastanswer = 0;
	cin>>n>>q;
	while(q--){
		cin>>s>>x>>y;
		if(s==1){
			a[(x^lastanswer)%n][b[(x^lastanswer)%n]] = y;
			b[(x^lastanswer)%n]++;
		}
		else{
			lastanswer = y%b[(x^lastanswer)%n];
			cout<<lastanswer<<endl;
		}
	}
	return 0;
}