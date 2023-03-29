#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <time.h>
#include <cmath>
//===============
void history_1() {
	cout << "êàòåãîðèÿ: Èñòîðèÿ\n"
	cout << "1 âîïðîñ: Êîãäà íà÷àëàñü Ïåðâàÿ Ìèðîâàÿ âîéíà?\n";
	cout << "Âàðèàíòû îòâåòà: \n1 - 1909\n2 - 1910\n3 - 1911\n4 - 1941" << endl;
	int a;
	cin >> a;
	switch (a) {
	case 1:
		cout << "Âû îòâåòèëè íåâåðíî, íó è ëàäíî";
		history_2();
		break;
	case 2:
		cout << "Âû îòâåòèëè âåðíî, òàê äåðæàòü";
		*pbal += 1;
		history_2();
		break;
	case 3:
		cout << "Âû îòâåòèëè íåâåðíî, íó è ëàäíî";
		history_2();
		break;
	case 4:
		cout << "Âû îòâåòèëè íåâåðíî, íó è ëàäíî";
		history_2();
		break;
	
	}
}
void history_2() {
	cout << "êàòåãîðèÿ: Èñòîðèÿ\n"
	cout << "2 âîïðîñ: Êòî ÿâëÿåòñÿ ïåðâûì ïðåçèäåíòîì Ñîåäèíåííûõ Øòàòîâ?\n";
	cout << "Âàðèàíòû îòâåòà: \n1 - Îáàìà\n2 - Áàéäåí\n3 - Âàøèíãòîí\n4 - Ïóòèí" << endl;
	int a;
	cin >> a;
	switch (a) {
	case 1:
		cout << "Âû îòâåòèëè íåâåðíî, íó è ëàäíî";
		history_3();
		break;
	case 2:
		cout << "Âû îòâåòèëè íåâåðíî, íó è ëàäíî";
		history_3();
		break;
	case 3:
		cout << "Âû îòâåòèëè âåðíî, òàê äåðæàòü";
		*pbal += 1;
		history_3();
		break;
	case 4:
		cout << "Âû îòâåòèëè íåâåðíî, íó è ëàäíî";
		history_3();
		break;
	}
}
void history_3() {
	cout << "êàòåãîðèÿ: Èñòîðèÿ\n"
	cout << "3 âîïðîñ: Â êàêîì îêåàíå óòîíóë Òèòàíèê?\n";
	cout << "Âàðèàíòû îòâåòà: \n1 - Òèõèé\n2 - Áàëòèéñêèé\n3 - Àòëàíòè÷åñêèé\n4 - Äà" << endl;
	int a;
	cin >> a;
	switch (a) {
	case 1:
		cout << "Âû îòâåòèëè íåâåðíî, íó è ëàäíî";
		history_4();
		break;
	case 2:
		cout << "Âû îòâåòèëè íåâåðíî, íó è ëàäíî";
		history_4();
		break;
	case 3:
		cout << "Âû îòâåòèëè âåðíî, òàê äåðæàòü";
		*pbal += 1;
		history_4();
		break;
	case 4:
		cout << "Âû îòâåòèëè íåâåðíî, íó è ëàäíî";
		history_4();
		break;
	}
}
void history_4() {
	cout << "êàòåãîðèÿ: Èñòîðèÿ\n"
	cout << "4 âîïðîñ: Þëèé Öåçàðü ðîäèëñÿ â êàêîì ãîðîäå?\n";
	cout << "Âàðèàíòû îòâåòà: \n1 - Ìîñêâà\n2 - Ðèì\n3 - Àôèíû\n4 - êòî òàêîé Þëèé Öåçàðü" << endl;
	int a;
	cin >> a;
	switch (a) {
	case 1:
		cout << "Âû îòâåòèëè íåâåðíî, íó è ëàäíî";
		history_5();
		break;
	case 2:
		cout << "Âû îòâåòèëè âåðíî, òàê äåðæàòü";
		*pbal += 1;
		history_5();
		break;
	case 3:
		cout << "Âû îòâåòèëè íåâåðíî, íó è ëàäíî";
		history_5();
		break;
	case 4:
		cout << "Âû îòâåòèëè íåâåðíî, íó è ëàäíî";
		history_5();
		break;
	}
}

void history_5() {
	cout << "êàòåãîðèÿ: Èñòîðèÿ\n"
	cout << "5 âîïðîñ: Êòî áûë ïåðâûì ÷åëîâåêîì, ñòóïèâøèì íà Ëóíó?\n";
	cout << "Âàðèàíòû îòâåòà: \n1 - Áàðàê Îáàìà\n2 - Þðèé Ãàãàðèí\n3 - Â. Â. Ïóòèí\n4 - Íèë Àðìñòðîíã" << endl;
	int a;
	cin >> a;
	switch (a) {
	case 1:
		cout << "Âû îòâåòèëè íåâåðíî, íó è ëàäíî";
		endv();
		break;
	case 2:
		cout << "Âû îòâåòèëè íåâåðíî, íó è ëàäíî";
		endv();
		break;
	case 3:
		cout << "Âû îòâåòèëè íåâåðíî, íó è ëàäíî";
		endv();
		break;
	case 4:
		cout << "Âû îòâåòèëè âåðíî, òàê äåðæàòü";
		*pbal += 1;
		endv();
		break;
	}
}

