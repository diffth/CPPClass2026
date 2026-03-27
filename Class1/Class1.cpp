// Class1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

//C/C++ 인리얼 기본학습진행
//1.변수 variable
//   ① 기본자료형(type)
//      숫자
//          정수(int, ...)    1,2,3,4 ...
//          실수(float, ...)  1.1231... 부동소수점 사용
//      문자(char) -> 문자열(string) 클래스
//      bool(boolean) 1/0, true/false
//      상수(const)
//
//   ② 변수 분류
//      지역변수(local variable)  : 함수 내부에서 선언된 변수, 함수가 호출될 때 생성, 함수 종료될 때 소멸 
//      전역변수(global variable) : 프로그램 전체에서 접근 가능한 변수, 프로그램이 시작될 때 생성, 종료될 때 소멸
//      정적변수(static variable) : 지역변수와 유사, 모든 곳에서 선언 가능, 프로그램이 시작될 때 생성, 종료될 때 소멸
//          외부 정적변수 : 파일 범위에서 선언 정적변수, 다른 파일에서 접근 불가능
//          내부 정적변수 : 함수 내부에서 선언 정적변수, 함수 호출될 때 생성, 함수 종료되도 소멸x
//
//   ③ 사용자정의 자료형(전처리문 밑에 정의, main(), 함수 위에 정의)
//      열거형(enum)   : 상수들의 집합. enum Color { Red, Green, Blue };
//      구조체(struct) : 여러 변수들의 묶음. struct Info { int age, float height };
//      typedef        : 새로운 자료형 이름 정의, 별칭
// 
//   ④ 배열(array)
//      
// 
//---------------------------------------------------------------------------
//2.연산자 operator
//   산술연산자(+, -, *, /. %)
//   대입연산자(=, +=, -=, *=, /=, %=)
//   비교연산자(==, !=, >, >=, <, <=)
//   논리연산자(&&, ||, !:논리NOT)
//   증감연산자(++x, x++, --x, x--)
//   기타 연산자
//      비트연산자(<<, >>)
//      쉼표(,)연산자
//      삼항연산자(조건식 ? 참 : 거짓)
//      sizeof(int) 메모리크기반환 연산자
//      :: 범위지정 연산자 standard library (std::cout, cin, endl)
//      namespace 이릉공간 namespace::classroom
//      using 지시어 선언(using namespace std;)
//
//---------------------------------------------------------------------------
//3.제어문
//   조건문
//      if(조건식) { true 실행... }
//      if(조건식) { true 실행... } else { false 실행...}
//      if(조건식) { true 실행... } else if(조건식) { true 실행... } else { 실행... }
//      switch(조건값)
//      {
//          case 값1: 실행... break;   
//          case 값2: 실행... break;
//          ...
//          ...
//          default:  실행... break;
//      }
//      
//   반복문
//      while(조건식) { true 실행... }
//      do{ 조건없이 처음 실행후... 조건식 실행 } while(조건식);
//      for(초기식; 조건식, 증감식;){ true 실행... }
//      break; 반복문 종료/탈출
//      continue; 반복문 점프/이동
//
//---------------------------------------------------------------------------
//4.함수 function
//   함수(function): 특정 작업을 수행하기 위해 톡립적으로 설계된 프로그램 코드 집합
//   재사용/반복 사용
//   함수 선언, 정의, 호출
//   
//   main() 함수: 프로그램이 실행될 때 가장 먼저 호출되는 함수
//   입출력 함수: scanf()/printf(), cin/cout, endl...
//   
//   모듈화
//      프로그램을 여러 개의 작은 부분으로 나누어 관리하는 방법
//      .h 헤더파일   : 함수 선언, 클래스 정의, 상수 정의 등...
//      .cpp 소스파일 : 함수 정의, 클리스 구현 등... 
//   전처리기(선행처리기)
//      컴파일 전에 소스코드를 처리하는 프로그램
//      #include, #define, #ifdef, #ifndef....
//      #pragma...
//   C++ 표준 라이브러리
//      #include <iostream> : 입출력 스트림 라이브러리
//      #include <random>   : 난수 생성 라이브러리
//      #include <string>   : 문자열 클래스 라이브러리
//      ....
// 
//   메모리구조
//      코드영역   : code, 프로그램의 명령어가 저장되는 영역
//      데이터영역 : data, global variable, 전역변수, 정적변수, 상수 등이 저장디는 영역
//      heap 영역  : dynamic allocation, 동적 메모리 할당이 이루어지는 영역
//      stack 영역 : local variable, parameter, 함수의 매개변수, 지역변수, 반환주소 등이 저장되는 영역
//                   (함수 호출시 생성, 함수 종료시 소멸)
//  
//
//
//기타등등
//   빌드
//      소스코드를 컴퓨터가 이해할 수 있는 기계어로 번역하는 과정
//      디버깅 + 컴파일 + 링킹 과정
//      실행파일(.exe) 생성
//   주석
//      프로그램에서 컴파일 되지 않는 코드, 설명을 위한 글, 코멘트
//      프로그램 관련 정보를 제공하거나, 의도나 목적을 설명하는 데 사용
//      //한줄 주석처리   ctrl+/
        /*
        여러줄 주석처리   ctrl+shift+/
        */
//

#include <iostream>

using namespace std;

// Function 함수정의
int Sum(int a, int b)
{
    int temp = a + b;
    return temp;
}


int main()
{
    //std::cout << "Hello World!\n";
    //int Length; //변수선언
    //Length = 5; //변수 초기화
    //변수선언, 초기화
    //int Length = 5;

    //한줄복사 ctrl+ d
    //한줄이동 alt +↑/↓
    //std::cout << Length << std::endl;
    //Length = 9999;
    //std::cout << Length << std::endl;

    int c;
    int a = 3;
    int b = 4;
    c = Sum(a, b);
    std::cout << c << endl;

    char Fruits[3][10] = { "apple", "banana", "orange" };
    //using namespace std; (std:: 생략가능)
    cout << "1번째 항목 : " << Fruits[0] << endl; 
    cout << "2번째 항목 : " << Fruits[1] << endl;
    cout << "3번째 항목 : " << Fruits[2] << endl;

    int arr[5];
    int ArrSize;
    int ArrLength1, ArrLength2;

    ArrSize = sizeof(arr); // 배열 크기
    ArrLength1 = sizeof(arr) / sizeof(int); // 배열 길이
    ArrLength2 = sizeof(arr) / sizeof(*arr); //첫번째 원소의 값. 포인터(*) *arr과 arr[0] 동일

    cout << "배열 크기 : " << ArrSize << "\n";
    cout << "배열 길이 : " << ArrLength1 << "\n";
    cout << "배열 길이 : " << ArrLength2 << "\n";

}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
