//给定一个数组 nums，编写一个函数将所有 0 移动到数组的末尾，同时保持非零元素的相对顺序。
//请请注注意意 ，必须在不复制数组的情况下原地对数组进行操作。(如果你不想也可以OVO)
//输入描述：
//共两行数据，第一行包含一个 n 代表数组 nums 长度
//第二行包含一个长度为 n 的 nums 数组
//输出描述：
//一行输出移动 0 后的 nums 数组
// Created by 仇皓然 on 24-11-25.
//
#include <stdio.h>

void moveZeroes(int nums[], int n) {
    int j = 0;  // 指向非零元素的位置
    for (int i = 0; i < n; i++) {
        if (nums[i] != 0) {
            nums[j++] = nums[i];  // 将非零元素放到前面
        }
    }
    // 填充剩余的位置为 0
    for (int i = j; i < n; i++) {
        nums[i] = 0;
    }
}

int main() {
    int n;
    scanf("%d", &n);  // 读取数组长度
    int nums[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);  // 读取数组元素
    }

    moveZeroes(nums, n);  // 移动零到数组末尾

    for (int i = 0; i < n; i++) {
        printf("%d ", nums[i]);  // 输出处理后的数组
    }
    printf("\n");

    return 0;
}