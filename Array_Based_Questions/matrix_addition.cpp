#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> matrixAddition(vector<vector<int>> &arr1, vector<vector<int>> &arr2) {
    int n = arr1.size(), m = arr1[0].size();
    vector<vector<int>> res(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            res[i][j] = arr1[i][j] + arr2[i][j];
    }
    return res;
}

void printMatrix(vector<vector<int>> arr) {
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr[0].size(); j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
}

int main() {
    int n1, m1, n2, m2;
    cout << "Enter number of rows and columns for first matrix: ";
    cin >> n1 >> m1;
    vector<vector<int>> arr1(n1, vector<int>(m1));
    cout << "Enter number of rows and columns for second matrix: ";
    cin >> n2 >> m2;
    vector<vector<int>> arr2(n2, vector<int>(m2));
    vector<vector<int>>res;
    int x;
    cout << "Enter elements in first matrix: ";
    for(int i = 0; i < n1; i++) {
        for(int j = 0; j < m1; j++) {
            cin >> x;
            arr1[i][j] = x;
        }
    }
    cout << "Enter elements in second matrix: ";
    for(int i = 0; i < n2; i++) {
        for(int j = 0; j < m2; j++) {
            cin >> x;
            arr2[i][j] = x;
        }
    }
    if (n1 == n2 || m2 == n2) {
        res = matrixAddition(arr1, arr2);
        cout << "Resulting matrix after addition:\n";
        printMatrix(res);
    }
    else
        cout << "Dimensions do not match\nCannot add.";
    return 0;
}