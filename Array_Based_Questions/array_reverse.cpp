#include <bits/stdc++.h>
using namespace std;

void reverse(vector<int> &arr) {
    int n = arr.size();
    for (int i = 0; i < n / 2; i++)
        swap(arr[i], arr[n - i - 1]);
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
    reverse(arr);
    cout << "Reversed array: ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}