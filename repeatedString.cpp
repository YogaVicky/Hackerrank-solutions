#include <iostream>
#include<string>
using namespace std;
int main(){
    long long n , i , count = 0, j , rem = 0;
    string a;
    getline(cin,a);
    for(i=0;a[i]!='\0';i++){
        if(a[i] == 'a')
            count++;
    }
    // cout<<count<<endl;
    cin>>n;
    count = count*(n/i);
    // cout<<count<<endl;
    // cout<<i<<endl<<count<<endl;
    j = n%i;
    // cout<<j<<endl;
    for(i=0;i<j;i++){
        if(a[i] == 'a')
            count++;
    }
    // cout<<count<<" "<<rem
    cout<<count;
    return 0;
}
