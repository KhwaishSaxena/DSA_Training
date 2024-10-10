#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> matrixMultiplication(vector<vector<int>> &arr1, vector<vector<int>> &arr2) {
    int n1 = arr1.size(), m1 = arr1[0].size(), n2 = arr2.size(), m2 = arr2[0].size();
    vector<vector<int>> res;
    if (m1 != n2) {
        cout << "Inner dimensions " << m1 << " and " << n2 << " do not match.\nCannot multiply.";
        return res;
    }
    res.resize(n1, vector<int>(m2));
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < m2; j++) {
            res[i][j] = 0;
            for (int k = 0; k < n2; k++)
                res[i][j] += arr1[i][k] * arr2[k][j];
        }
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
    res = matrixMultiplication(arr1, arr2);
    if (!res.empty()) {
        cout << "Resulting matrix after multiplication.\n";
        printMatrix(res);
    }
    return 0;
}