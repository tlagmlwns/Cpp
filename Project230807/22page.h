#pragma once
#include <iostream>
using namespace std;
//22page
namespace P22 {
	class MyCar1 {
	private:
		int dorNum;
		char color[30];
	public:
		MyCar1() { dorNum = 2; strcpy(color, "sliver"); }
		MyCar1(int num, const char* str) { dorNum = num; strcpy(color, str); }
		const int getDoorNum() { dorNum = 3; return dorNum; }
		void showCarInfo() {
			cout << "차의 문 : " << dorNum << ", 차의 색 : " << color << endl;
		}
	};
	void func2_4_1();
}

