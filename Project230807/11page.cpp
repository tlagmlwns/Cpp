#include <iostream>
using namespace std;
//8.3 동일NameSpace의 함수 호출과 다른 네임스페이스의 함수 호출
/*
namespace NameSpace1 { void f1() { cout << "NameSpace1의 f1" << endl; } }
namespace NameSpace2 {
	void f1() { cout << "NameSpace2의 f1" << endl; }
	void f2() { f1(); NameSpace2::f1(); }
}*/

//void callNameSpace3() { NameSpace1::f1(); NameSpace2::f2(); } //묶어서 선언

//8.4 namespace중첩과 별명
namespace Parent {  //중첩
	int num = 1;
	namespace Child {
		int num = 2;
		namespace GrandChild {
			int num = 3;

		}
	}
}
namespace GChild = Parent::Child::GrandChild; //별명
void func8_4() {
	cout << "Parent::Child::GrandChild::num = " << Parent::Child::GrandChild::num << endl;
	cout << "GChild = " << GChild::num << endl; //별명해준 해당 namespace
	cout << "Parent::Child::num = " << Parent::Child::num << endl;
	cout << "Parent::num  = " << Parent::num << endl;
}
//int main() { func8_4(); }