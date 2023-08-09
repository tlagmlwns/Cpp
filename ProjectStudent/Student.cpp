#include <iostream>
#include "myStudent.h"
using namespace std;
Student::Student(const char* name, int ban, int no) {
	strcpy(sname, name);
	sban = ban;
	sno = no;
	kor = -1, eng = -1, math = -1;
}
Student::Student(const char* name, int ban, int no, int k, int e, int m) {
	strcpy(sname, name);
	sban = ban;
	sno = no;
	kor = k; eng = e; math = m;
}
int Student::getTotal() { return kor + eng + math; }
float Student::getAverage() { return (float)(kor + eng + math) / 3; }
void func2_4_Q2() {
	Student s1("qwer", 1, 2, 100, 70, 20);
	cout << "ÇÕ°è : " << s1.getTotal()  << ", Æò±Õ : " << s1.getAverage() << endl;
	Student s2("tyop", 1, 3);
	cout << "ÇÕ°è : " << s2.getTotal() << ", Æò±Õ : " << s2.getAverage() << endl;
}