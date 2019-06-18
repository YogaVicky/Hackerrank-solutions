#include <iostream>
#include<string>
#include<math.h>
using namespace std;
int main(){
	int letter1[26] = {0} , letter2[26] = {0} , i , count = 0 , j;
	string a ,b;
	getline(cin,a);
	getline(cin,b);
	for (i = 0;a[i]!='\0'; i++)
		letter1[a[i] - 'a']++;
	for (i = 0;b[i]!='\0'; i++)
		letter2[b[i] - 'a']++;
	for (i = 0;i<26; i++){
		if(letter1[i] != letter2[i])
			count = count + abs(letter1[i] - letter2[i]);
	}
	cout<<count;
	return 0;
}