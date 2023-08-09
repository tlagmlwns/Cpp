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
	cout << "이름 : " << name << endl;
	cout << "연락처 : " << phone << endl;
	cout << "월회비 : " << MontlyFee << endl;
	cout << "아이디 : " << id << endl;
	cout << "골프아이디 : " << id << endl;
}