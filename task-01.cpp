/*
Given a one-dimensional array of N elements, print all numbers that are in the range [c, d].
*/
#include <iostream>
using namespace std;
int main() {
  int n,c,d;
    cin>>n>>c>>d;
    int a[1000];
    for (int i = 0; i< n;i++) {
        cin>>a[i];
        if (a[i]>=c && a[i]<=d) {
            cout<<a[i]<<' ';
        }
    }

    return 0;
}
