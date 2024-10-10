#include <bits/stdc++.h>
using namespace std;

pair<int, int> min_max_ele(vector<int> &arr) {
    int n = arr.size();
    int mini = INT_MAX, maxi = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] > maxi)
            maxi = arr[i];
        if (arr[i] < mini)
            mini = arr[i];
    }
    return {mini, maxi};
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> arr;
    int x;
    pair<int, int>min_max;
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> x;
        arr.push_back(x);
    }
    min_max = min_max_ele(arr);
    cout << "Min value: " << min_max.first << "\nMax value: " << min_max.second;
    return 0;
}