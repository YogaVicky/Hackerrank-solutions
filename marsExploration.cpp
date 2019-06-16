#include <iostream>
#include<string>
using namespace std;
int main() {
    string a;
    int count = 0 , i;
    getline(cin,a);
    for (i = 0;a[i]!='\0'; i++) {
        if(a[i]!='O' && i%3 == 1){
            count++;
            // cout<<a[i]<<endl;
        }
        if(a[i]!='S' && i%3 != 1){
            count++;
            // cout<<a[i]<<endl;
        }
    }
    cout<<count;
    return 0;
}