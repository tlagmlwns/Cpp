#include<iostream>
#include<stdlib.h>
#include "member.h"
#define SwimMemberFee 50000;
using namespace std;

SwimMember::SwimMember(const char* smn, const char* smp, int smid):Member(smn, smp, smid) { 
	char temp[30];
	_itoa(id, temp, 10);
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
	MontlyFee = SwimMemberFee;
}
void SwimMember::showMemberShip() {
	cout << "�̸� : " << name << endl;
	cout << "����ó : " << phone << endl;
	cout << "��ȸ�� : " << MontlyFee << endl;
	cout << "���̵� : " << id << endl;
	cout << "�������̵� : " << id << endl;
}