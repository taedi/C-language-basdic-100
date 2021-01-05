// 실수 1개 입력받아 그대로 출력하기 - 2

#include <stdio.h>

int main() {
  double a;
  scanf("%lf", &a);
  printf("%.11lf", a);
}