//===========================================
void livep() {
	livep1();
}

void livep1(){
	cout << "êàòåãîðèÿ: Æèâîïèñü\n"
	cout << "1 âîïðîñ: Îäèííàäöàòèëåòíÿÿ äî÷ü êàêîãî ðóññêîãî ìåöåíàòà èçîáðàæåíà íà êàðòèíå Âàëåíòèíà Ñåðîâà «Äåâî÷êà ñ ïåðñèêàìè»?\n";
	cout << "Âàðèàíòû îòâåòà: \n1 - Ïàâëà Òðåòüÿêîâà\n2 - Àëåêñåÿ Áàõðóøèíà\n3 - Â. Â. Ïóòèíà\n4 - Ñàââû Ìàìîíòîâà" << endl;
	int a;
	cin >> a;
	switch (a) {
	case 1:
		cout << "Âû îòâåòèëè íåâåðíî, íó è ëàäíî";
		livep2();
		break;
	case 2:
		cout << "Âû îòâåòèëè íåâåðíî, íó è ëàäíî";
		livep2();
		break;
	case 3:
		cout << "Âû îòâåòèëè íåâåðíî, íó è ëàäíî";
		livep2();
		break;
	case 4:
		cout << "Âû îòâåòèëè âåðíî, òàê äåðæàòü";
		*pbal += 1;
		livep2();
		break;
	}
}
void livep2(){
	cout << "êàòåãîðèÿ: Æèâîïèñü\n"
	cout << "2 âîïðîñ: Êîãî èçîáðàçèë Èëüÿ Ðåïèí íà îäíîé èç ñàìûõ æèçíåðàäîñòíûõ ñâîèõ êàðòèí, íàçâàíèå êîòîðîé «Ñòðåêîçà»?\n";
	cout << "Âàðèàíòû îòâåòà: \n1 - ñâîþ äî÷ü\n2 - ðàíäîìíóþ äåâî÷êó\n3 - ìàëü÷èêà\n4 - äî÷ü ñëóãè" << endl;
	int a;
	cin >> a;
	switch (a) {
	case 1:
		*pbal += 1;
		cout << "Âû îòâåòèëè âåðíî, òàê äåðæàòü";
		livep3();
		break;
	case 2:
		cout << "Âû îòâåòèëè íåâåðíî, íó è ëàäíî";
		livep3();
		break;
	case 3:
		cout << "Âû îòâåòèëè íåâåðíî, íó è ëàäíî";
		livep3();
		break;
	case 4:
		cout << "Âû îòâåòèëè íåâåðíî, íó è ëàäíî";
		livep3();
		break;
	}

}
void livep3(){
	cout << "êàòåãîðèÿ: Æèâîïèñü\n"
	cout << "3 âîïðîñ: Ñêîëüêî ëåò Âèêòîð Âàñíåöîâ ðàáîòàë íàä ñâîåé çíàìåíèòîé êàðòèíîé «Áîãàòûðè»?\n";
	cout << "Âàðèàíòû îòâåòà: \n1 - îêîëî 20 ëåò\n2 - ìåñÿö\n3 - îêîëî 3 ëåò\n4 - îêîëî 7 ëåò" << endl;
	int a;
	cin >> a;
	switch (a) {
	case 1:
		cout << "Âû îòâåòèëè âåðíî, òàê äåðæàòü";
		*pbal += 1;
		livep4();
		break;
	case 2:
		cout << "Âû îòâåòèëè íåâåðíî, íó è ëàäíî";
		livep4();
		break;
	case 3:
	cout << "Âû îòâåòèëè íåâåðíî, íó è ëàäíî";
		livep4();
		break;
	case 4:
		cout << "Âû îòâåòèëè íåâåðíî, íó è ëàäíî";
		livep4();
		break;
	}
}
void livep4(){
	cout << "êàòåãîðèÿ: Æèâîïèñü\n"
	cout << "4 âîïðîñ: Íà óëèöàõ êàêîãî ãîðîäà ïðîèñõîäèò äåéñòâèå êàðòèíû Âàñèëèÿ Ïåðîâà «Òðîéêà»?\n";
	cout << "Âàðèàíòû îòâåòà: \n1 - Íîâãîðîä\n2 - Ìîñêâà\n3 - Ñïá\n4 - ïàðèæ" << endl;
	int a;
	cin >> a;
	switch (a) {
	case 1:
		cout << "Âû îòâåòèëè íåâåðíî, íó è ëàäíî";
		livep5();
		break;
	case 2:
		*pbal += 1;
		cout << "Âû îòâåòèëè âåðíî, òàê äåðæàòü";
		livep5();
		break;
	case 3:
		cout << "Âû îòâåòèëè íåâåðíî, íó è ëàäíî";
		livep5();
		break;
	case 4:
		cout << "Âû îòâåòèëè íåâåðíî, íó è ëàäíî";
		livep5();
		break;
	}
}
void livep5(){
	cout << "êàòåãîðèÿ: Æèâîïèñü\n"
	cout << "5 âîïðîñ: Êàðòèíà «Âñàäíèöà» áûëà íàïèñàíà Êàðëîì Áðþëëîâûì ïî çàêàçó ãðàôèíè Þëèè Ñàìîéëîâîé â 1832 ãîäó. Â êàêîì ãîðîäå ýòî ïðîèçîøëî?\n";
	cout << "Âàðèàíòû îòâåòà: \n1 - Ìîñêâà\n2 - Ïàðèæ\n3 - Ñïá\n4 - Ìèëàí\n" << endl;
	int a;
	cin >> a;
	switch (a) {
	case 1:
		cout << "Âû îòâåòèëè íåâåðíî, íó è ëàäíî";
		endv();
		break;
	case 2:
		cout << "Âû îòâåòèëè íåâåðíî, íó è ëàäíî";
		endv();
		break;
	case 3:
		cout << "Âû îòâåòèëè íåâåðíî, íó è ëàäíî";
		endv();
		break;
	case 4:
		*pbal += 1;
		cout << "Âû îòâåòèëè âåðíî, òàê äåðæàòü";
		endv();
		break;

	}
}
//===========================================
void relig() {
	relig1();
}

