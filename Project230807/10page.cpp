#include<iostream>
using namespace std;
//8.1 NameSpace : 이름공간 어디 소속인지 지정
namespace NameSpace1 { void f1() { cout << "NameSpace1의 f1" << endl; } }
namespace NameSpace2 { void f2() { cout << "NameSpace2의 f2" << endl; } }
void callNameSpace1() { NameSpace1::f1(); NameSpace2::f2(); }
//int main() { callNameSpace1(); }

//8.2 프로토타입 먼저 선언 / int main() / 함수 후 선언
namespace NameSpace3 { void f3(); } // 프로토타입
namespace NameSpace4 { void f4(); } // 프로토타입
void callNameSpace2() { NameSpace3::f3(); NameSpace4::f4(); } //묶어서 선언
//int main() { callNameSpace2(); }
namespace NameSpace3 { void f3() { cout << "NameSpace3의 f3" << endl; } } //진짜
namespace NameSpace4 { void f4() { cout << "NameSpace4의 f4" << endl; } } //진짜
