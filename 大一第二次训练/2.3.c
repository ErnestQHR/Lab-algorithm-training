//给你两个整数 a和 b( a≤b)。在 c( a≤c≤b) 的所有可能整数值中，求 (c−a)+(b−c)的最小值。
//输入描述：
//第一行包含 t(1≤t≤55) - 测试用例数。
//每个测试用例包含两个整数 a 和 b( 1≤a≤b≤10)。
//输出描述：
//对于每个测试用例，另起一行输出 (c−a)+(b−c) 的最小可能

#include <stdio.h>
int main(){
  int t;
  scanf("%d",&t);
  while(t--){
    int a,b;
    scanf("%d %d",&a,&b);

    int res = b-a;
    printf("%d\n",res);
  }
  return 0;
  }

