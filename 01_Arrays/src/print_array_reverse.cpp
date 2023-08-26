#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n {0};
    cin >> n;

    vector<int> a(n, 0);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    cout << "Normal order:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }

    cout << endl << "Reverse order:" << endl;
    for (int i = n - 1; i >= 0; --i) {
        cout << a[i] << " ";
    }

    return 0;
}