#include "Student.h"
#include <iostream>
using namespace std;

Student::Student(const char *sname[30], int sno, int ks, int es, int ms)
{
	strcpy(this->name, *sname); this->no = sno; this->kor = ks; this->eng = es; this->math = ms;
}

int Student::getTotal() { return kor + eng + math; }

double Student::getAverage() { return ((double)getTotal() / 3); }

void Student::showStudentInfo() {
	cout << "( �̸� : " << name << ",�й� : " << no 
		 << ", ���� : " << kor << "��, ���� : " << eng << "��, ���� : " << math << "��) " << endl;
}
