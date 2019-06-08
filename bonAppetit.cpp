#include <iostream>
using namespace std;
int main(){
    long long int check = 0 , b;
    long int n , k ,i;
    int a[100000];
    cin>>n>>k;
    for(int i = 0;i < n ; i++ ){
        cin>>a[i];
        if(i != k)
            check += a[i];
    }
    cin >>b;
    if( check/2 == b )
        cout<<"Bon Appetit";
    else
        cout<<b - check/2;
    return 0;
}