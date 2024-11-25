//
// Created by 仇皓然 on 24-11-25.
//
#include <iostream>
#include <vector>
using namespace std;

// 函数：返回两数之和的下标（数组有序）
vector<int> twoSumSorted(vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1;

    while (left < right) {
        int sum = nums[left] + nums[right];
        if (sum == target) {
            return {left, right}; // 找到目标，返回下标
        } else if (sum < target) {
            left++; // 如果和小于目标值，左指针右移
        } else {
            right--; // 如果和大于目标值，右指针左移
        }
    }

    return {}; // 如果未找到，返回空数组
}

int main() {
    int n, target;
    cin >> n >> target; // 输入数组长度和目标值
    vector<int> nums(n);

    // 输入数组（假定有序）
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    // 调用函数并获取结果
    vector<int> result = twoSumSorted(nums, target);

    // 输出结果
    if (!result.empty()) {
        cout << result[0] << " " << result[1] << endl;
    } else {
        cout << "No solution found!" << endl;
    }

    return 0;
}