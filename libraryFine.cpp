#include <iostream>
using namespace std;
int main(){
	int d1 , d2 , m1 , m2 , y1 , y2;
	cin>>d2>>m2>>y2>>d1>>m1>>y1;
	if(y2>y1){
		cout<<10000;
		return 0;
	}
	else if(y2>y1 && m2>m1){
		cout<<(m2-m1)*500;
		return 0;
	}
	else if(d2>d1){
		cout<<(d2-d1)*15;
		return 0;
	}
	else{
		cout<<0;
		return 0;
	}
}