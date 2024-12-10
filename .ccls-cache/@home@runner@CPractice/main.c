#include <stdio.h> // 헤더 파일(표준 입출력 정의 라이브러리 포함)

// C 언어의 컴파일러는 main 함수가 딱 하나만 있어야 한다고 기대하며, main 함수가
// 여러 번 정의되어 있으면 링커 단계에서 오류가 발생한다.
int main(void) { // 메인 함수(return type : int, argument : void)

  // standard input output
  //   printf("Hello World\n"); // 문자열 출력
  //   return 0; // return value

  // variable
  //   int x = 10; //variable data type 명시
  //   printf("x : %d", x);
  //   return 0;

  // operator
  //printf("10 / 3 = %d\n", 10 / 3);
  //printf("10 / 3 = %f\n", 10 / 3.0);

  // true : 1, false : 0
  // printf("10 > 3 = %d\n", 10 > 3);
  // printf("10 < 3 = %d\n", 10 < 3);

  // long long type : %lld
  // long long x = 100000000000000000;
  // printf("x : %lld\n", x);

  // sizeof() return byte size
  // unsigned int intNum = 1;
  // printf("intNum size: %lu\n", sizeof(intNum));

  // unsigned short shortNum = 1;
  // printf("shortNum size: %lu\n", sizeof(shortNum));

  // unsigned : not using nagative number
  // unsigned char charNum = 1;
  // printf("charNum size: %lu\n", sizeof(charNum));


  
  // c : if else == java : if else
  int age = 20;
  
  if(age>=20){
    printf("age : %d\n", age);
    printf("adult\n");
  }else{
    printf("age : %d\n", age);
    printf("not adult\n");
  }

  // c : for == java : for
  for(int i=0; i<10; i++){
    printf("i : %d\n", i);
  }

  // c : while(1) == java : while(true)
  int cnt = 0;
  while(1) {
    cnt++;
    printf("while true * %d\n", cnt);

    if(cnt == 10){
      break;
    }
  }
  
  // scanf %d : input data type, &num : save variable
  printf("input num : ");
  int num;
  scanf("%d", &num);
  printf("num : %d\n", num);
  
}