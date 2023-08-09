#include<iostream>
#include "member.h"
using namespace std;

Member::Member() :Member("홍길동", "123", 123) {}
Member::Member(const char* mname, const char* mphone, int mid) {
	strcpy(this->name, mname);
	strcpy(this->phone, mphone);
	id = mid;
}
int Member::setFee(int fee) { return MontlyFee = fee; }
void Member::showMemberShip() {
	cout << "이름 : " << name << endl;
	cout << "연락처 : " << phone << endl;
	cout << "월회비 : " << MontlyFee << endl;
	cout << "아이디 : " << id << endl;
}