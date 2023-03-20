#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <time.h>
#include <cmath>
//===============
void history_1() {
	cout << "категория: История\n"
	cout << "1 вопрос: Когда началась Первая Мировая война?\n";
	cout << "Варианты ответа: \n1 - 1909\n2 - 1910\n3 - 1911\n4 - 1941" << endl;
	int a;
	cin >> a;
	switch (a) {
	case 1:
		cout << "Вы ответили неверно, ну и ладно";
		history_2();
		break;
	case 2:
		cout << "Вы ответили верно, так держать";
		*pbal += 1;
		history_2();
		break;
	case 3:
		cout << "Вы ответили неверно, ну и ладно";
		history_2();
		break;
	case 4:
		cout << "Вы ответили неверно, ну и ладно";
		history_2();
		break;
	}
}
void history_2() {
	cout << "категория: История\n"
	cout << "2 вопрос: Кто является первым президентом Соединенных Штатов?\n";
	cout << "Варианты ответа: \n1 - Обама\n2 - Байден\n3 - Вашингтон\n4 - Путин" << endl;
	int a;
	cin >> a;
	switch (a) {
	case 1:
		cout << "Вы ответили неверно, ну и ладно";
		history_3();
		break;
	case 2:
		cout << "Вы ответили неверно, ну и ладно";
		history_3();
		break;
	case 3:
		cout << "Вы ответили верно, так держать";
		*pbal += 1;
		history_3();
		break;
	case 4:
		cout << "Вы ответили неверно, ну и ладно";
		history_3();
		break;
	}
}
void history_3() {
	cout << "категория: История\n"
	cout << "3 вопрос: В каком океане утонул Титаник?\n";
	cout << "Варианты ответа: \n1 - Тихий\n2 - Балтийский\n3 - Атлантический\n4 - Да" << endl;
	int a;
	cin >> a;
	switch (a) {
	case 1:
		cout << "Вы ответили неверно, ну и ладно";
		history_4();
		break;
	case 2:
		cout << "Вы ответили неверно, ну и ладно";
		history_4();
		break;
	case 3:
		cout << "Вы ответили верно, так держать";
		*pbal += 1;
		history_4();
		break;
	case 4:
		cout << "Вы ответили неверно, ну и ладно";
		history_4();
		break;
	}
}
void history_4() {
	cout << "категория: История\n"
	cout << "4 вопрос: Юлий Цезарь родился в каком городе?\n";
	cout << "Варианты ответа: \n1 - Москва\n2 - Рим\n3 - Афины\n4 - кто такой Юлий Цезарь" << endl;
	int a;
	cin >> a;
	switch (a) {
	case 1:
		cout << "Вы ответили неверно, ну и ладно";
		history_5();
		break;
	case 2:
		cout << "Вы ответили верно, так держать";
		*pbal += 1;
		history_5();
		break;
	case 3:
		cout << "Вы ответили неверно, ну и ладно";
		history_5();
		break;
	case 4:
		cout << "Вы ответили неверно, ну и ладно";
		history_5();
		break;
	}
}

void history_5() {
	cout << "категория: История\n"
	cout << "5 вопрос: Кто был первым человеком, ступившим на Луну?\n";
	cout << "Варианты ответа: \n1 - Барак Обама\n2 - Юрий Гагарин\n3 - В. В. Путин\n4 - Нил Армстронг" << endl;
	int a;
	cin >> a;
	switch (a) {
	case 1:
		cout << "Вы ответили неверно, ну и ладно";
		break;
	case 2:
		cout << "Вы ответили неверно, ну и ладно";
		break;
	case 3:
		cout << "Вы ответили неверно, ну и ладно";
		break;
	case 4:
		cout << "Вы ответили верно, так держать";
		*pbal += 1;
		break;
	}
}

//===========================================
void livep() {
	livep1();
}

