#include<iostream>
using namespace std;
//6.1 함수의 디폴트 value
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
	//cout << "[D, D, D] : " << BoxVolume() << endl; //최소 하나의 전달인자를 포함해야된다
}
int BoxVolume(int length, int width, int height) { return length * width * height; }
//int main() { func6_2(); }