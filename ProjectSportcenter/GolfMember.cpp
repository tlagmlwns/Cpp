#include<iostream>
#include<stdlib.h>
#include "member.h"
#define GolfMemberFee 100000;
using namespace std;

GolfMember::GolfMember(const char* gmn, const char* gmp, int gmid):Member(gmn, gmp, gmid) { 
	char temp[30];
	_itoa(id, temp, 10);
	strcpy(golfid, "golf_");
	strcpy(golfid, temp);
	setFee();
	/*
	strcpy(name, gmn);
	strcpy(phone, gmp);
	_itoa(gmid, goifid, 10);
	id = gmid;
	setFee();*/
}
void GolfMember::setFee() {
	MontlyFee = GolfMemberFee;
}
void GolfMember::showMemberShip() {
	cout << "이름 : " << name << endl;
	cout << "연락처 : " << phone << endl;
	cout << "월회비 : " << MontlyFee << endl;
	cout << "아이디 : " << id << endl;
	cout << "골프아이디 : " << id << endl;
}