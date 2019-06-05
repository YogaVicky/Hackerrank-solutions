#include <iostream>
using namespace std;
int main(){
    long int a[5] ;
    long int min = 0 , max = 0 , temp;
    int i , j ;
    for (int i = 0; i < 5; i++) {
      cin>>a[i];
    }
    for (int i = 0; i < 5; i++) {
      for (int j = i+1; j < 5; j++){
        if(a[i] > a[j]){
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
      }
    }
    for (int i = 0; i < 4; i++){
        min += a[i];
    }
    for (int i = 1; i < 5; i++){
        max += a[i];
    }
    cout<<min<<" "<<max;
    return 0;
}