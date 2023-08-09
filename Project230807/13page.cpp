#include <iostream>
using namespace std;
//9.2 매개변수로의 참조자
void SwapByval(int *a, int *b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
void SwapByval(int &a, int &b) {
	int temp;
	temp = a;
	a = b; 
	b = temp;
}
void func9_2() {
	int val1 = 10, val2 = 20;
	cout << "처음" << endl;
	cout << "val1 : " << val1 << endl; //10
	cout << "val2 : " << val2 << endl; //20
	cout << "\n";
	cout << "SwapByval *" << endl;
	SwapByval(&val1, &val2);
	cout << "val1 : " << val1 << endl; //20
	cout << "val2 : " << val2 << endl; //10
	cout << "\n";
	cout << "SwapByval &" << endl;
	SwapByval(val1, val2);
	cout << "val1 : " << val1 << endl; //10
	cout << "val2 : " << val2 << endl; //20
}

//9.3 반환형이 참조자
int& RetFuncOne(int& ref) { ref++; return ref; }
void func9_3_1() {
	int num1 = 1;
	int& num2 = RetFuncOne(num1);

	num1++;
	num2++;
	cout << "num1 : " << num1 << endl;
	cout << "num2 : " << num2 << endl;

	cout << "num1주소 : " << &num1 << endl;
	cout << "num2주소 : " << &num2 << endl;
}
void func9_3_2() {
	int num1 = 1;
	int num2 = RetFuncOne(num1);

	num1++;
	num2++;
	cout << "num1 : " << num1 << endl;
	cout << "num2 : " << num2 << endl;

	cout << "num1주소 : " << &num1 << endl;
	cout << "num2주소 : " << &num2 << endl;
}

//int main() { func9_3_1(); func9_3_2(); }