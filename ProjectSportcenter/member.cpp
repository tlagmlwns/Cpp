#include<iostream>
#include "member.h"
using namespace std;

Member::Member() :Member("ȫ�浿", "123", 123) {}
Member::Member(const char* mname, const char* mphone, int mid) {
	strcpy(this->name, mname);
	strcpy(this->phone, mphone);
	id = mid;
}
int Member::setFee(int fee) { return MontlyFee = fee; }
void Member::showMemberShip() {
	cout << "�̸� : " << name << endl;
	cout << "����ó : " << phone << endl;
	cout << "��ȸ�� : " << MontlyFee << endl;
	cout << "���̵� : " << id << endl;
}