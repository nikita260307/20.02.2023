#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <time.h>
#include <cmath>
//===============
void history_1() {
	cout << "���������: �������\n"
	cout << "1 ������: ����� �������� ������ ������� �����?\n";
	cout << "�������� ������: \n1 - 1909\n2 - 1910\n3 - 1911\n4 - 1941" << endl;
	int a;
	cin >> a;
	switch (a) {
	case 1:
		cout << "�� �������� �������, �� � �����";
		history_2();
		break;
	case 2:
		cout << "�� �������� �����, ��� �������";
		*pbal += 1;
		history_2();
		break;
	case 3:
		cout << "�� �������� �������, �� � �����";
		history_2();
		break;
	case 4:
		cout << "�� �������� �������, �� � �����";
		history_2();
		break;
	}
}
void history_2() {
	cout << "���������: �������\n"
	cout << "2 ������: ��� �������� ������ ����������� ����������� ������?\n";
	cout << "�������� ������: \n1 - �����\n2 - ������\n3 - ���������\n4 - �����" << endl;
	int a;
	cin >> a;
	switch (a) {
	case 1:
		cout << "�� �������� �������, �� � �����";
		history_3();
		break;
	case 2:
		cout << "�� �������� �������, �� � �����";
		history_3();
		break;
	case 3:
		cout << "�� �������� �����, ��� �������";
		*pbal += 1;
		history_3();
		break;
	case 4:
		cout << "�� �������� �������, �� � �����";
		history_3();
		break;
	}
}
void history_3() {
	cout << "���������: �������\n"
	cout << "3 ������: � ����� ������ ������ �������?\n";
	cout << "�������� ������: \n1 - �����\n2 - ����������\n3 - �������������\n4 - ��" << endl;
	int a;
	cin >> a;
	switch (a) {
	case 1:
		cout << "�� �������� �������, �� � �����";
		history_4();
		break;
	case 2:
		cout << "�� �������� �������, �� � �����";
		history_4();
		break;
	case 3:
		cout << "�� �������� �����, ��� �������";
		*pbal += 1;
		history_4();
		break;
	case 4:
		cout << "�� �������� �������, �� � �����";
		history_4();
		break;
	}
}
void history_4() {
	cout << "���������: �������\n"
	cout << "4 ������: ���� ������ ������� � ����� ������?\n";
	cout << "�������� ������: \n1 - ������\n2 - ���\n3 - �����\n4 - ��� ����� ���� ������" << endl;
	int a;
	cin >> a;
	switch (a) {
	case 1:
		cout << "�� �������� �������, �� � �����";
		history_5();
		break;
	case 2:
		cout << "�� �������� �����, ��� �������";
		*pbal += 1;
		history_5();
		break;
	case 3:
		cout << "�� �������� �������, �� � �����";
		history_5();
		break;
	case 4:
		cout << "�� �������� �������, �� � �����";
		history_5();
		break;
	}
}

void history_5() {
	cout << "���������: �������\n"
	cout << "5 ������: ��� ��� ������ ���������, ��������� �� ����?\n";
	cout << "�������� ������: \n1 - ����� �����\n2 - ���� �������\n3 - �. �. �����\n4 - ��� ���������" << endl;
	int a;
	cin >> a;
	switch (a) {
	case 1:
		cout << "�� �������� �������, �� � �����";
		break;
	case 2:
		cout << "�� �������� �������, �� � �����";
		break;
	case 3:
		cout << "�� �������� �������, �� � �����";
		break;
	case 4:
		cout << "�� �������� �����, ��� �������";
		*pbal += 1;
		break;
	}
}

//===========================================
void livep() {
	livep1();
}

