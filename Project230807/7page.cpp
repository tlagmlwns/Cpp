#include<iostream>
using namespace std;
//6.1 �Լ��� ����Ʈ value
int Adder(int num1 = 1, int num2 = 2); 
void func6_1() {
	cout << Adder() << endl;
	cout << Adder(3) << endl;
	cout << Adder(3, 5) << endl;
}
int Adder(int num1, int num2) { return num1 + num2; }
//6.2 
int BoxVolume(int length, int width = 1, int height = 2);
void func6_2() {
	cout << "[3, 3, 3] : " << BoxVolume(3, 3, 3) << endl;
	cout << "[5, 5, D] : " << BoxVolume(5, 5) << endl;
	cout << "[7, D, D] : " << BoxVolume(7) << endl;
	//cout << "[D, D, D] : " << BoxVolume() << endl; //�ּ� �ϳ��� �������ڸ� �����ؾߵȴ�
}
int BoxVolume(int length, int width, int height) { return length * width * height; }
//int main() { func6_2(); }