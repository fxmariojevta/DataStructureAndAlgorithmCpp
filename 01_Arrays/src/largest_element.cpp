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


    int largest {a[0]};
    int smallest {a[0]};
    for (int i = 0; i < n; ++i) {
        if (largest < a[i])
            largest = a[i];

        if (smallest > a[i])
            smallest = a[i];
    }

    cout << "Largest element: " << largest << endl;
    cout << "Smalest element: " << smallest << endl;
    
    return 0;
}