void livep1(){
	cout << "категория: Живопись\n"
	cout << "1 вопрос: Одиннадцатилетняя дочь какого русского мецената изображена на картине Валентина Серова «Девочка с персиками»?\n";
	cout << "Варианты ответа: \n1 - Павла Третьякова\n2 - Алексея Бахрушина\n3 - В. В. Путина\n4 - Саввы Мамонтова" << endl;
	int a;
	cin >> a;
	switch (a) {
	case 1:
		cout << "Вы ответили неверно, ну и ладно";
		livep2();
		break;
	case 2:
		cout << "Вы ответили неверно, ну и ладно";
		livep2();
		break;
	case 3:
		cout << "Вы ответили неверно, ну и ладно";
		livep2();
		break;
	case 4:
		cout << "Вы ответили верно, так держать";
		*pbal += 1;
		livep2();
		break;
	}
}
void livep2(){
	cout << "категория: Живопись\n"
	cout << "2 вопрос: Кого изобразил Илья Репин на одной из самых жизнерадостных своих картин, название которой «Стрекоза»?\n";
	cout << "Варианты ответа: \n1 - свою дочь\n2 - рандомную девочку\n3 - мальчика\n4 - дочь слуги" << endl;
	int a;
	cin >> a;
	switch (a) {
	case 1:
		*pbal += 1;
		cout << "Вы ответили верно, так держать";
		livep3();
		break;
	case 2:
		cout << "Вы ответили неверно, ну и ладно";
		livep3();
		break;
	case 3:
		cout << "Вы ответили неверно, ну и ладно";
		livep3();
		break;
	case 4:
		cout << "Вы ответили неверно, ну и ладно";
		livep3();
		break;
	}

}
void livep3(){
	cout << "категория: Живопись\n"
	cout << "3 вопрос: Сколько лет Виктор Васнецов работал над своей знаменитой картиной «Богатыри»?\n";
	cout << "Варианты ответа: \n1 - около 20 лет\n2 - месяц\n3 - около 3 лет\n4 - около 7 лет" << endl;
	int a;
	cin >> a;
	switch (a) {
	case 1:
		cout << "Вы ответили верно, так держать";
		*pbal += 1;
		livep4();
		break;
	case 2:
		cout << "Вы ответили неверно, ну и ладно";
		livep4();
		break;
	case 3:
	cout << "Вы ответили неверно, ну и ладно";
		livep4();
		break;
	case 4:
		cout << "Вы ответили неверно, ну и ладно";
		livep4();
		break;
	}
}
void livep4(){
	cout << "категория: Живопись\n"
	cout << "4 вопрос: На улицах какого города происходит действие картины Василия Перова «Тройка»?\n";
	cout << "Варианты ответа: \n1 - Новгород\n2 - Москва\n3 - Спб\n4 - париж" << endl;
	int a;
	cin >> a;
	switch (a) {
	case 1:
		cout << "Вы ответили неверно, ну и ладно";
		livep5();
		break;
	case 2:
		*pbal += 1;
		cout << "Вы ответили верно, так держать";
		livep5();
		break;
	case 3:
		cout << "Вы ответили неверно, ну и ладно";
		livep5();
		break;
	case 4:
		cout << "Вы ответили неверно, ну и ладно";
		livep5();
		break;
	}
}
void livep5(){
	cout << "категория: Живопись\n"
	cout << "5 вопрос: Картина «Всадница» была написана Карлом Брюлловым по заказу графини Юлии Самойловой в 1832 году. В каком городе это произошло?\n";
	cout << "Варианты ответа: \n1 - Москва\n2 - Париж\n3 - Спб\n4 - Милан" << endl;
	int a;
	cin >> a;
	switch (a) {
	case 1:
		cout << "Вы ответили неверно, ну и ладно";
		break;
	case 2:
		cout << "Вы ответили неверно, ну и ладно";
		break;
	case 3:
		cout << "Вы ответили неверно, ну и ладно";
		break;
	case 4:
		*pbal += 1;
		cout << "Вы ответили верно, так держать";
		break;
	}
}
//===========================================
void relig() {
	relig1();
}

void relig1(){
	cout << "категория: Религия\n"
	cout << "1 вопрос: \n";
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
	cout << "категория: Религия\n"
	cout << "2 вопрос: \n";
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
	cout << "категория: Религия\n"
	cout << "3 вопрос: \n";
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
	cout << "категория: Религия\n"
	cout << "4 вопрос: \n";
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
	cout << "категория: Религия\n"
	cout << "5 вопрос: \n";
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
	cout << "категория: Спорт\n"
	cout << "1 вопрос: \n";
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
	cout << "категория: Спорт\n"
	cout << "2 вопрос: \n";
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
	cout << "категория: Спорт\n"
	cout << "3 вопрос: \n";
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
	cout << "категория: Спорт\n"
	cout << "4 вопрос: \n";
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
	cout << "категория: Спорт\n"
	cout << "5 вопрос: \n";
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
	cout << "категория: Музыка\n"
	cout << "1 вопрос: \n";
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
	cout << "категория: Музыка\n"
	cout << "2 вопрос: \n";
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
	cout << "категория: Музыка\n"
	cout << "3 вопрос: \n";
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
	cout << "категория: Музыка\n"
	cout << "4 вопрос: \n";
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
	cout << "категория: Музыка\n"
	cout << "5 вопрос: \n";
	cout << "" << endl;
	int a;
	cin >> a;
	switch (a) {
	case 1:

		cout << "категория Музыки окочена\n";
		end();
		break;
	case 2:

		cout << "категория Музыки окочена\n";
		end();
		break;
	case 3:

		cout << "категория Музыки окочена\n";
		end();
		break;
	case 4:

		cout << "категория Музыки окочена\n";
		end();
		break;
	}
}