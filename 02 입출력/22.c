// 문장 1개 입력받아 그대로 출력하기

#include <stdio.h>

int main() {
  char data[2000] = "";
  fgets(data, 2000, stdin); // 공백 문자가 포함된 문자열을 받기 위해서
                            // 만약 scanf 를 사용하게 될 경우, "첫 번쨰" 단어까지만 저장된다
  printf("%s", data);
}