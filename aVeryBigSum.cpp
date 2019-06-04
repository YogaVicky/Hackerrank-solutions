#include <iostream>
using namespace std;
int n;
long long int aVeryBigSum(long long int a[]){
  long long int b = 0;
  for(int i = 0; i<n; i++)
      {
        b += a[i];
      }
    return b;
}
int main() {
    long long int a[10] , b;
    cin>>n;
    for(int i = 0; i<n; i++)
    {
      cin>>a[i];
    }
    b = aVeryBigSum(a);
    cout<<b;
    return 0;
}