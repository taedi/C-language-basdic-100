// 단어 1개 입력받아 나누어 출력하기

#include <stdio.h>

int main() {
  // 단어 혹은 문장을 scanf 로 받게 되면, 마지막에 널문자(\0)가 자동으로 입력된다
  char d[21]="";
  scanf("%s", &d);
  for(int i = 0; d[i] != '\0'; i++) {
    printf("\'%c\'\n", d[i]);
  }
}