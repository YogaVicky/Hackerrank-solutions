#include <iostream>
using namespace std;
int main(){
    int n , s[100] , d , m ,i , check = 0 , j , tempsum;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>s[i];
    }
    cin>>d>>m;
    for(i=0;i<n;i++){
        tempsum = 0;
        for(j=i;j<m+i;j++){
            tempsum += s[j];
        }
        if(tempsum == d)
            check++;
    }
    cout<<check;
    return 0;
}