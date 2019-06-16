#include <iostream>
#include<string>
using namespace std;
int main() {
    string a;
    int count = 0 , i;
    getline(cin,a);
    for (i = 0;a[i]!='\0'; i++) {
    	if(a[i] < 91 && a[i] > 64)
    		count++;
    }
    cout<<count+1;
    return 0;
}