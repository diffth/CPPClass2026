// Class1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
 
//C/C++ 인리얼 기본학습진행
//1.변수 variable
//   ① 기본자료형(type)
//      숫자
//          정수(int, ...)    1,2,3,4 ...,
//          실수(float, ...)  1.1231... 부동소수점 사용
//      문자(char) -> 문자열(string) 클래스
//      bool(boolean) 1/0, true/false
//      const 상수 : 변하지 않는 값 
//          선언과 동시에 초기화. 이후 값 변경 불가
//          const int A = 5; //상수 A 선언, 초기화
//          A = 10; //오류 발생. 상수는 값 변경 불가
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
//   ④ 배열 array []
//      같은 타입의 변수들의 집합. 연속된 메모리 공간에 저장.
//      int arr[5], char str[10]
//      int arr[5] = {1, 2, 3, 4, 5};   // int 배열 초기화
//      char str[10] = { "Hello" };     // char배열 초기화
//      1차원 배열, 2차원 배열, 다(n)차원 배열
//    
//   ⑤ string 문자열 클래스
//      문자들의 집합. 문자열은 char 배열로 가능하지만, c++에서는 string 클래스를 사용하여 문자열을 표현.
//      문자열을 다루기 위한 클래스. #include <string> 필요
//      동적 메모리 할당.
//      string str1 = "Hello";  //문자열 선언, 초기화
//      str1.length();          //문자열 길이 반환
//      str1.size();            //문자열 크기 반환
//      str1.empty();           //문자열이 비어있는지 여부 반환
// 
//      str1[3];                //문자열의 특정 위치에 접근
//      str1.at(3);             
// 
//      str1.apppend(" World");  //문자열 뒤에 추가
//      str1.insert(5, " C++");  //문자열 중간 5번에 삽입
//      str1.clear();            //문자열 내용 삭제
//      str1.replace(0, 5, "Hi");//문자열의 특정 위치에 있는 부분을 다른 문자열로 대체
//      기타 문자열 관련 함수들...
// 
//   ⑥ 포인터 pointer * 와 배열 []
//      변수의 주소를 저장하는 변수. 메모리 주소를 직접 다루는 변수
//      & 주소 연산자, 번지연산자
//      * 참조 연산자
//          int Num = 5;            //int 변수 선언, 초기화
//          int* ptr = &Num;        //포인터 변수 선언, 초기화
//          cout << *ptr << endl;   //포인터가 가리키는 값 출력 *ptr
//      NULL, nullptr : 포인터 변수 초기화     
//          int* ptr1 = NULL;
//          int* ptr2 = nullptr;
//      이중포인터, 다중포인터 등...
//      void* 포인터 : 어떤 타입의 데이터도 가리킬 수 있는 포인터.(주소값만 저장)
//      배열 포인터 * / 포인터 배열 []
// 
//   ⑦ 동적 메모리 할당(dynamic memory allocation) : new(생성), delete(해제) / 메모리누수(memory leak) 방지
//          int* ptr_dynamic = new int(5); //int타입 포인터 변수 동적 할당
//          delete ptr_dynamic;            //동적 할당 해제
//      배열의 동적할당
//          int* arr = new int[10]();      //int타입 배열의 동적 할당. 10개의 배열에 0으로 초기화
//          delete[] arr;                  //배열 동적할당 해제  
//      스마트 포인터(smart pointer) : 동적 메모리 관리를 자동으로 해주는 클래스
//          #include <memory>
//          std::unique_ptr<int> p = std::make_unique<int>(5); //유니크 포인터 생성, 초기화
//          unique_ptr, shared_ptr, weak_ptr 등의 스마트 포인터 제공
//          
//   ⑧ 참조자(reference &) : 변수의 별칭.
//          포인터와 유사하지만, 안전성이 높다.
//          선언과 동시에 초기화. 다른 변수 참조 불가능.
//          & 주소연산자와 다른 의미의 참조 연산자로 사용
//          int A;
//          int& A_Ref = A;
//      배열의 참조자
//          int A[3];
//          int (&A_Ref)[3] = A;        //배열 A의 참조자 A_Ref 선언, 초기화
//          cout << A_Ref[2] << endl;   //배열 A의 3번째 배열값에 접근
// 
//---------------------------------------------------------------------------
//2.연산자 operator
//   산술연산자(+, -, *, /. %)
//   대입연산자(=, +=, -=, *=, /=, %=)
//   비교연산자(==, !=, >, >=, <, <=)
//   논리연산자(&&, ||:pipe, !:논리NOT)
//   증감연산자(++x, x++, --x, x--)
//   기타 연산자
//      비트연산자(<<, >>)
//      쉼표(,)연산자
//      삼항연산자(조건식 ? 참 : 거짓)
//      sizeof(int) 메모리크기반환 연산자
//      :: 범위지정 연산자 (Scope Resolution Operator) //standard library (std::cout, cin, endl)
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
//   재사용/반복 사용 용이
//   함수 선언, 정의, 호출
//   
//   main() 함수: 프로그램이 실행될 때 가장 먼저 호출되는 함수
//   입출력 함수: scanf()/printf(), cin/cout, endl...
//   
//   모듈화
//      프로그램을 여러 개의 작은 부분으로 나누어 관리하는 방법
//      .h 헤더파일   : 함수 선언, 클래스 정의, 상수 정의 등...
//      .cpp 소스파일 : 함수 정의, 클래스 구현 등... 
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
//      데이터영역 : data, global variable, 전역변수, 정적변수, 상수 등이 저장되는 영역
//      heap 영역  : dynamic allocation, 동적 메모리 할당이 이루어지는 영역
//      stack 영역 : local variable, parameter, 함수의 매개변수, 지역변수, 반환주소 등이 저장되는 영역
//                   (함수 호출시 생성, 함수 종료시 소멸)
//  
//   함수의 매개변수(parameter, argument) 전달방식
//      값  전달(call by value) : 매개변수의 값을 복사하여 함수에 전달. 변수 사용
//      주소전달(call by address) : 매개변수의 주소를 함수에 전달. * 포인터 사용
//      참조전달(call by reference) : 매개변수를 참조자로 전달. & 참조자 사용
// 
//   const 매개변수 : 함수 내부에서 매개변수의 값을 변경불가하는 매개변수
//   
//   디폴트인수(default argument) : 함수 선언에서 매개변수에 기본값을 지정하는 기능
//      함수 호출시 인수의 값이 없으면, 기본값인 default argument 사용
// 
//   함수 오버로링(fucntion overloading) : 함수 중복정의
//      값은 이름의 함수 중복사용 허용.
//      함수 이름은 같지만, 매개변수의 타입이나 개수가 다른 함수를 여러 개 정의할 수 있는 기능
//   함수 오버라이딩(function overriding) : 함수 재정의
//   
//   템플릿(Template) : 함수나 클래스를 일반화하여 다양한 타입을 지원하는 기능
// 
//
//---------------------------------------------------------------------------
//5.객체 object
//   OOP(Object Oriented Programming) : 객체지향 프로그래밍
//   객체를 중심으로 프로그램을 설계하는 방법. 현실 세계의 사물을 모델링하여 프로그램을 만드는 방법.
//      추상화(abstraction)  : 중요한 부분만 추출하여 단순화하는 과정
//      상속성(inheritance)  : 기존 클래스의 특성을 물려받아 새로운 클래스를 만드는 과정
//      다형성(polymorphism) : 같은 인터페이스로 다른 구현을 사용할 수 있는 능력
//      캡슐화(encapsulation): 데이터와 함수를 외부에서 접근하지 못하게 숨기는 과정  
// 
//   클래스(class) : 객체를 생성하기 위한 설계도. 뿡어빵틀
//   객체(object) : 데이터를 처리하는 함수들의 집합. 붕어빵
//   인스턴스(instance) : 클래스로부터 생성된 객체. 붕어빵 하나하나.
//      Animal lion;                //Animal 클래스의 lion 객체 생성
//      Animal tiger = new Animal();//tigher 인스턴스 생성
//   
//   객체 구성
//      멤버변수(member variable) : 객체의 속성이나 상태를 나타내는 변수. 필드, 속성
//      멤버함수(member function) : 객체의 행동이나 기능을 나타내는 함수. 메소드(method)
// 
//   생성자(constructor), 소멸자(destructor)
//      Car();  생성자 : 객체가 생성될 때 자동으로 호출. 객체 초기화에 사용. 오버로딩 가능
//      ~Car(); 소멸자 : 객체가 소멸될 때 자동으로 호출. 객체 정리나 자원 해제에 사용.
// 
//   객체 생성/소멸
//      객체 생성 : 메모리(데이터)를 할당. 생성자 호출.             Car MyCar;
//      객체포인터* 생성 : 객체의 주소를 저장하는 포인터 변수 생성. Car* Ptr_MyCar = &MyCar;
//      객체참조자& 생성 : 객체의 별칭을 만드는 참조자 변수 생성.   Car& Ref_MyCar = MyCar;   
//      객체 소멸 : 메모리(데이터)를 해제. 소멸자 호출
//      객체 동적할당 : new 연산자를 사용, 객체를 동적으로 생성. delete 연산자로 해제
//          Car* MyCar = new Car(); //객체 동적할당
//          delete MyCar;           //객체 동적할당 해제
// 
//   멤버 접근 연산자 :객체의 멤버에 접근하는 연산자.
//      .  (dot) 연산자   : 객체의 멤버에 접근하는 연산자.
//          Car car; car.name;
//      -> (arrow) 연산자 : 객체포인터가 가리키는 객체의 멤버에 접근하는 연산자.
//          Car car; Car* ptr_car = &car; ptr_car->name;
// 
//   접근제한자(access specifier) : 클래스 멤버의 접근 권한을 지정하는 키워드. 캡슐화, 정보은닉성.
//      public    ; 공개, 클래스 외부/내부에서 모두 접근 가능
//      protected : 부분공개. 클래스 내부와 상속받은 클래스에서만 접근 가능
//      private   : 비공개, 클래스 내부에서만 접근 가능. getter/setter 함수로 접근 가능.
// 
//   상속(inheritance) : 부모클래스의 특성을 물려받아 새로운 클래스(자식클래스)를 만드는 과정.
//      코드 재사용성. 유지보수성 향상. 추상화된 부모클래스에서 구체화된 자식클래스 생성 가능.
//      부모클래스 : base class(기반클래스), super class, parent class
//      자식클래스 : derived class(파생클래스), sub class, child class. 생성자/소멸자 사용 호출
// 
//      오버로딩/오버라이딩
//          오버로딩(overloading)  : 함수 중복정의. 함수 이름은 같지만, 매개변수의 타입이나 개수가 다른 형태. 
//          오버라이딩(overriding) : 함수 재정의. 부모클래스에서 정의된 함수를 자식클래스에서 재정의하여 사용하는 형태. virtual 함수 사용
// 
//   다형성(polymorphism)
//      함수의 기능적 다형성과 상속에 의해 만들어진 계층 관계를 활용한 다형성
//      형변환(casting) : 객체의 타입을 다른 타입으로 변환하는 과정.
//          업캐스팅(up casting)     : 자식 클래스의 객체를 부모 클래스 타입으로 변환하는 과정.
//              Car car; Suv MySuv;
//              Car* ptr_car = &MySuv; //자식 클래스의 객체를 부모 클래스 타입의 포인터로 변환
//          다운캐스팅(down casting) : 부모 클래스의 객체를 자식 클래스 타입으로 변환하는 과정.
//              Car MyCar;
//              Suv* ptr_suv = &MyCar; //부모 클래시의 객체를 자식 클래스 타입의 포인터로 변환.
//          명시적 형변환 : 안전한 형편환을 위해, c++에서 미리 정해놓은 형변환 연산자. 
//              static_cast, dynamic_cast, const_cast, reinterpret_cast 등 제공.
// 
//      가상함수(virtual function) : 부모 클래스에서 가상함수로 선언된 함수를 자식 클래스에서 재정의하여 사용하는 형태.
//          virtual 멤버함수
//              class Car {
//                  ...
//                  virtual void Break() { cout << "Car의 브레이크" << endl; }   
//              }
//              class Suv : public Car {
//                  ...
//                  virtual void Break() { cout << "Suv의 브레이크" << endl; }
//              }
//          
//          __super 함수 : 부모 클래스의 함수를 자식 클래스에서 호출하는 방법.
//              class Car {
//                  ...
//                  virtual void Break() { cout << "Car의 브레이크" << endl; }   
//              }
//              class Suv : public Car {
//                  ...
//                  __super::Break(); //부모 클래스의 Break() 함수 호출
//                  virtual void Break() { cout << "Suv의 브레이크" << endl; }
//              }
//       
//      순수가상함수(pure virtual function)
//          부모 클래스에서 순수가상함수로 선언된 함수를 자식 클래스에서 반드시 재정의하여 사용하는 형태.    
//          부모클래스 선언 virtual void Break() = 0;
//          자식클래스 정의 virtual void Break() { .... } 
// 
//          추상클래스(abstract class) : 순수가상함수를 하나 이상 포함하는 클래스. 객체 생성 불가. 상속을 통해서만 사용 가능. 인터페이스 역할
//          인터페이스(interface)      : 순수가상함수로만 구성된 클래스. 객체 생성 불가. 상속을 통해서만 사용 가능. 클래스 간의 공통된 인터페이스 역할
// 
//          추상클래스와 인터페이스의 차이
//              추상클래스는 순수가상함수뿐만 아니라 일반 멤버함수, 멤버변수, 생성자/소멸자 등을 포함할 수 있지만,
//              인터페이스는 순수가상함수로만 구성된 클래스이다.
// 
//          추상클래스와 순수가상함수의 주의사항
//              추상클래스는 객체를 생성할 수 없지만, 추상클래스의 포인터나 참조자를 통해서 자식 클래스의 객체를 다룰 수 있다.
//              자식 클래스에서 순수가상함수를 반드시 재정의해야 한다.
//              순수가상함수는 public 접근제한자로 선언되어야 한다. 외부 접근 용이
// 
//   정적 멤버, 상수 멤버
//      static 멤버변수 :클래스에 속하는 멤버로, 객체가 아닌 클래스 자체에 속하는 멤버. 객체마다 공유되는 멤버
//          정적 멤버변수     static int CountCar;    //정적 멤버변수 선언
//          정적 멤버함수     static Car::CountCar(); //정적 멤버함수 선언
//      const 멤버변수 : 상수 멤버변수. 객체마다 고유한 값을 가지지만, 객체가 생성될 때 초기화되고, 값 변경 불가.   
//          상수 멥버변수
//          멤버함수의 const 멤버함수
//          상수 멤버함수
//              
//   this 포인터
//      객체 자기자신을 가리키는 포인터, 변경 불가, 클래스 내부에서만 접근가능
//      매개변수와 이름이 같은 멤버변수 구분
//      자기자신의 주소를 반환하는 함수로 사용
// 
//   다중상속 : 복수의 클래스를 상속받는 것.
//      여러 문제점으로 인해 언리얼에서는 추상클래스(인터페이스)만 다중상속 지원
//              
//              
//                     
// 
// 
//---------------------------------------------------------------------------
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

    /*
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
    */

    /*
    int Num = 5;
    int* ptr = &Num;

    cout << "Num 값 : " << Num << endl;
    cout << "ptr 주소   : " << ptr << endl;
    cout << "prt 주소에 들어있는 값 : " << *ptr << endl << endl;

    int* ptr1 = NULL;   //포인터 초기화
    int* ptr2 = nullptr;//c++11 이후 nullptr 사용
    cout << "ptr1 주소 : " << ptr1 << endl;
    cout << "ptr2 주소 : " << ptr2 << endl;
    */

    /*
    int val1 = 5;
    float val2 = 10.5;

    int* ptr1 = &val1;
    float* ptr2 = &val2;

    cout << ptr1 << endl;
    cout << ptr1 + 1 << endl;
    cout << *ptr1 << endl;
    cout << ptr2 << endl;
    cout << ptr2 + 1 << endl;
    cout << *ptr2 << endl;
    */

    int A[3] = { 1,2,3 };
    int (&A_Ref)[3] = A;

    cout << A_Ref[2] << endl;

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
