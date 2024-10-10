#include <bits/stdc++.h>
using namespace std;

int second_largest(vector<int> &arr) {
    int n = arr.size();
    int first = INT_MIN, second = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second)
            second = arr[i];
    }
    return second;
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
    cout << "Second largest element: " << second_largest(arr);
    return 0;
}