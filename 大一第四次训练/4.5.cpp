
// Created by 仇皓然 on 24-11-26.
//
#include <iostream>
#include <string>
using namespace std;

int longestPalindrome(string s) {
    if (s.empty()) return 0;

    int n = s.length();
    int maxLength = 1;

    // 中心扩展法，遍历每个字符及字符间隙作为回文中心
    for (int i = 0; i < n; ++i) {
        // 奇数长度回文（中心是一个字符）
        int left = i, right = i;
        while (left >= 0 && right < n && s[left] == s[right]) {
            maxLength = max(maxLength, right - left + 1);
            left--;
            right++;
        }

        // 偶数长度回文（中心是两个字符之间）
        left = i, right = i + 1;
        while (left >= 0 && right < n && s[left] == s[right]) {
            maxLength = max(maxLength, right - left + 1);
            left--;
            right++;
        }
    }

    return maxLength;
}

int main() {
    string s;
    cin >> s;
    cout << longestPalindrome(s) << endl;
    return 0;
}