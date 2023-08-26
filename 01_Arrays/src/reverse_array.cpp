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
    
    cout << "Normal array:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }

    int start = 0;
    int end = n - 1;

    while (start < end) {
        swap(a[start], a[end]);
        ++start;
        --end;
    }

    cout << endl << "Reverse array:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }

    return 0;
}