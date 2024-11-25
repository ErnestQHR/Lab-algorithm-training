//
// Created by 仇皓然 on 24-11-18.
//
#include <stdio.h>

int main() {
    // 定义变量
    int p1, p0, f, l;
    double total_score;
    const double BASE_SCORE = 1e7;  // 基本分
    const double FULL_SCORE = 1e7 + 1;  // 满分（基本分 + 附加分）

    // 输入四种判定的数量
    scanf("%d %d %d %d", &p1, &p0, &f, &l);

    // 计算总分
    total_score = FULL_SCORE * p1 + BASE_SCORE * p0 + (BASE_SCORE / 2) * f;

    // 判断评级
    if (total_score >= 9.9e6) {
        printf("EX+\n");
    } else if (total_score >= 9.8e6) {
        printf("EX\n");
    } else if (total_score >= 9.5e6) {
        printf("AA\n");
    } else if (total_score >= 9.2e6) {
        printf("A\n");
    } else if (total_score >= 8.9e6) {
        printf("B\n");
    } else if (total_score >= 8.6e6) {
        printf("C\n");
    } else {
        printf("D\n");
    }

    return 0;
}