#include <iostream>
#include <vector>
#include<conio.h>
using namespace std;
void inputMatrix(vector<vector<int>>& matrix, int rows, int cols) {
    cout << "لطفا درایه های ماتریس را وارد کنید:n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> matrix[i][j];
        }
    }
}

void printMatrix(const vector<vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (const auto& element : row) {
            cout << element << " ";
        }
        cout << "n";
    }
}

vector<vector<int>> multiplyMatrices(const vector<vector<int>>& matrixA, const vector<vector<int>>& matrixB, int m, int n, int k) {
    vector<vector<int>> result(m, vector<int>(k, 0));

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < k; ++j) {
            for (int r = 0; r < n; ++r) {
                result[i][j] += matrixA[i][r] * matrixB[r][j];
            }
        }
    }

    return result;
}

int main() {
    int m, n, k;

    cout << "تعداد ردیف های ماتریس اول (m): ";
    cin >> m;
    cout << "تعداد ستون های ماتریس اول و ردیف های ماتریس دوم (n): ";
    cin >> n;
    cout << "تعداد ستون های ماتریس دوم (k): ";
    cin >> k;

    vector<vector<int>> matrixA(m, vector<int>(n));
    vector<vector<int>> matrixB(n, vector<int>(k));

    
    cout << "ورودی ماتریس اول (" << m << "x" << n << "):n";
    inputMatrix(matrixA, m, n);

    cout << "ورودی ماتریس دوم (" << n << "x" << k << "):n";
    inputMatrix(matrixB, n, k);

   
    vector<vector<int>> result = multiplyMatrices(matrixA, matrixB, m, n, k);

    
    cout << "نتیجه حاصل ضرب ماتریس ها:n";
    printMatrix(result);

    return 0;
}
