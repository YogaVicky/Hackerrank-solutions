#include <iostream>
#include<string>
using namespace std;
int main() {
    string a;
    char b , temp;
    int i , t , check = 0 , check1 ,check2 ,j;
    getline(cin,a);
    int letter[26] = {0};  
    // cout<<a[0];  
    for (i = 0;a[i]!='\0'; i++) {
        // cout<<a[i]<<endl;
        if(a[i] > 96 && a[i] < 123)
        letter[a[i] - 'a']++;
        // cout<<a[i]<<endl;
        else if(a[i] < 91 && a[i] > 64)
        letter[a[i] - 'A']++;
        else
            continue;
    }
    for (i = 0; i < 26; i++) {
        if (letter[i] == 0)
            check++;
    }

    if(check ==0 )
        cout<<"pangram";
    else
        cout<<"not pangram";
    return 0;
}
