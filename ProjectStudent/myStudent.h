//#pragma once
#ifndef _test_Student_
#define _test_Student_
using namespace std;
class Student {
private:
	char sname[30];
	int sban;
	int sno;
	int kor;
	int eng;
	int math;
public:
	Student(const char* name, int ban, int no);
	Student(const char* name, int ban, int no, int k, int e, int m);
	int getTotal();
	float getAverage();
};
void func2_4_Q2();
#endif // !_test_Student_