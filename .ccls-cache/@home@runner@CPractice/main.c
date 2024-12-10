#include <stdio.h> // 헤더 파일(표준 입출력 정의 라이브러리 포함)

// C 언어의 컴파일러는 main 함수가 딱 하나만 있어야 한다고 기대하며, main 함수가 여러 번 정의되어 있으면 링커 단계에서 오류가 발생한다.

// standard input output
// int main(void) { // 메인 함수(return type : int, argument : void)
//   printf("Hello World\n"); // 문자열 출력
//   return 0; // return value
// }

//variable
int main(void) {
  int x = 10; //variable data type 명시
  printf("x : %d", x);
  return 0;
}
