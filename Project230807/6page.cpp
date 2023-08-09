#include<iostream>
using namespace std;
//5. overloading
//���� ���߿� �߰�
//1. ���� �ΰ��� �Է¹޾� ���� ��ȯ�ϴ� �Լ� getSum�� ����
int getSum(int x, int y) { return x + y; }
//2. 1���� �̾ �Ǽ� �� ���� �Է� �޾� �� ���� ��ȯ�ϴ� �����ε��� getSum �Լ� ����
double getSum(double x, double y) { return x + y; }
//3. getSum(3,4)�� getSum(3.1, 4.1)ȣ���Ͽ� �����ε� ����� Ȯ��

//4. �Ű������� ������ �����͸� ���޹޾� ����� ���� �ٲ��ִ� swap�� �����϶� 
//char, int, double ������ �ڷ����� �°� �����ε�
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