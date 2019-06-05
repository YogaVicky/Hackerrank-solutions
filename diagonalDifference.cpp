#include <iostream>
using namespace std;
int main(){
    int a[250][250] , n , i , j , d1 = 0 , d2 =0, diff;
    cin>>n;

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            cin>>a[i][j];
        }
    }
    
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if( i == j )
                d1 += a[i][j];
            if( i + j == n - 1 )
                d2 += a[i][j];
        }
    }
    if( d1 > d2 )
        diff = d1 - d2;
    else
        diff = d2 - d1;
    cout<<diff;
    return 0;
}