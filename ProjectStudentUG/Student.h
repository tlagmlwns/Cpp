//#pragma once
#ifndef _Student_UG_
#define _Student_UG_
#include <iostream>
using namespace std;

class Student {
public:
	char name[30];	//학생이름
	int ban;		//학생반
	int no;			//학번
	int kor;		//국
	int eng;		//영
	int math;		//수
	Student(const char* sname[30], int sban, int sno, int ks, int es, int ms) :
		ban(sban), no(sno), kor(ks), eng(es), math(ms) {
		strcpy(this->name, *sname);
	}
	int getTotal() { return kor + eng + math; }
	double getAverage() { return (getTotal() / 3); }
	void showStudentInfo() {
		cout <<"( 이름 : "<< name << ", " << ban << "반, 학번 : " << no << 
			", 국어 : " << kor << "점, 영어 : " << eng << "점, 수학 : " << math << "점) " << endl;
	}
};
#endif // !_Student_UG_

