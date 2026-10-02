/*Given a one-dimensional array of integers, replace all numbers
greater than X with M*/
#include <iostream>
using namespace std;
int main() {
  int n,x,m;
    cin>>n>>x>>m;
    int a[1000];
    for (int i = 0; i< n;i++) {
        cin>>a[i];
        if (a[i]>x) {
            a[i] = m;
        }
    }
    for (int i = 0; i< n;i++) {
        cout<<a[i]<<" ";
    }
    return 0;
}
