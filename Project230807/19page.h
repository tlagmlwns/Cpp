#pragma once
#include <iostream>
using namespace std;
//19page
namespace P19 {
	class MyTv {
	public:
		int channel;
		bool power;
		char color[30];

		void powerOnOff() { power = !power; }
		void channelUp() { channel++; }
		void channelDown() { channel--; }
	};
	void func2_Q1();
	class Student {
	public:
		char sname[30];
		int sban;
		int sno;
		int kor;
		int eng;
		int math;
		int getTotal() { return kor + eng + math; }
		float getAverage() { return (float)(kor + eng + math) / 3; }
	};
	void func2_Q2();
	class Card1 {
	public:
		char Shape[30];
		int number;
		void printCard() { cout << Shape << "," << number << endl; }
	};
	class Card2 {
	public:
		char Shape[30];
		int number;
		void GetShape() { cout << Shape; }
		void SetShape(const char* str1, int num) { strcpy(Shape, str1); number = num; }
		int GetNumber() { return number; }
		void SetNumber(int num) { number = num; }
		void printCard() { cout << Shape << "," << number << endl; }
	};
	void func2_Q3();
	class MyCar {
	public:
		char color[30];
		int dorNum;
		void showCarInfo() { cout << "차의 색 : " << color << ", 차의 번호 : " << dorNum << endl; }
	};
	class MyCar2 {
	private:
		char color[30];
		int dorNum;
	public:
		//if (!strcpy(str, "black")) { cont << "오류 - 잘못된 색상 입력!" << endl; } 오류 검출할때 
		void Getcolor() { cout << color; }
		void Setcolor(const char* str1) { strcpy(color, str1); }
		int GetdorNum() { return dorNum; }
		void SetdorNum(int num) { dorNum = num; }
		void setCarInfo(int num, const char* str) { dorNum = num; strcpy(color, str); }
		void showCarInfo() { cout << "차의 색 : " << color << ", 차의 번호 : " << dorNum << endl; }
	};
	void func2_Q4();

}
