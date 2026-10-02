 // Task:
    // Print all even elements that are located at odd indices.
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[1000];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        if (i % 2 == 1 && a[i] % 2 == 0) {
            cout << a[i] << endl;
        }
    }
    return 0;
}
