#include <iostream>
#include<string>
using namespace std;
int main(){
    long int t , n[1000] , c[1000] , m[1000] , i ,count[1000] = {0};
    cin>>t;
    for (i = 0;i<t; i++){
        cin>>n[i]>>c[i]>>m[i];
    }
    int check;
    for (i = 0;i<t; i++){
        check = n[i]/c[i];
        count[i] = count[i] + check;
        while(check>m[i]){
            count[i]+=check/m[i];
            check = check/m[i];
            // check= check - check/m[i] + check%m[i];
        }
    }
    for (i = 0;i<t; i++){
        cout<<count[i];
    }
    return 0;
}