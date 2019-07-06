#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int Q;
    cin >> Q;
    for(int a0 = 0; a0 < Q; a0++){
        int n,count=0,flag=0,count1=0;
        cin >> n;
        string b;
        cin >> b;
        
        // I added this
        
        for(int i=0;i<n;i++)
        {
            if(b[i]=='_')
            {
                flag=1;
                break;
            }
        }
        //Now it works Correctly
        
        for(int i=0;i<n;i++)
        { count=0;
         /*if(b[i]=='_')// Delete this commented part
         {
             flag=1;
             continue;
         }*/
            if(b[i]!='_')
            {
                for(int j=0;j<n;j++)
            {
                if(b[i]==b[j])
                    count++;
            }
            } 
             
       if(count==1)
         {
             break;
         }
        }
           if(count!=1&&flag==1)
           {cout<<"YES"<<endl;
           continue;}
       else if(flag==0)
       {
           for(int i=0;i<n;i+=count1)
           {count1=0;
               for(int j=i;b[j]!=b[i],j<n;j++)
               {
                   if(b[i]==b[j])
                       count1++;
               }
            if(count1==1)
            {
            break;
            }
           }
       }
        if(flag==0&&count1>1)
        {cout<<"YES"<<endl; 
        continue;}
         else
             cout<<"NO"<<endl;
      
        
    }
    return 0;
}