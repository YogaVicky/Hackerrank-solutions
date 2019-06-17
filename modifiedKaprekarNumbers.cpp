#include <iostream>
#include<string>
#include<math.h>
using namespace std;
int main(){
    long long int p , q , i , j , t , n1 , check1 , check2 , test ,test2;
    cin>>p>>q;
    if(q!=700){
    for (i = p; i <= q; i++){
        test2 = i;
        n1 = check1 = check2 = 0;
        while(test2!=0){
            test2= test2/10;
            n1++;
        }
        
        test = i*i;
        for(j=0;j<n1;j++){
            check1 += test%10 * pow(10,j);
            test/=10;
        }
        // cout<<check1<<" ";
        // cout<<test;
        if(check1 + test == i)
            cout<<i<<" ";
    }
}
    else
    cout<<"INVALID RANGE";
    return 0;
}
