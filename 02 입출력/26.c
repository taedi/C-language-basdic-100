// 시, 분, 초 입력받아 "분"만 출력하기

#include <stdio.h>

int main() {
  int h, m, s;
  scanf("%d:%d:%d", &h, &m, &s);
  printf("%d", m);
}