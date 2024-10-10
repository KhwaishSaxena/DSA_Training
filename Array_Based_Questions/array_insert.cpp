#include <bits/stdc++.h>
using namespace std;

int insert(vector<int>&arr, int value, int pos) {
    int n = arr.size();
    if (pos > n) {
        cout << "Invalid position.\n";
        return n;
    }
    n += 1;
    arr.resize(n);
    for (int i = n - 1; i >= pos; i--)
        arr[i] = arr[i - 1];
    
    arr[pos] = value;
    return arr.size();
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> arr;
    int x;
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> x;
        arr.push_back(x);
    }
    int value, pos;
    cout << "Enter value to insert: ";
    cin >> value;
    cout << "Enter position: ";
    cin >> pos;
    n = insert(arr, value, pos - 1); // index = position - 1
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}