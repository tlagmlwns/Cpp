#include <iostream>
using namespace std;
//문제
//1. 참조자를 이용하여 인자로 전달한 int형 변수값을 1씩 증가하는 함수
int RefPlus1(int& num1) { num1++; return num1; }
void funcQ1() { 
	int x; 
	cout << "정수형 값 입력 : "; cin >> x;
	cout << "RefPlus1(x) : " << RefPlus1(x) << endl; }

//2. 참조자를 이용하여 인자로 전달한 int형 변수의 부호를 바꾸는 함수
int RefChangeBuho(int& num2) { return -num2; }
void funcQ2() { 
	int x; 
	cout << "정수형 값 입력 : "; cin >> x;
	cout << "RefChangeBuho(x) : " << RefChangeBuho(x) << endl; }

//3. 
void funcQ3() {
	const int num = 12;
	const int * p = &num;
	const int * &r = p;
	cout << "*p : " << *p << endl;
	cout << "*r : " << *r << endl;
}
//4. 
void showAddress(char *arr, int len) {
	for (int i = 0; i < len; i++)
		cout << "arr" << (i + 1) << "주소값 : " << &arr << endl;
}
void funcQ4() {
	int len;
	cout << "길이 입력 : "; cin >> len;
	char* arr = new char[len];
	showAddress(arr, len);
}
//5. 
typedef struct { int xpos; int ypos; }Point;
Point& PntAdder(const Point& ptr1, const Point& ptr2){
	Point* pr = new Point;
	pr->xpos = ptr1.xpos + ptr2.xpos;
	pr->ypos = ptr1.ypos + ptr2.ypos;
	return *pr;
}
void funcQ5() {
	Point *p1 = new Point;
	Point *p2 = new Point;
	p1->xpos = 10; p1->ypos = 20;
	p2->xpos = 5; p2->ypos = 10;
	Point ref = PntAdder(*p1, *p2);
	//아래처럼하면 delete& ref를해도 데이터 누수가 난다.
	/*
	Point p1 = { 1, 2 };
	Point p2 = { 3, 4 };
	Point ref = PntAdder(p1, p2);
	cout << "PntAdder(*p1, *p2) : " << ref.xpos << ref.ypos << endl;
	delete& ref;
	*/
	cout << "두 좌표의 x와 y의 각각의 합 : (" << ref.xpos << ", " << ref.ypos << ")" << endl;
	//delete& ref;
}

//int main() { funcQ5(); }