void relig1(){
	cout << "êàòåãîðèÿ: Ðåëèãèÿ\n"
	cout << "1 âîïðîñ: \n";
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
	cout << "êàòåãîðèÿ: Ðåëèãèÿ\n"
	cout << "2 âîïðîñ: \n";
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
	cout << "êàòåãîðèÿ: Ðåëèãèÿ\n"
	cout << "3 âîïðîñ: \n";
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
	cout << "êàòåãîðèÿ: Ðåëèãèÿ\n"
	cout << "4 âîïðîñ: \n";
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
	cout << "êàòåãîðèÿ: Ðåëèãèÿ\n"
	cout << "5 âîïðîñ: \n";
	cout << "" << endl;
	int a;
	cin >> a;
	switch (a) {
	case 1:
		endv();
		break;
	case 2:
		endv();
		break;
	case 3:
		endv();
		break;
	case 4:
		endv();
		break;
	case 5:
		endv();
		break;
	}
}
//===========================================

void sport() {
	sport1();
}

void sport1() {
	cout << "êàòåãîðèÿ: Ñïîðò\n"
	cout << "1 âîïðîñ: \n";
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
	cout << "êàòåãîðèÿ: Ñïîðò\n"
	cout << "2 âîïðîñ: \n";
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
	case 5:
		start();
		break;
	}
}
void sport3() {
	cout << "êàòåãîðèÿ: Ñïîðò\n"
	cout << "3 âîïðîñ: \n";
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
	cout << "êàòåãîðèÿ: Ñïîðò\n"
	cout << "4 âîïðîñ: \n";
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
	cout << "êàòåãîðèÿ: Ñïîðò\n"
	cout << "5 âîïðîñ: \n";
	cout << "" << endl;
	int a;
	cin >> a;
	switch (a) {
	case 1:
		endv();
		break;
	case 2:
		endv();
		break;
	case 3:
		endv();
		break;
	case 4:
		endv();
		break;
	}
}
//===========================================
void music() {
	music1();
}

void music1() {
	cout << "êàòåãîðèÿ: Ìóçûêà\n"
	cout << "1 âîïðîñ: \n";
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
	cout << "êàòåãîðèÿ: Ìóçûêà\n"
	cout << "2 âîïðîñ: \n";
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
	cout << "êàòåãîðèÿ: Ìóçûêà\n"
	cout << "3 âîïðîñ: \n";
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
	cout << "êàòåãîðèÿ: Ìóçûêà\n"
	cout << "4 âîïðîñ: \n";
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
	cout << "êàòåãîðèÿ: Ìóçûêà\n"
	cout << "5 âîïðîñ: \n";
	cout << "" << endl;
	int a;
	cin >> a;
	switch (a) {
	case 1:

		cout << "êàòåãîðèÿ Ìóçûêè îêî÷åíà\n";
		endv();
		break;
	case 2:

		cout << "êàòåãîðèÿ Ìóçûêè îêî÷åíà\n";
		endv();
		break;
	case 3:

		cout << "êàòåãîðèÿ Ìóçûêè îêî÷åíà\n";
		endv();
		break;
	case 4:

		cout << "êàòåãîðèÿ Ìóçûêè îêî÷åíà\n";
		endv();
		break;
	}
}
