#include<iostream>
#include<algorithm>
#include<string.h>
#include<vector>
using namespace std;
int main(){
	int i , j , l , m , count = 0 , check = 0 , g;
	string s , t;
	cin>>s;
	cin>>t;
	cin>>g;
	m = s.length();
	for(i=0;s[i]!='\0';i++){
		if(s[i]!=t[i]){
			if(t[i] == '\0')
				check = 1;
			break;
		}
		else
			count++;
	}
	if(s.length() + t.length() <= g)
		cout<<"Yes";
	else if(check == 1){
		if(m - count <= g && (((m-count)%2 == 0 && g%2 == 0)||((m-count)%2 == 1 && g%2 == 1)))
			cout<<"Yes";
		else
			cout<<"No";
	}
	else{
		if(s.length() - count + t.length() - count <= g && (((s.length() - count + t.length() - count)%2 == 0 && g%2 == 0) || ((s.length() - count + t.length() - count)%2 == 1 && g%2 == 1))) 
			cout<<"Yes";
		else
			cout<<"No";
	}
	return 0;
}