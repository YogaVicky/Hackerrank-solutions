#include <iostream>
using namespace std;
int main(){
    long int n , p , i;
    cin>>n>>p;
    if(n-p>p-1)
        cout<<(p-1)/2 + (p-1)%2;
    else if(n%2 == 0)
        cout<<(n-p)/2 + (n-p)%2;
    else
        cout<<(n-p)/2;
    return 0;
}