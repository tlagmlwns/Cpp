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
	cout << "�̸� : " << name << endl;
	cout << "����ó : " << phone << endl;
	cout << "��ȸ�� : " << MontlyFee << endl;
	cout << "���̵� : " << id << endl;
	cout << "�������̵� : swim_" << id << endl;
}