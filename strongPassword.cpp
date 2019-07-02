#include <iostream>
#include<string>
using namespace std;
int main(){
    string a;
    int n , d=0 , l=0 , u=0 , s=0 , count = 0 , i , m;
    cin>>n;
    cin.ignore();
    getline(cin,a);
        for (i = 0;a[i]!='\0'; i++){
            if(a[i]<91 && a[i]>64)l++;
            else if(a[i]<123 && a[i]>96)u++;
            else if(a[i]<58 && a[i]>47)d++;
            else if(a[i] == '!' || a[i] == '@' || a[i] =='#' || a[i] =='$' || a[i] =='%' || a[i] =='^' || a[i] =='&' || a[i] =='*' || a[i] =='(' || a[i] ==')' || a[i] =='-' || a[i] =='+')s++;
            // else count++;
        } 
    // cout<<l<<" "<<u<<" "<<d<<" "<<s<<endl;
    if(d==0)count++;
    if(l==0)count++;
    if(u==0)count++;
    if(s==0)count++;
    m = count  + n;
    if(m<6)count = count + 6 -m;  
    cout<<count;
    return 0;
}