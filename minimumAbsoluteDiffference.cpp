#include<iostream>
#include<vector>
#include<algorithm>
#include<stdlib.h>
#include<limits.h>
using namespace std;
int main(){
	vector<int>v;
	int n , i , a , min;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a;
		v.push_back(a);
	}
	sort(v.begin(),v.end());
	auto it = v.begin();
	min = *(it+1) - *it;
	it++;
	for(;it!=v.end();it++){
		if(*(it) - *(it - 1) < min)
			min = *(it) - *(it - 1);
	}
	cout<<min;
}