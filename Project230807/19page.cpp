#include <iostream>
#include "19page.h"
using namespace std;
using namespace P19;
//2.2 ��ü�� ����
//q1
void func2_Q1() {
	MyTv tv1;
	tv1.channel = 7;
	strcpy(tv1.color, "White");
	cout << "ä�� : " << tv1.channel << ", ���� : " << tv1.color << endl;

	MyTv tv2;
	tv2.channel = 11;
	strcpy(tv2.color, "Red");
	cout << "ä�� : " << tv2.channel << ", ���� : " << tv2.color << endl;
}

//q2
void func2_Q2() {
	Student chursu;
	chursu.kor = 100; chursu.eng = 40; chursu.math = 100;
	Student younge;
	younge.kor = 100; younge.eng = 70; younge.math = 100;
	cout << "ö�� : ���� - " << chursu.getTotal() << "��, ��� : " << chursu.getAverage() << "��" << endl;
	cout << "���� : ���� - " << younge.getTotal() << "��, ��� : " << younge.getAverage() << "��" << endl;
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