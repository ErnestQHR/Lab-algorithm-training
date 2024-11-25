//
// Created by 仇皓然 on 24-11-26.
//unorder_set
#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int removeDuplicates(vector<int>& nums) {
    // 使用一个集合来判断元素是否重复
    unordered_set<int> seen;
    int k = 0; // k表示不重复元素的位置

    for (int i = 0; i < nums.size(); ++i) {
        // 如果当前元素不在集合中
        if (seen.find(nums[i]) == seen.end()) {
            seen.insert(nums[i]);  // 加入集合
            nums[k] = nums[i];    // 将不重复的元素移动到前面
            ++k;
        }
    }

    return k; // 返回不重复元素的数量
}

int main() {
    int n;
    cin >> n;  // 输入数组长度

    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];  // 输入数组元素
    }

    int k = removeDuplicates(nums);

    cout << k << endl;  // 输出不重复元素的数量
    for (int i = 0; i < k; ++i) {
        cout << nums[i] << " ";  // 输出前k个不重复的元素
    }
    cout << endl;

    return 0;
}