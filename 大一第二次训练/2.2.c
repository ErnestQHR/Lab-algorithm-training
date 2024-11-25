// 有两个数A和B
//请你求出其最大公约数(公因数,公因子)
//输入描述：
//两个数A和B
//输出描述：
//一个数，表示A和B的最大公约数
//示例1:
//输入
//6 4
//输出
//2
//求最大公约数，怎么又是求最大公约数啊，我服了。。。gcd 欧几里得算法怎么又来了！！
//辗转相除法 如果a大于b，a和b的最大公约数就是b和a%b的最大公约数，直到b为0，最终结果是a

#include <stdio.h>

int gcc(int a,int b){
  while(b!=0){
     int temp = b;
     b=a%b;
     a=temp;
  }
  return a;
  }
  int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",gcc(a,b));
  }
