#include <iostream>
#include "19page.h"
using namespace std;
using namespace P19;
//2.2 °´Ã¼ÀÇ »ý¼º
//q1
void func2_Q1() {
	MyTv tv1;
	tv1.channel = 7;
	strcpy(tv1.color, "White");
	cout << "Ã¤³Î : " << tv1.channel << ", »ö°¥ : " << tv1.color << endl;

	MyTv tv2;
	tv2.channel = 11;
	strcpy(tv2.color, "Red");
	cout << "Ã¤³Î : " << tv2.channel << ", »ö°¥ : " << tv2.color << endl;
}

//q2
void func2_Q2() {
	Student chursu;
	chursu.kor = 100; chursu.eng = 40; chursu.math = 100;
	Student younge;
	younge.kor = 100; younge.eng = 70; younge.math = 100;
	cout << "Ã¶¼ö : ÃÑÁ¡ - " << chursu.getTotal() << "Á¡, Æò±Õ : " << chursu.getAverage() << "Á¡" << endl;
	cout << "¿µÀÌ : ÃÑÁ¡ - " << younge.getTotal() << "Á¡, Æò±Õ : " << younge.getAverage() << "Á¡" << endl;
}
//q3
void func2_Q3() {
	Card1 c1 = { "diamond", 7 };
	Card1 c2 = { "Heart", 3 };
	Card1 c3 = { "Clover", 11 };
	c1.printCard();
	c2.printCard();
	c3.printCard();
}
//q4
void func2_Q4() {
	MyCar c1;
	strcpy(c1.color, "White");
	c1.dorNum = 4;

	MyCar2 c2;
	c2.Setcolor("red");
	c2.SetdorNum(3);

	MyCar2 c3;

	c1.showCarInfo();
	c2.showCarInfo();
}
//int main() {  }