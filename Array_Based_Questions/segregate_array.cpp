#include <bits/stdc++.h>
using namespace std;

vector<int> segregateArray(vector<int> &arr) {
    int n = arr.size();
    vector<int> res;
    for (int i: arr) {
        if (!(i % 2))
            res.push_back(i);
    }
    for (int i: arr) {
        if (i % 2)
            res.push_back(i);
    }
    return res;
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
    cout << "Segregated array: ";
    vector<int> res = segregateArray(arr);
    for (int i = 0; i < n; i++)
        cout << res[i] << " ";
    cout << endl;
    return 0;
}