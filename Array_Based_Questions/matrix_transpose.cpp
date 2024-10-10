#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> matrixTranspose(vector<vector<int>> &arr) {
    int n = arr.size(), m = arr[0].size();
    vector<vector<int>> res(m, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            res[j][i] = arr[i][j];
    }
    return res;
}

void printMatrix(vector<vector<int>>arr) {
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr[0].size(); j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
}

int main() {
    int n, m;
    cout << "Enter number of rows and columns: ";
    cin >> n >> m;
    vector<vector<int>> arr(n, vector<int>(m));
    vector<vector<int>>res;
    int x;
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> x;
            arr[i][j] = x;
        }
    }
    cout << "Original matrix:\n";
    printMatrix(arr);
    res = matrixTranspose(arr);
    cout << "Transposed matrix:\n";
    printMatrix(res);
    return 0;
}