#include <iostream>
#include<string>
using namespace std;
int main(){
	int n , k , a[25] , i , count = 100;
	cin>>n>>k;
	for (i = 0; i < n; i++){
        cin>>a[i];
    }
    for (i = 0; i < n; i = i+k){
        count--;
        if(a[i] == 1)
        	count -=2;
    }
    cout<<count;
	return 0;
}