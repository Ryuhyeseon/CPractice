#include <stdio.h> // 헤더 파일(표준 입출력 정의 라이브러리 포함)
#include <string.h> // (문자열 라이브러리 포함)
#include <stdlib.h> // 표준 라이브러리 함수
#include <math.h> // 수학 라이브러리 함수
// Structure
// struct Person {
//   int age;
//   char *name;
// };

// C 언어의 컴파일러는 main 함수가 딱 하나만 있어야 한다고 기대하며, main 함수가
// 여러 번 정의되어 있으면 링커 단계에서 오류가 발생한다.
int main(void) { // 메인 함수(return type : int, argument : void)

  // Structure
  // struct Person personStructure;
  // struct Person* personStructurePointer;

  // personStructurePointer = &personStructure;
  
  // personStructure.age = 25;
  // printf("personStructure.age : %d\n", personStructure.age);
  // printf("personStruturePointer->age : %d\n", personStructurePointer->age);

  // personStructure.name = "류혜선";
  // printf("personStructure.name : %s\n", personStructure.name);
  // printf("personStructurePointer->name : %s\n", personStructurePointer->name);

  // personStructurePointer->name  = "update 류혜선";
  // printf("personStructurePointer->name : %s\n", personStructurePointer->name);
  // printf("personStructure.name : %s\n", personStructure.name);
  
  // standard input output
  // printf("Hello World\n"); // 문자열 출력
  // return 0; // return value

  // variable
  // int x = 10; //variable data type 명시
  // printf("x : %d", x);

  // operator
  // printf("10 / 3 = %d\n", 10 / 3);
  // printf("10 / 3 = %f\n", 10 / 3.0);

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
  // int age = 20;

  // if(age>=20){
  //   printf("age : %d\n", age);
  //   printf("adult\n");
  // }else{
  //   printf("age : %d\n", age);
  //   printf("not adult\n");
  // }

  // c : for == java : for
  // for(int i=0; i<10; i++){
  //   printf("i : %d\n", i);
  // }

  // c : while(1) == java : while(true)
  // int cnt = 0;
  // while(1) {
  //   cnt++;
  //   printf("while true * %d\n", cnt);

  //   if(cnt == 10){
  //     break;
  //   }
  // }

  // scanf %d : input data type, &num : save variable
  // printf("input num : ");
  // int num;
  // scanf("%d", &num);
  // printf("num : %d\n", num);

  // User Defined Function
  // printf("User Defined Function returnNum_10 : %d", returnNum_10());

  // // Array 
  // int a[2][2] = {{11, 22},{33, 44}};
  // int *p;
  // p = a[0]; // a[0]은 배열 a의 첫 번째 행의 주소를 가리키는 포인터이므로, &를 쓸 필요 없음
  // a[0] = &a[0][0] 모든 배열은 항상 첫 번째 요소의 주소를 가리킨다
  
  // printf("*(p) : %d\n", *(p)); // p가 가리키는 위치 a[0][0]의 값 
  // printf("*(p+1) : %d\n", *(p+1)); // p가 가리키는 위치에서 1칸 이동 a[0][1]의 값
  // printf("*(p+2) : %d\n", *(p+2)); // p가 가리키는 위치에서 2칸 이동 a[1][0]의 값
  // printf("*(p+3) : %d\n", *(p+3)); // p가 가리키는 위치에서 3칸 이동 a[1][1]의 값

  // //*&p == p
  // printf("a[0] : %p\n", a[0]); // a[0]은 배열 a의 첫 번째 행 {11, 22}을 가리키는 포인터
  // printf("*&p : %p\n", *&p);
  // printf("p : %p\n", p); // p는 a[0]을 가리키는 포인터로 a[0]의 주소가 출력

  int x = 10;
  int *p = &x;  // p는 x의 주소를 저장
  printf("%p\n", &x);   // x의 주소를 출력 (x의 주소)
  printf("%p\n", &p);   // p의 주소를 출력 (p의 주소)
  printf("%p\n", *&p);  // *&p는 p를 참조하므로 p의 주소를 출력 (결과적으로 p와 같음)
  printf("%p\n", p);  // *&p는 p를 참조하므로 p의 주소를 출력 (결과적으로 p와 같음)
  
  // // pointer
  // int arr[2][3] = {1, 2, 3, 4, 5, 6}; // arr는 2x3 크기의 2차원 배열로 {{1, 2, 3},{4, 5, 6}}
  
  // // p는 int(*)[3] 타입의 포인터로, "3개의 정수로 이루어진 배열"을 가리킵니다.
  // int (*p)[3] = arr;
  
  // // p == arr
  // printf("arr : %p\n", arr);
  // printf("p : %p\n", p);
  
  // // (*p)[2] == arr[0][2]
  // printf("(*p)[2] == arr[0][2] : %d\n", (*p)[2]); // (*p)는 {1, 2, 3}과 같고, (*p)[2]는 arr[0][2]
  
  // printf("*(p[0]+1) == arr[0][1] : %d\n", *(p[0]+1));
  // printf("*(*(p+1)+1)) == arr[1][1] : %d\n", *(*(p+1)+1));

  // strcat() : 문자열 연결
  // char a[20] = "concatenate a "; 
  // char b[10] = "and b";
  // printf("strcat(a, b) : %s\n", strcat(a, b));
  // printf("after strcat(a, b) a : %s\n", a); // 원본 문자열 변경

  // strcpy() : 문자열 복사
  // char c[20] = "copy a ";
  // char d[10] = "to b";
  // printf("strcpy(c, d) : %s\n", strcpy(c, d));
  // printf("after strcpy(c, d) c : %s\n", c); // 원본 문자열 변경

  // strcmp() : 문자열 ASCII 값 차이 비교
  // printf("strcmp(a, b) : %d\n", strcmp(a, b));
  // printf("strcmp(b, a) : %d\n", strcmp(b, a));

  // strlen() : 문자열 길이
  // printf("strlen(a) : %lu\n", strlen(a));
  // printf("strlen(b) : %lu\n", strlen(b));
  // printf("strlen(c) : %lu\n", strlen(c));
  // printf("strlen(d) : %lu\n", strlen(d));
  
  // strchr() : 문자열에서 특정 문자 찾기
  // printf("strchr(a, 'a') : %p\n", strchr(a, 'a'));

  // strstr() : 문자열에서 특정 문자열 찾기
  // printf("strstr(a, \"and\") : %p\n", strstr(a, "and"));

  // atoi(const char *nptr) : 문자열을 정수로 변환 "a" to int
  // char *str_num = "1";
  // printf("atoi(str_num) : %d\n", atoi(str_num));
  // printf("*after atoi(str_num) str_num : %c\n", *str_num); // 원본 문자열은 변경되지 않음
  
  // atof(const char *nptr) : 문자열을 실수로 변환 "a" to float
  // printf("atof(str_num) : %lf\n", atof(str_num));
  // printf("*after atof(str_num) str_num : %c\n", *str_num); // 원본 문자열은 변경되지 않음

  //  sprintf(char *restrict s, const char *restrict format, ...) : 숫자를 문자열 변환
  // char buffer[4] = {0};  // 변환된 값을 저장할 버퍼
  // int num = 100;  // 숫자형 변수
 
  // sprintf를 사용하여 정수를 문자열로 변환
  // sprintf(buffer, "%d", num);  // 10진수로 변환
  // printf("Converted number: %s\n", buffer);  // 출력: 100

  // char buffer2[50];
  // int num2 = 255;
  
  // sprintf(buffer2, "%x", num2);  // 소문자 16진수로 출력
  // printf("Formatted string (hex): %s\n", buffer2);  // 출력: ff

  // ceil(double x) : 소수점 올림 함수
  // double a = 3.14;
  // printf("ceil(a) : %lf\n", ceil(a));

  // floor(double x) : 소수점 내림 함수
  // printf("floor(a) : %lf\n", floor(a));
  
}

// User Defined Function
// int returnNum_10() { return 10; }