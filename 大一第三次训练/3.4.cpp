//
// Created by 仇皓然 on 24-11-25.
//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 函数：计算最大容积
int maxArea(vector<int>& height) {
    int left = 0, right = height.size() - 1; // 定义双指针
    int max_area = 0; // 最大面积初始化为0

    while (left < right) {
        // 当前的面积
        int area = min(height[left], height[right]) * (right - left);
        max_area = max(max_area, area); // 更新最大面积

        // 移动较小的一侧
        if (height[left] < height[right]) {
            left++;
        } else {
            right--;
        }
    }

    return max_area; // 返回最大面积
}

int main() {
    int n;
    cin >> n; // 输入数组长度
    vector<int> height(n);

    // 输入height数组
    for (int i = 0; i < n; ++i) {
        cin >> height[i];
    }

    // 输出最大容积
    cout << maxArea(height) << endl;
    return 0;
}