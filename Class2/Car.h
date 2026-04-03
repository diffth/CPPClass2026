#pragma once
#include <string>
#include <iostream>

using namespace std;

class Car
{
public:
	//멤버변수 선언, 초기화
	string name = "SONATA"; //자동차 이름
	float Weight = 1500;	//자동차 무게
	float Gas = 100;		//연료량
	int Max = 4;			//탑승인원수

public:
	Car();	//생성자 선언
	Car(float Gas, int Max);
	~Car();	//소멸자 선언

	//멤버함수 선언
	void Break();
	void Run();
	int GetMax();
	void GasFull(int);
};

