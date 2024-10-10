#include <bits/stdc++.h>
using namespace std;

int del_ele(vector<int>&arr, int pos) {
    int n = arr.size();
    if (pos >= n) {
        cout << "Invalid position.";
        return n;
    }
    for (int i = pos; i < n; i++)
        arr[i] = arr[i + 1];
    n -= 1;
    return n;
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
    int pos;
    cout << "Enter position of element to delete: ";
    cin >> pos;
    n = del_ele(arr, pos - 1);
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}