// CoffeeTest.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
//동전을 넣은 상태를 bool 형으로 나타내고, 초기값은 정해졌다고 가정
//물과 커피믹스는 정수형으로 하고, 초기값은 정해졌다고 가정
//코인을 넣으면 커피 출력 시퀀스로, 아닐 시에는 ‘아무것도 안함’ 출력
//물의 양이 100(ml)보다 크거나 같고, 커피믹스가 10(ml)크거나 같으면‘커피’ 출력
//둘 중 하나라도 모자라면, 모자란 것(물 OR 커피믹스)을 각각 출력

//동전은 true로 하고,
//초기값1 : 물500, 커피믹스 50
//초기값2 : 물500, 커피믹스 5
//초기값3 : 물50, 커피믹스 50
//초기값4 : 물50, 커피믹스 5

#include <iostream>

using namespace std;

bool IsCoin();

int main()
{
    int water = 500, cmix = 50;
    //int water = 500, cmix = 5;
    //int water = 50, cmix = 50;
    //int water = 50, cmix = 5;

    if (IsCoin())
    {
        if (water >= 100 && cmix >= 10)
        {
            int i = 0;
            while (i < water / 100)
            {
                i++;
            }
            cout << i << " 잔 커피 출력" << endl;
        }
        else if (water < 100 && cmix >= 10)
        {
            cout << "물 부족" << endl;
        }
        else if (water >= 100 && cmix < 10)
        {
            cout << "커피믹스 부족" << endl;
        }
        else
        {
            cout << "물 커피믹스 둘다 부족" << endl;
        }
    }
    else
    {
        cout << "아무것도 안함" << endl;
    }
}

bool IsCoin()
{
    return true;
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴
