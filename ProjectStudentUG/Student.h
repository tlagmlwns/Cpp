//#pragma once
#ifndef _Student_UG_
#define _Student_UG_
#include <iostream>
using namespace std;

class Student {
public:
	char name[30];	//�л��̸�
	int ban;		//�л���
	int no;			//�й�
	int kor;		//��
	int eng;		//��
	int math;		//��
	Student(const char* sname[30], int sban, int sno, int ks, int es, int ms) :
		ban(sban), no(sno), kor(ks), eng(es), math(ms) {
		strcpy(this->name, *sname);
	}
	int getTotal() { return kor + eng + math; }
	double getAverage() { return (getTotal() / 3); }
	void showStudentInfo() {
		cout <<"( �̸� : "<< name << ", " << ban << "��, �й� : " << no << 
			", ���� : " << kor << "��, ���� : " << eng << "��, ���� : " << math << "��) " << endl;
	}
};
#endif // !_Student_UG_

