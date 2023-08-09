#pragma once
#include <iostream>
using namespace std;
//25page_q
namespace P25{
	//Q1
	class MyTv {
	private:
		int channel;
		bool power;
		char color[30];
	public:
		MyTv(const char* c) { strcpy(color, c); }
		void powerOnOff() { power = !power; }
		void channelUp() { channel++; }
		void channelDown() { channel--; }
	};
	void func2_4_Q1();

	//Q2
	class Student {
	private:
		char sname[30];
		int sban;
		int sno;
		int kor;
		int eng;
		int math;
	public:
		Student(const char* name, int ban, int no) {
			strcpy(sname, name);
			sban = ban;
			sno = no;
			kor = -1, eng = -1, math = -1;
		}
		Student(const char* name, int ban, int no, int k, int e, int m) {
			strcpy(sname, name);
			sban = ban;
			sno = no;
			kor = k; eng = e; math = m;
		}
		int getTotal() { return kor + eng + math; }
		float getAverage() { return (float)(kor + eng + math) / 3; }
	};
	void func2_4_Q2();

	//Q3
	class Card {
	private:
		int cardNum;
		char Shape[30];
	public:
		int cngetter() { return cardNum; }
		void cnsetter(int n) { cardNum = n; }
		void Sgetter() { cout << Shape; }
		void Ssgetter(char* s) { strcpy(Shape, s); }
		Card(int num, const char* s) { cardNum = num; strcpy(Shape, s); }
		void printCardInfo() { cout << Shape << cardNum << endl; }
	};
	void func2_4_Q3();

	//Q4
	class Person {
	private:
		char* name;
		int age;
	public:
		Person(const char* myname, int myage) : age(myage) {
			int len = strlen(myname) + 1;
			name = new char[len];
			strcpy(name, myname);
			//delete[] name;
		}
		/*
		Person(const char* myname, int myage) {
			int len = strlen(myname) + 1;
			name = new char[len];
			strcpy(name, myname); age = myage;
		}*/
		void ShowPersonInfo() { cout << "이름 : " << name << ", 나이 : " << age << endl; }
		~Person() { cout << "객체가 소멸됩니다."; delete[] name; }
	};
	void func2_4_Q4();
}
