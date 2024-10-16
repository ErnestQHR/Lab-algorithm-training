//
// Created by 仇皓然 on 24-10-16.
//可以通过先排序颜值，然后双指针来解决这个问题。排序之后，可以用两个指针分别从颜值最小的同学和最大的同学开始，尝试组成一组，保证颜值差距在允许范围内。如果成功，就把两人都移出队伍，继续尝试下一组。
/*解决思路
1. 排序：首先对所有同学的颜值进行升序排序。
2. 双指针：使用两个指针 `left` 和 `right` 分别指向排序后的数组的开头和结尾。
 - 如果 `xi[right] - xi[left]` 小于 `m`，表示这两位同学的颜值差距满足要求，可以组成一组，同时将 `left` 和 `right` 移动。
 - 如果 `xi[right] - xi[left]` 大于或等于 `m`，表示颜值差距过大，`left` 移动到下一个同学以减少差距。
 - 每找到一组，计数器加 1。
*/
#include <stdio.h>
#include <stdlib.h>

// 比较函数，用于排序
int cmp(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int n, m;
    // 多组输入，直到没有输入数据为止
    while (scanf("%d %d", &n, &m) != EOF) {
        int arr[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        // 对颜值数组进行升序排序
        qsort(arr, n, sizeof(int), cmp);

        int left = 0, right = n - 1;
        int pairs = 0;

        // 双指针处理
        while (left < right) {
            if (arr[right] - arr[left] >= m) {
                // 差距太大，不满足条件，右指针左移
                right--;
            } else {
                // 差距符合条件，可以组成一组
                pairs++;
                left++;
                right--;
            }
        }

        // 输出最多的组合数
        printf("%d\n", pairs);
    }

    return 0;
}

