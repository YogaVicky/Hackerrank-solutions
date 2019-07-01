#include <iostream>
using namespace std;
int main(){
    long long int n , k , q , i , a[100000] , m[500];
    cin>>n>>k>>q;
    for(i =0 ;i<n;i++){
        cin>>a[i];
    }
    for(i =0 ;i<q;i++){
        cin>>m[i];
    }
    for(i =0 ;i<q;i++){
        k = k%n;
        if(m[i] - k <0)
            cout<<a[m[i] - k + n]<<endl;
        else
            cout<<a[m[i] - k]<<endl;
    }
    return 0;
}