//
// Created by 仇皓然 on 24-11-10.
//
#include <stdio.h>

int findMinimumCommon(int n1[], int len1, int n2[], int len2) {
    int minCommon = -1; // 初始化最小公共元素为 -1

    // 遍历 n1 数组中的每个元素
    for (int i = 0; i < len1; i++) {
        // 对每个 n1 中的元素，遍历 n2 数组查找是否有相同的元素
        for (int j = 0; j < len2; j++) {
            if (n1[i] == n2[j]) {
                // 找到公共元素
                if (minCommon == -1 || n1[i] < minCommon) {
                    minCommon = n1[i]; // 更新最小公共元素
                }
            }
        }
    }

    return minCommon; // 如果没有找到公共元素，返回 -1
}

int main() {
    int n, m;
    printf("请输入两个整数 n 和 m（数组1和数组2的长度）：");
    scanf("%d %d", &n, &m); // 输入数组长度

    int n1[n], n2[m];

    printf("请输入数组1：");
    for (int i = 0; i < n; i++) {
        scanf("%d", &n1[i]); // 输入数组1的元素
    }

    printf("请输入数组2：");
    for (int i = 0; i < m; i++) {
        scanf("%d", &n2[i]); // 输入数组2的元素
    }

    int result = findMinimumCommon(n1, n, n2, m);
    if (result == -1) {
        printf("没有公共元素\n");
    } else {
        printf("最小公共元素是: %d\n", result);
    }

    return 0;
}