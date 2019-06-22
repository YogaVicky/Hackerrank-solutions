#include <iostream>
using namespace std;
int main(){
    int p , m , d , s , i = 0,count = 0 , check = 0 , check1 = 0;
    cin>>p>>m>>d>>s;
    if(s<p){
        cout<<i;
        check++;
        return 0;
    	}
    s = s-p;
    p = p-m;
    if(p<d){
        p = d;
        m = 0; 
    }
    // cout<<s<<p;
    if(s<p){
        check++;
        check1++;
    }
    if(check==0){
    for(i=1;check == 0;i++){
        // cout<<p<<" ";
        s = s - p;
        p = p-m;
        if(s<p)check++;
        if(p<d){
            p = d;
            m=0;
        }
    }
    cout<<i;
    return 0;
    }
    // cout<<check<<endl;
    if(check == 1){
        cout<<1;
    }
    return 0;
}
