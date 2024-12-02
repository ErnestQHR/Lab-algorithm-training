//五、最多出现字符
//按照字典顺序输出字符串里最多出现的字符。
// Created by 仇皓然 on 24-12-2.
//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;

    vector<int> freq(26, 0);

    // 统计字符频率
    for (char c : s) {
        freq[c - 'A']++;  // 'A'的ASCII值是65
    }

    // 找到最大出现次数
    int max= * max_element(freq.begin(), freq.end());

    // 找出所有出现最大次数的字符
    vector<char> result;
    for (int i = 0; i < 26; ++i) {
        if (freq[i] == max) {
            result.push_back('A' + i);  // 'A' + i 得到大写字母
        }
    }

    // 输出按字典顺序排列的字符
    for (char c : result) {
        cout << c;
    }

    cout << endl;

    return 0;
}//关键的一点是要使用ascii码灵活传化数字和字符