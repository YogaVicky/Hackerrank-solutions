#include <iostream>
#include<iomanip>
using namespace std;
int main(){
    int a[100] , pos=0 , neg=0 , zero=0 ,n;
    cin>>n;
    for (int i = 0; i < n; i++){
        cin>>a[i];
    }
    for (int i = 0; i < n; i++) {
      if (a[i] > 0)
        pos++;
      else if (a[i] < 0)
        neg++;
      else
        zero++;
    }
    float p , m , z;
    p = float(pos)/float(n);
    m = float(neg)/float(n);
    z = float(zero)/float(n);
    cout<<setprecision(6)<<p<<endl<<setprecision(6)<<m<<endl<<setprecision(6)<<z;
    return 0;
}