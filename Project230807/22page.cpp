#include <iostream>
#include "22page.h"
using namespace std;
using namespace P22;
//2.4.1 생성자
void P22::func2_4_1() {
	MyCar1 car1(3, "c");
	car1.showCarInfo();

	MyCar1 car2(6, "q");
	car2.showCarInfo();
}

//2.4.2 const 함수 : 함수내에서는 멤버변수에 저장된 값을 변경하지 않는다.


//int main() {  }