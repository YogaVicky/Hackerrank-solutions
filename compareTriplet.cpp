#include <iostream>
using namespace std;
int compareTriplets(int a[3] , int b[3]){
    int c[2];
    int i;
    for (i = 0; i < 3; i++)
    {
        if(a[i] < b[i])
        c[0]++;
        else
        c[1]++;
    }
    return c;
}
int main() {
  int i, a[3], b[3],c[2];
  cout << "Enter the triplet of alice";
  for (i = 0; i < 3; i++)
    cin >> a[i];
  cout << "Enter the triplet of bob";
  for (i = 0; i < 3; i++)
    cin >> b[i];
  c = compareTriplets(a , b);
  return 0;
}