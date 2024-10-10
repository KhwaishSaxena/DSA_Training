#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, x;
    cout << "Enter number of rows and columns: ";
    cin >> n >> m;
    vector<vector<int>> arr2d(n, vector<int>(m));
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> x;
            arr2d[i][j] = x;
        }
    }
    cout << "2d array created:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cout << arr2d[i][j] << " ";
        cout << endl;
    }
    return 0;
}