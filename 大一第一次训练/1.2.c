//给你一个整数 x ，如果 x 是一个回文整数，返回 true ；否则，返回 false 。回文数是指正序（从左向右）和
//倒序（从右向左）读都是一样的整数。
//例如，121 是回文，而 123 不是。
//知识点：
//整型转化为字符串
//字符串的遍历
// Created by 仇皓然 on 24-11-10.
//
#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int x) {
    // 如果 x 是负数，或者以 0 结尾但不是 0 本身，直接返回 false
    if (x < 0 || (x % 10 == 0 && x != 0)) {
        return false;
    }

    int reversed = 0;
    while (x > reversed) {
        reversed = reversed * 10 + x % 10; // 反转最后一位
        x /= 10; // 去掉最后一位
    }

    // 当 x 和 reversed 相等时，表示是回文数
    // 或者当 x 是奇数时，反转数去掉中间的数字后与 x 相等
    return x == reversed || x == reversed / 10;
}

int main() {
    int num;
    scanf("%d", &num);
    if (isPalindrome(num)) {
        printf("%d 是回文数\n", num);
    } else {
        printf("%d 不是回文数\n", num);
    }
    return 0;
}