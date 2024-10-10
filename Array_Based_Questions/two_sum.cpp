#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &arr, int target) {
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target)
                return {i, j};
        }
    }
    return {};
}

int main() {
    int n, target;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter elements: ";
    vector<int> arr;
    int x;
    for(int i = 0; i < n; i++) {
        cin >> x;
        arr.push_back(x);
    }
    cout << "Enter target: ";
    cin >> target;
    vector<int> res = twoSum(arr, target);
    if (!res.empty())
        cout << "Indices found: " << res[0] << " and " << res[1] << endl;
    else
        cout << "No valid indices found.\n";    
    return 0;
}