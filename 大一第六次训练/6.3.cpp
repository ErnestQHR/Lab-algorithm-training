#include <iostream>
#include <vector>
using namespace std;

void printMatrix(const vector<vector<int>>& matrix) {
    // 遍历每一行
    for (const auto& row : matrix) {
        // 遍历每一列
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
}

vector<vector<int>> transposeMatrix(const vector<vector<int>>& matrix) {
    if (matrix.empty()) return vector<vector<int>>();  // 修正空矩阵返回类型

    int rows = matrix.size();           // 行数
    int cols = matrix[0].size();        // 列数

    vector<vector<int>> transposed(cols, vector<int>(rows));  // 修正转置矩阵初始化

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            transposed[j][i] = matrix[i][j];
        }
    }

    return transposed;
}

int main() {
    // 示例矩阵
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    cout << "Original Matrix:" << endl;
    printMatrix(matrix);

    vector<vector<int>> transposed = transposeMatrix(matrix);

    cout << "Transposed Matrix:" << endl;
    printMatrix(transposed);

    return 0;
}