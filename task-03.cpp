/*
Task:
Given a one-dimensional array, print the doubled values
of the elements that are less than K.

Input:
The first line contains N and K.
The second line contains N integers — the elements of the array.

Output:
Print the doubled values of all elements that are less than K.
*/
#include <iostream>
using namespace std;
int main() {
  int n,k;
    cin>>n>>k;
    int a[1000];
    for (int i = 0; i< n;i++) {
        cin>>a[i];
        if (a[i]<k) {
            a[i]*=2;
        }
    }
    for (int i = 0; i< n;i++) {
        cout<<a[i]<<" ";
    }
    return 0;
}
