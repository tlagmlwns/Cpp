#include<iostream>
#include<stdlib.h>
#include "member.h"
using namespace std;

SwimMember::SwimMember(const char* smn, const char* smp, int smid):Member(smn, smp, smid) { 
	char temp[30];
	itoa(id, temp, 10);
	strcpy(swimid, "swim_");
	strcpy(swimid, temp);
	setFee();
	/*
	strcpy(name, smn);
	strcpy(phone, smp);
	_itoa(smid, swimid, 10);
	id = smid;*/
}
void SwimMember::setFee() {
	MontlyFee = 50000;
}
void SwimMember::showMemberShip() {
	cout << "이름 : " << name << endl;
	cout << "연락처 : " << phone << endl;
	cout << "월회비 : " << MontlyFee << endl;
	cout << "아이디 : " << id << endl;
	cout << "수영아이디 : swim_" << id << endl;
}