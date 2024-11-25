//给定一个长度为 n 的数列，请你求出数列中每个数的二进制表示中 1 的个数。
//输入描述：
//第一行包含整数 n 。
//第i + 1行包含 1个整数，表示数列的第 i 个数。
//输出描述：
//共一行，包含 n 个整数，其中的第 i 个数表示数列中的第 i 个数的二进制表示中 1 的个数。
// Created by 仇皓然 on 24-11-10.

#include <stdio.h>

int countOnes(int num) {
    int count = 0;
    while (num) {
        count += num & 1; // 检查最低位是否为1，如果是，count加1
        num >>= 1;        // 右移一位
    }
    return count;
}

int main() {
    int n;
    printf("请输入数列长度：");
    scanf("%d", &n);

    int nums[n];
    printf("请输入数列中的 %d 个数：\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    printf("每个数的二进制表示中 1 的个数：\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", countOnes(nums[i]));
    }
    printf("\n");

    return 0;
}