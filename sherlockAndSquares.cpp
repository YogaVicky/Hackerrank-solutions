#include <iostream>
#include<math.h>
using namespace std;
int main(){
    long long int q , count , a[100] , b[100] , i , j , c1 , c2;
    cin>>q;
    for(i=0;i<q;i++){
        cin>>a[i]>>b[i];
    }
    for(i=0;i<q;i++){
        c1 = sqrt(a[i]);
        c2 = sqrt(b[i]);
        count = 0;
        if(floor(pow(a[i],0.5)) == ceil(pow(a[i],0.5)))
        	count++;
        // if(floor(pow(b[i],0.5)) == ceil(pow(b[i],0.5)))
        // 	count++;
        for(j=floor(c1);j<floor(c2);j++){
            count++;
        }
        cout<<count<<endl;
    }
    return 0;
}