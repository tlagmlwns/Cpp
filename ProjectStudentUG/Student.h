//#pragma once
#ifndef _Student_UG_
#define _Student_UG_
#include <iostream>
using namespace std;

class Student {
public:
	char name[30];	//�л��̸�
	int no;			//�й�
	int kor;		//��
	int eng;		//��
	int math;		//��
	Student(const char* sname[30], int sno, int ks, int es, int ms);
	int getTotal(); 
	double getAverage();
	void showStudentInfo();
};
#endif // !_Student_UG_

