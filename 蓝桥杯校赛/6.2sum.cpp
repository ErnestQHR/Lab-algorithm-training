//
// Created by 仇皓然 on 24-12-2.
//s = （总和的平方 - 所有元素的平方和 ） / 2
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> a(n);


    long long total_sum = 0;//total_sum 是所有元素的和
    long long square_sum = 0;//square_sum 是所有元素的平方和
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        total_sum += a[i];  // 计算总和
        square_sum += a[i] * a[i];  // 计算每个元素的平方和
    }

    // 计算结果
    long long result = (total_sum * total_sum - square_sum) / 2;

    cout << result << endl;  // 输出最终的和
    return 0;
}