// 년, 월, 일을 입력 받아 형식 바꿔 출력하기

#include <stdio.h>

int main() {
  int y, m, d;
  scanf("%d.%d.%d", &y, &m, &d);
  printf("%02d-%02d-%04d", d, m, y);
}