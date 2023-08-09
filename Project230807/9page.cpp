#define SQUARD (a)a*a
#include<iostream>
using namespace std;
//7. 인라인 함수
inline int SQUARE(int x) { return x * x; } //define으로 쓸수있다.
void func7_1() {
	cout << SQUARE(5) << endl;
	cout << SQUARE(12) << endl;
}
void func7_2() {
	cout << SQUARE(5) << endl;
	cout << SQUARE(1.2) << endl;
}
//int main() { func7_1(); func7_2(); }