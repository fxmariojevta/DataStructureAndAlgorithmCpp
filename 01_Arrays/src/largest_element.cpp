#include<iostream>
#include<vector>

using namespace std;

int main() {
    int n {0};
    cout << "Enter the number of elements" << endl;
    cin >> n;

    vector<int> a(n, 0);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }


    int largest {INT_MIN};
    for (int i = 0; i < n; ++i) {
        if (largest < a[i])
            largest = a[i];
    }

    cout << "Largest element: " << largest << endl;

    return 0;
}