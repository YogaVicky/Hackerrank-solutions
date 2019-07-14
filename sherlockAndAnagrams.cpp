#include <iostream>
#include<string>
#include<math.h>
using namespace std;
int check_anagram(string a, string b)
{
   int first[26] = {0}, second[26] = {0}, c = 0;

   while (a[c] != '\0') {
      first[a[c]-'a']++;
      c++;
   }
   c = 0;
   while (b[c] != '\0') {
      second[b[c]-'a']++;
      c++;
   }

   for (c = 0; c < 26; c++) {
      if (first[c] != second[c])
         return 0;
   }

   return 1;
}
int main(){
	int q , i , count[10];
	cin>>q;
	cin.ignore(); 
	for(i=0;i<q;i++){
		string a , b[10000];
		getline(cin,a);
		int n = a.length();
		int check= 0;
		for (int len = 1; len <= n; len++){      
        	for (int i2 = 0; i2 <= n - len; i2++){    
            	int j = i2 + len - 1;      
            	for (int k = i2; k <= j; k++){  
                	b[check].push_back(a[k]);
            	}
        		check++;
    		} 
    	}
    	int i1 , i3;
    	for(i1=0;i1<check-2;i1++){
    		for(i3=i1+1;i3<check-1;i3++){
	    		if(b[i1].length() == b[i3].length()){
	    			// cout<<b[i1]<<" "<<b[i3]<<endl;
	    			count[i]+=check_anagram(b[i1] , b[i3]);
	    		}
	    	}	
    	}	
	}
	for(i=0;i<q;i++){
		cout<<count[i]<<endl;
	}
	return 0;
}