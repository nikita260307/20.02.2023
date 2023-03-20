#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <time.h>
#include <cmath>
#include <iomanip>


int ball = 0;
int* pbal = &ball;


using namespace std;
void end();
void hisotry_1();
void hisotry_2();
void hisotry_3();
void hisotry_4(); 
void hisotry_5();

void livep1();
void livep2();
void livep3();
void livep4();
void livep5();

void relig1();
void relig2();
void relig3();
void relig4();
void relig5();

void sport1();
void sport2();
void sport3();
void sport4();
void sport5();

void music1();
void music2();
void music3();
void music4();
void music5();

void start();

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "ru");

	start();
	return 0; 
}

void start() {
	cout << "Выберите категорию: \n1 - Музыка \n2 - Спорт \n3 - Религия \n4 - Живопись \n5 - История" << endl;
	int a, b, c;
	cin >> a;
	switch (a) {
	case 1:
		music1();
		break;
	case 2:
		sport1();
		break;
	case 3:
		relig1();
		break;
	case 4:
		livep1();
		break;
	case 5:
		history1();
		break;

	}

}
void end(){
	cout << "вы ответили верно на " << *pbal << " из 5\nваш бал по данной категорий: " << *pball;

	*pbal = 0;
}
