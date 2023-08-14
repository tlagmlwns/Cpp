#include "Student.h"
#include <iostream>
#include <string.h>
#include <cstring>
using namespace std;

Student::Student(const char* sname, int sno, int ks, int es, int ms)
{
    int len = 0;
    len = strlen(sname);
    name = new char[len+1];
    strcpy(this->name, sname); // 문자열 복사 수정
    this->no = sno;
    this->kor = ks;
    this->eng = es;
    this->math = ms;
}

double Student::getAverage() { return ((double)(kor + eng + math)) / 3; }

void Student::showStudentInfo() {
	cout << " (이름 : " << name << ", 학번 : " << no 
		 << ", 국어 : " << kor << "점, 영어 : " << eng << "점, 수학 : " << math << "점) " << endl;
}
bool Student::operator==(const char* sname) const {
    return strcmp(this->name, sname) == 0;
}
bool Student::operator==(int sno) const {
    return this->no == sno;
}