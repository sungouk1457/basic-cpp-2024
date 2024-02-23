#include<iostream>
using namespace std;

namespace CAR_CONST
{
	enum   //열거형
	{
		ID_LEN = 20,
		MAX_SPD = 200,
		FUEL_STEP = 2,
		ACC_STEP = 10,
		BRK_STEP = 10
	};
}

struct Car
{	//=====멤버변수======
	char gamerID[CAR_CONST::ID_LEN];
	int fuelGauge;
	int curSpeed;

	//=====멤버함수======
	void ShowCarstate(); //상태정보 출력
	void Accel(); //엑셀.속도증가
	void Break(); //브레이크,속도감소
};

void Car::ShowCarstate()
	{
		cout << "소유자ID : " << gamerID << endl;
		cout << "연료량 : " << fuelGauge << "%" << endl;
		cout << "현재속도 : " << curSpeed << "km/s" << endl << endl;
	}

void Car::Accel()
{
	if (fuelGauge <= 0)
		return;
	else
		fuelGauge -= CAR_CONST::FUEL_STEP;

	if ((curSpeed + CAR_CONST::ACC_STEP) >= CAR_CONST::MAX_SPD)
	{
		curSpeed = CAR_CONST::MAX_SPD;
		return;
	}
		curSpeed += CAR_CONST::ACC_STEP;
	}

void Car:: Break()
{
	if (curSpeed < CAR_CONST::BRK_STEP)
	{
		curSpeed = 0;
		return;
	}

	curSpeed -= CAR_CONST::BRK_STEP;
	}

int main()
{
	Car run99 = { "run99",100,0 };
	run99.Accel();
	run99.ShowCarstate();
	run99.Break();
	run99.ShowCarstate();
	return 0;
}

//new라는 키워드를 쓰면 hep영역에 저장할수 있는 공간을 생성
//delete라는 키워드를 쓰면 hep영영게 저장된 값을 가져온다