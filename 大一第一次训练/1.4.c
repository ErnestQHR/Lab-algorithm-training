/*这道题的意思是：灵灵在非洲某贫困村开办学校，想知道应该定多少学费，
才能收到最多的总学费。每个村民的学费期望值用数组 wish 给出，
只有当实际学费 m 小于或等于 wish[i] 时，该村民才会送孩子入学。
 */
//解题思路
/*
 1.	排序：首先对 wish 数组进行升序排序。
 2.	遍历可能的学费：对于每一个 wish[i]，假设将学费定为 m = wish[i]，那么所有学费期望值大于等于 m 的村民都会入学。
 3.	计算总学费：每次设定一个学费 m，计算在该学费下能收到的总学费。记录下能取得的最大总学费。
 4.	输出：输出学费 m 和对应的最大总学费。
*/
// Created by 仇皓然 on 24-11-14.

#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
  return *(int *)a - *(int *)b;
}
int main() {
  int n;
  scanf("%d", &n);
  int wish[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &wish[i]);//往数组里读入数据
    }
    //对学费期望数组进行排序
    qsort(wish, n, sizeof(int), compare);

    int max_tuition = 0;//最大总学分
    int best_m=0;      //最佳学费的定价

    //便利每一个可能的学费定价m = wish[i]
    for (int i = 0; i < n; i++) {
      int m = wish[i];
      int num_students = n-i;
      int total_tuition = m * num_students;//总学费 = m * 能支付 m 的人数

      if (total_tuition > max_tuition) {
        max_tuition = total_tuition;
        best_m = m;
    }
}
printf("%d %d\n", best_m,max_tuition);
return 0;
}