//验证回文串
// Created by 仇皓然 on 24-11-10.
//
#include <stdio.h>
#include <string.h>

int isPalindrome(char str[]) {
    int length = strlen(str);
    if (length == 0) {
        return 0; // 空字符串，返回 false
    }

    int start = 0;
    int end = length - 1;

    // 对称比较字符串的两端
    while (start < end) {
        if (str[start] != str[end]) {
            return 0; // 不是回文串，返回 false
        }
        start++;
        end--;
    }
    return 1; // 是回文串，返回 true
}

int main() {
    char str[100];
    printf("请输入一个字符串（最多99个字符）：");
    scanf("%99s", str); // 限制输入最多99个字符

    // 打印 true 或 false
    if (isPalindrome(str)) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}