#include <iostream>
#include<string>
using namespace std;
int main(){
	int n , i , a[10000] , j , k , count = 0 , d;
	cin>>n>>d;
	for(i = 0;i < n;i++ ){
        cin>>a[i];
    }
    for(i = 0;i < n;i++ ){
    	for(j = i+1;j < n;j++ ){
    		if(a[j] - a[i] == d){
    			for(k = j+1;k < n;k++ ){
    				if(a[k] - a[j] == d)
    					count++;
    			}
    		}
    	}
    }
    cout<<count;
	return 0;
}