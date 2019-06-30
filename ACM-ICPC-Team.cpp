#include<iostream>
using namespace std;
int value(string a , string b , int m){
	int i , count = 0;
	for(i =0 ;i<m;i++){
		// cout<<(a[i]-'0'||b[i]-'0')<<endl;
		if((a[i]-'0'||b[i]-'0') == 1)
			count++;
	}
	return count;
}
int main(){
	string a[500];
	int n , m , i , j ,count = 0 , check , max = 0 , rvalue;
	long long int k;
	cin>>n>>m;
	cin.ignore();
    for(i=0;i<n;i++){
        getline(cin,a[i]);
    }
    check = (n*(n-1))/2;
    i = 1;j=2;
    for(k=0;k<check;k++){
    	rvalue  = value(a[i-1],a[j-1],m);
    	// cout<<i<<" , "<<j<<" "<<rvalue<<endl;
    	if(rvalue == max)
    		count++;
    	if( max <  rvalue){
    		max = rvalue;
    		count = 1;
    	}
    	// cout<<i<<" , "<<j<<endl;
		if(j==n){
			if(i==n-1)
				break;
			else{
				i++;
				j = i+1;
			}
		}
		else
		j++;	
    }
    cout<<max<<endl<<count;
	return 0;
}