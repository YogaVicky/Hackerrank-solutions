#include <iostream>
using namespace std;
int main(){
    int t , i;
    unsigned long long int n[100] , m[100] , v ,s[100];
    cin>>t;
    for(i =0 ;i<t;i++){
        cin>>n[i]>>m[i]>>s[i];
    }
    for(i =0 ;i<t;i++){
        v = (m[i]%n[i] + s[i]) -1;
        if(v == 0)
            cout<<n[i]<<endl;
        else
            cout<<v<<endl;
    }
    return 0;
}