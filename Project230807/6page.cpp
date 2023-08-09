#include<iostream>
using namespace std;
//5. overloading
//예제 나중에 추가
//1. 정수 두개를 입력받아 합을 반환하는 함수 getSum을 제작
int getSum(int x, int y) { return x + y; }
//2. 1번에 이어서 실수 두 값을 입력 받아 그 합을 반환하는 오버로딩된 getSum 함수 제작
double getSum(double x, double y) { return x + y; }
//3. getSum(3,4)와 getSum(3.1, 4.1)호출하여 오버로딩 결과를 확인

//4. 매개변수로 변수의 포인터를 전달받아 저장된 값을 바꿔주는 swap를 구현하라 
//char, int, double 세가지 자료형에 맞게 오버로딩
void swap(char* x, char* y) {
	char temp = *x;
	*x = *y;
	*y = temp;
}
void swap(int* x, int* y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}
void swap(double* x, double* y) {
	double temp = *x;
	*x = *y;
	*y = temp;
}
void func5_4() {
	char a = 'a',  b = 'b';
	swap(&a, &b);
	cout << a << ", " << b << endl;

	int n1 = 10, n2 = 20;
	swap(&n1, &n2);
	cout << n1 << ", " << n2 << endl;

	double db1 = 1.1, db2 = 2.2;
	swap(&db1, &db2);
	cout <<db1 << ", " << db2 << endl;
}
/*
int main() {
	cout << "getSum(3, 4) : " << getSum(3, 4) << endl;
	cout << "getSum(3.1, 4.1) : " << getSum(3.1, 4.1) << endl;
	func5_4();
}*/