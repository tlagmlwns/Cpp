#define SQUARD (a)a*a
#include<iostream>
using namespace std;
//7. �ζ��� �Լ�
inline int SQUARE(int x) { return x * x; } //define���� �����ִ�.
void func7_1() {
	cout << SQUARE(5) << endl;
	cout << SQUARE(12) << endl;
}
void func7_2() {
	cout << SQUARE(5) << endl;
	cout << SQUARE(1.2) << endl;
}
//int main() { func7_1(); func7_2(); }