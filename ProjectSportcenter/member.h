//#pragma once
#ifndef _Ch3_pratice_Member_
#define _Ch3_pratice_Member_
using namespace std;
class Member {
public:
	char name[30];
	char phone[30];
	int MontlyFee;
	int id;
	Member();
	Member(const char* mname, const char* mphone, int mid);
	int setFee(int fee);
	void showMemberShip();
};
class SwimMember : public Member {
public:
	char swimid[30];
	SwimMember(const char* smn, const char* smp, int smid);
	void setFee();
	void showMemberShip();
};
class GolfMember : public Member {
public:
	char goifid[30];
	GolfMember(const char* gmn, const char* gmp, int gmid);
	void setFee();
	void showMemberShip();
};
#endif // !_Ch3_pritice_Menber_
