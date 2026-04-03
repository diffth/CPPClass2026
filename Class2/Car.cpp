#include "Car.h"

//생성자
Car::Car()
{
	cout << " Car class default 생성자 호출" << endl;
}

//소멸자
Car::~Car()
{
	cout << " Car class 소멸자 호출" << endl;
}

//Break() 함수정의
void Car::Break()
{
	cout << " Car class Break() 함수 호출" << endl;
}

//Run() 함수정의
void Car::Run()
{
	cout << " Car class Run() 함수 호출" << endl;
}

int Car::GetMax()
{
	return 0;
}

void Car::GasFull(int gas)
{
	cout << " Car class GasFull() 함수 호출: " << gas << endl;
}
