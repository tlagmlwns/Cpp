#include <iostream>
using namespace std;
//8.3 ����NameSpace�� �Լ� ȣ��� �ٸ� ���ӽ����̽��� �Լ� ȣ��
/*
namespace NameSpace1 { void f1() { cout << "NameSpace1�� f1" << endl; } }
namespace NameSpace2 {
	void f1() { cout << "NameSpace2�� f1" << endl; }
	void f2() { f1(); NameSpace2::f1(); }
}*/

//void callNameSpace3() { NameSpace1::f1(); NameSpace2::f2(); } //��� ����

//8.4 namespace��ø�� ����
namespace Parent {  //��ø
	int num = 1;
	namespace Child {
		int num = 2;
		namespace GrandChild {
			int num = 3;

		}
	}
}
namespace GChild = Parent::Child::GrandChild; //����
void func8_4() {
	cout << "Parent::Child::GrandChild::num = " << Parent::Child::GrandChild::num << endl;
	cout << "GChild = " << GChild::num << endl; //�������� �ش� namespace
	cout << "Parent::Child::num = " << Parent::Child::num << endl;
	cout << "Parent::num  = " << Parent::num << endl;
}
//int main() { func8_4(); }