void livep1(){
	cout << "���������: ��������\n"
	cout << "1 ������: ����������������� ���� ������ �������� �������� ���������� �� ������� ��������� ������ �������� � ���������?\n";
	cout << "�������� ������: \n1 - ����� ����������\n2 - ������� ���������\n3 - �. �. ������\n4 - ����� ���������" << endl;
	int a;
	cin >> a;
	switch (a) {
	case 1:
		cout << "�� �������� �������, �� � �����";
		livep2();
		break;
	case 2:
		cout << "�� �������� �������, �� � �����";
		livep2();
		break;
	case 3:
		cout << "�� �������� �������, �� � �����";
		livep2();
		break;
	case 4:
		cout << "�� �������� �����, ��� �������";
		*pbal += 1;
		livep2();
		break;
	}
}
void livep2(){
	cout << "���������: ��������\n"
	cout << "2 ������: ���� ��������� ���� ����� �� ����� �� ����� �������������� ����� ������, �������� ������� ���������?\n";
	cout << "�������� ������: \n1 - ���� ����\n2 - ��������� �������\n3 - ��������\n4 - ���� �����" << endl;
	int a;
	cin >> a;
	switch (a) {
	case 1:
		*pbal += 1;
		cout << "�� �������� �����, ��� �������";
		livep3();
		break;
	case 2:
		cout << "�� �������� �������, �� � �����";
		livep3();
		break;
	case 3:
		cout << "�� �������� �������, �� � �����";
		livep3();
		break;
	case 4:
		cout << "�� �������� �������, �� � �����";
		livep3();
		break;
	}

}
void livep3(){
	cout << "���������: ��������\n"
	cout << "3 ������: ������� ��� ������ �������� ������� ��� ����� ���������� �������� ���������?\n";
	cout << "�������� ������: \n1 - ����� 20 ���\n2 - �����\n3 - ����� 3 ���\n4 - ����� 7 ���" << endl;
	int a;
	cin >> a;
	switch (a) {
	case 1:
		cout << "�� �������� �����, ��� �������";
		*pbal += 1;
		livep4();
		break;
	case 2:
		cout << "�� �������� �������, �� � �����";
		livep4();
		break;
	case 3:
	cout << "�� �������� �������, �� � �����";
		livep4();
		break;
	case 4:
		cout << "�� �������� �������, �� � �����";
		livep4();
		break;
	}
}
void livep4(){
	cout << "���������: ��������\n"
	cout << "4 ������: �� ������ ������ ������ ���������� �������� ������� ������� ������ �������?\n";
	cout << "�������� ������: \n1 - ��������\n2 - ������\n3 - ���\n4 - �����" << endl;
	int a;
	cin >> a;
	switch (a) {
	case 1:
		cout << "�� �������� �������, �� � �����";
		livep5();
		break;
	case 2:
		*pbal += 1;
		cout << "�� �������� �����, ��� �������";
		livep5();
		break;
	case 3:
		cout << "�� �������� �������, �� � �����";
		livep5();
		break;
	case 4:
		cout << "�� �������� �������, �� � �����";
		livep5();
		break;
	}
}
void livep5(){
	cout << "���������: ��������\n"
	cout << "5 ������: ������� ��������� ���� �������� ������ ��������� �� ������ ������� ���� ���������� � 1832 ����. � ����� ������ ��� ���������?\n";
	cout << "�������� ������: \n1 - ������\n2 - �����\n3 - ���\n4 - �����" << endl;
	int a;
	cin >> a;
	switch (a) {
	case 1:
		cout << "�� �������� �������, �� � �����";
		break;
	case 2:
		cout << "�� �������� �������, �� � �����";
		break;
	case 3:
		cout << "�� �������� �������, �� � �����";
		break;
	case 4:
		*pbal += 1;
		cout << "�� �������� �����, ��� �������";
		break;
	}
}
//===========================================
void relig() {
	relig1();
}

void relig1(){
	cout << "���������: �������\n"
	cout << "1 ������: \n";
	cout << "" << endl;
	int a;
	cin >> a;
	switch (a) {
	case 1:
		relig2();
		break;
	case 2:
		relig2();
		break;
	case 3:
		relig2();
		break;
	case 4:
		relig2();
		break;
	}
}
void relig2() {
	cout << "���������: �������\n"
	cout << "2 ������: \n";
	cout << "" << endl;
	int a;
	cin >> a;
	switch (a) {
	case 1:
		relig3();
		break;
	case 2:
		relig3();
		break;
	case 3:
		relig3();
		break;
	case 4:
		relig3();
		break;
	}
}
void relig3() {
	cout << "���������: �������\n"
	cout << "3 ������: \n";
	cout << "" << endl;
	int a;
	cin >> a;
	switch (a) {
	case 1:
		relig4();
		break;
	case 2:
		relig4();
		break;
	case 3:
		relig4();
		break;
	case 4:
		relig4();
		break;
	}

}
void relig4(){
	cout << "���������: �������\n"
	cout << "4 ������: \n";
	cout << "" << endl;
	int a;
	cin >> a;
	switch (a) {
	case 1:
		relig5();
		break;
	case 2:
		relig5();
		break;
	case 3:
		relig5();
		break;
	case 4:
		relig5();
		break;
	}
}
void relig5(){
	cout << "���������: �������\n"
	cout << "5 ������: \n";
	cout << "" << endl;
	int a;
	cin >> a;
	switch (a) {
	case 1:

		break;
	case 2:

		break;
	case 3:

		break;
	case 4:

		break;
	}
}
//===========================================

