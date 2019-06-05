#include <iostream>
using namespace std;
int main(){
    long int n , a[1000000] , i ,max ,count=0;
    cin>>n;
    for(i = 0;i<n;i++){
        cin>>a[i];
    } 
    max = a[0];
    for(i = 1;i<n;i++){
        if( max < a[i] )
            max = a[i];
    }
    for(i = 0;i<n;i++){
        if( max ==a[i] )
            count++;
    }
    cout<<count;
    return 0;
}