#include<iostream>
#include "member.h"
using namespace std;

GolfMember::GolfMember(const char* gmn, const char* gmp, int gmid):Member(gmn, gmp, gmid) { 
	strcpy(name, gmn);
	strcpy(phone, gmp);
	_itoa(gmid, goifid, 10);
	id = gmid;
}
void GolfMember::setFee() {
	MontlyFee = 50000;
}
void GolfMember::showMemberShip() {
	cout << "�̸� : " << name << endl;
	cout << "����ó : " << phone << endl;
	cout << "��ȸ�� : " << MontlyFee << endl;
	cout << "���̵� : " << id << endl;
	cout << "�������̵� : " << id << endl;
}