//#pragma once
#ifndef _Ch3_pratice_1_
#define _Ch3_pritice_1_
#include <iostream>
using namespace std;

class Student {
private:
	char name[100];
	int id;
public:
	void getName() { cout << name; }
	void setName(const char* c) { strcpy(name, c); }
	int getId() { return id; }
	void setId(int id) { id = id; }
};

class StudentJava : public Student {
public:
	int java_score;
	int getjava_score() { return java_score; }
	void setjava_score(int score) { java_score = score; }
};

class StudentC : public Student {
public:
	int C_score;
	int getC_score() { return C_score; }
	void setC_score(int score) { C_score = score; }
};
#endif // !_Ch3_pratice_1_

