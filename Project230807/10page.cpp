#include<iostream>
using namespace std;
//8.1 NameSpace : �̸����� ��� �Ҽ����� ����
namespace NameSpace1 { void f1() { cout << "NameSpace1�� f1" << endl; } }
namespace NameSpace2 { void f2() { cout << "NameSpace2�� f2" << endl; } }
void callNameSpace1() { NameSpace1::f1(); NameSpace2::f2(); }
//int main() { callNameSpace1(); }

//8.2 ������Ÿ�� ���� ���� / int main() / �Լ� �� ����
namespace NameSpace3 { void f3(); } // ������Ÿ��
namespace NameSpace4 { void f4(); } // ������Ÿ��
void callNameSpace2() { NameSpace3::f3(); NameSpace4::f4(); } //��� ����
//int main() { callNameSpace2(); }
namespace NameSpace3 { void f3() { cout << "NameSpace3�� f3" << endl; } } //��¥
namespace NameSpace4 { void f4() { cout << "NameSpace4�� f4" << endl; } } //��¥
