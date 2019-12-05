#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	vector<pair<int,int>>v[1000];
	map<int,int>mp;
	long long int n , m , k;
	cin>>n>>m>>k;
	int i , r , a , b;
	for(i=0;i<k;i++){
		cin>>r>>a>>b;
		if(mp.find(r) == mp.end())
			mp[r] = mp.size();
		r = mp[r];
		v[r].push_back(make_pair(a,b));
	}
	long long int sum = 0;
	if(k!=0){
		for(i=0;i<mp.size();i++){
			sort(v[i].begin(),v[i].end());
			auto it = v[i].begin();
			int ft = it->first , sc = it->second;
			sum += sc - ft + 1;
			it++;
			for(;it!=v[i].end();it++){
				if(it->first > sc){
					sum += it->second - it->first + 1;
					ft = it->first;
					sc = it->second;
				}
				else if(it->second > sc){
					sum += it->second - sc;
					ft = it->first;
					sc = it->second;
				}
			}
		}
	}
	cout<<n*m-sum<<endl;
	return 0;
}