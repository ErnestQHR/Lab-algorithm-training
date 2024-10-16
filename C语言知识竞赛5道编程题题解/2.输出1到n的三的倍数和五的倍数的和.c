//
// Created by 仇皓然 on 24-10-16.
//
/*输入一个整数N，输出1到N(包括N)之间的3的倍数与5的倍数的数字和 输入描述:
例:输入:19
输出描述: 输出:78(3+5+6+9+10+12+15+18)*/

#include <stdio.h>
int main() {
    int n;//输入的整数
    int sum;//输出的和
    scanf(" %d", &n);
    for (int i = 0;i <= 0;i++) {
        if (i % 3 || i % 5 == 0) { //这里我写成了/号导致错误
            sum = sum + i;
        }
    }
    printf("%d", sum);
    return 0;
}