void sport() {
	sport1();
}

void sport1() {
	cout << "���������: �����\n"
	cout << "1 ������: \n";
	cout << "" << endl;
	int a;
	cin >> a;
	switch (a) {
	case 1:
		sport2();
		break;
	case 2:
		sport2();
		break;
	case 3:
		sport2();
		break;
	case 4:
		sport2();
		break;
	}
}
void sport2() {
	cout << "���������: �����\n"
	cout << "2 ������: \n";
	cout << "" << endl;
	int a;
	cin >> a;
	switch (a) {
	case 1:
		sport3();
		break;
	case 2:
		sport3();
		break;
	case 3:
		sport3();
		break;
	case 4:
		sport3();
		break;
	}
}
void sport3() {
	cout << "���������: �����\n"
	cout << "3 ������: \n";
	cout << "" << endl;
	int a;
	cin >> a;
	switch (a) {
	case 1:
		sport4();
		break;
	case 2:
		sport4();
		break;
	case 3:
		sport4();
		break;
	case 4:
		sport4();
		break;
	}
}
void sport4() {
	cout << "���������: �����\n"
	cout << "4 ������: \n";
	cout << "" << endl;
	int a;
	cin >> a;
	switch (a) {
	case 1:
		sport5();
		break;
	case 2:
		sport5();
		break;
	case 3:
		sport5();
		break;
	case 4:
		sport5();
		break;
	}
}
void sport5() {
	cout << "���������: �����\n"
	cout << "5 ������: \n";
	cout << "" << endl;
	int a;
	cin >> a;
	switch (a) {
	case 1:

		break;
	case 2:

		break;
	case 3:

		break;
	case 4:

		break;
	}
}
//===========================================
void music() {
	music1();
}

void music1() {
	cout << "���������: ������\n"
	cout << "1 ������: \n";
	cout << "" << endl;
	int a;
	cin >> a;
	switch (a) {
	case 1:
		music2();
		break;
	case 2:
		music2();
		break;
	case 3:
		music2();
		break;
	case 4:
		music2();
		break;
	}
}
void music2() {
	cout << "���������: ������\n"
	cout << "2 ������: \n";
	cout << "" << endl;
	int a;
	cin >> a;
	switch (a) {
	case 1:
		music3();
		break;
	case 2:
		music3();
		break;
	case 3:
		music3();
		break;
	case 4:
		music3();
		break;
	}
}
void music3() {
	cout << "���������: ������\n"
	cout << "3 ������: \n";
	cout << "" << endl;
	int a;
	cin >> a;
	switch (a) {
	case 1:
		music4();
		break;
	case 2:
		music4();
		break;
	case 3:
		music4();
		break;
	case 4:
		music4();
		break;
	}
}
void music4() {
	cout << "���������: ������\n"
	cout << "4 ������: \n";
	cout << "" << endl;
	int a;
	cin >> a;
	switch (a) {
	case 1:
		music5();
		break;
	case 2:
		music5();
		break;
	case 3:
		music5();
		break;
	case 4:
		music5();
		break;
	}
}
void music5() {
	cout << "���������: ������\n"
	cout << "5 ������: \n";
	cout << "" << endl;
	int a;
	cin >> a;
	switch (a) {
	case 1:

		cout << "��������� ������ �������\n";
		end();
		break;
	case 2:

		cout << "��������� ������ �������\n";
		end();
		break;
	case 3:

		cout << "��������� ������ �������\n";
		end();
		break;
	case 4:

		cout << "��������� ������ �������\n";
		end();
		break;
	}
}