#include <iostream>
using namespace std;
int main(){
    long long int b , n , m , i , j , max=0 , a1[1000] , b1[1000];
    cin>>b>>n>>m;
    for(i=0;i<n;i++){
        cin>>a1[i];
    }
    for(i=0;i<m;i++){
        cin>>b1[i];
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(max<(a1[i] + b1[j]) &&  (a1[i] + b1[j])<=b)
                max = a1[i] + b1[j];
        }    
    }
    if(max==0)
        cout<<-1;
    else
        cout<<max;
    return 0;
}