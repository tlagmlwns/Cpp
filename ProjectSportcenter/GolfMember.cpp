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
	cout << "�̸� : " << name << endl;
	cout << "����ó : " << phone << endl;
	cout << "��ȸ�� : " << MontlyFee << endl;
	cout << "���̵� : " << id << endl;
	cout << "�������̵� : " << id << endl;
}