#include <iostream>
using namespace std;
//����
//1. �����ڸ� �̿��Ͽ� ���ڷ� ������ int�� �������� 1�� �����ϴ� �Լ�
int RefPlus1(int& num1) { num1++; return num1; }
void funcQ1() { 
	int x; 
	cout << "������ �� �Է� : "; cin >> x;
	cout << "RefPlus1(x) : " << RefPlus1(x) << endl; }

//2. �����ڸ� �̿��Ͽ� ���ڷ� ������ int�� ������ ��ȣ�� �ٲٴ� �Լ�
int RefChangeBuho(int& num2) { return -num2; }
void funcQ2() { 
	int x; 
	cout << "������ �� �Է� : "; cin >> x;
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
		cout << "arr" << (i + 1) << "�ּҰ� : " << &arr << endl;
}
void funcQ4() {
	int len;
	cout << "���� �Է� : "; cin >> len;
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
	//�Ʒ�ó���ϸ� delete& ref���ص� ������ ������ ����.
	/*
	Point p1 = { 1, 2 };
	Point p2 = { 3, 4 };
	Point ref = PntAdder(p1, p2);
	cout << "PntAdder(*p1, *p2) : " << ref.xpos << ref.ypos << endl;
	delete& ref;
	*/
	cout << "�� ��ǥ�� x�� y�� ������ �� : (" << ref.xpos << ", " << ref.ypos << ")" << endl;
	//delete& ref;
}

//int main() { funcQ5(); }