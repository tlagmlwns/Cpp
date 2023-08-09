#include <iostream>
#include "member.h"
using namespace std;

int main() {
	Member m1 = Member();
	Member m2 = Member("qwer", "456", 456);
	SwimMember s1 = SwimMember("asdf", "789", 789);
	GolfMember g1 = GolfMember("hjkl", "147", 147);

	m1.setFee(1000);
	m2.setFee(2000);

	m1.showMemberShip();
	m2.showMemberShip();

	s1.showMemberShip();
	g1.showMemberShip();
}