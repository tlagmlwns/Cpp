#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std; //std:: ����
//3. ���ο� �ڷ��� bool
bool IsPositive(int num) {
	if (num < 0) return false;
	else return true;
}

void booltest() {
	bool isPos;
	int num;
	cout << "Input number : ";
	cin >> num;
	isPos = IsPositive(num);
	if (isPos) cout << "Positive Num" << endl;
	else cout << "Negative Num" << endl;
}

//4. �����ͷ� ���� �޸� �Ҵ�
//int main() {  }

//t1. �ϳ��� ������ �����ϱ� ���� �����޸� �Ҵ��� 10�� ����
int* MakeInt(int len) {
	int* Int = (int*)malloc(sizeof(int) * len);
	return Int;
}
void t1(){
	int* t1 = (int*)malloc(4);
	*t1 = 10;
	cout << "*t1 : " << *t1 << endl;
	free(t1);
}

//t2. �ϳ��� ���ڸ� �����ϱ����� �����޸� �Ҵ��� 'A'�� ����
void t2() {
	char* t2 = (char*)malloc(1);
	*t2 = 'A';
	cout << "*t2  : " << *t2 << endl;
	free(t2);
}

//t3. ���� 5���� �����ϱ� ���� ���� �޸� �Ҵ��� 3�� ��� 5�� ����
void t3() {
	int* t3 = (int*)malloc(sizeof(int) * 5);
	for (int i = 0; i < 5; i++) *(t3 + i) = 3 * (i + 1);
	for (int i = 0; i < 5; i++) cout << *(t3 + i) << " , ";
	cout << " " << endl;
	free(t3);
}

//tf. �̸��� �����ϱ� ���� ���� �޸� �Ҵ��� (���� 32) �̸� ����
void t4() {
	char* t4 = (char*)malloc(32);
	//string* t4 = (string*)malloc(32);
	strcpy(t4, "tlagmlwns");
	cout << "�Է��� �̸� ��� : ";
	for (int i = 0; i <= sizeof(t4); i++) cout << *(t4 + i) << " ";
	free(t4);
}

//t5. ���� 6�� �����ϱ� ���� ���� �޸� �Ҵ��� 5���� ���� 1���� ���
void t5() {
	float* t5 = (float*)malloc(sizeof(int) * 6);
	for (int i = 0; i < 5; i++) { //�Է�
		cout << i + 1 << "��° ������ ���� �Է� : ";
		cin >> t5[i];
	}
	cout << endl; //�ٹٲ�
	float hap = 0, average = 0;
	for (int i = 0; i < 5; i++) { hap += t5[i]; } //�տ� ���ϱ�
	average = hap / 5; //���
	t5[6] = average;
	cout << "�ش� ������� ��� : " << average << endl;
}

//t6. char 20���� ������ �޸� �Ҵ��� hello cpp�� ����(malloc, strcpy)��� -> ��ó���� �ʼ� ;_CRT_SECURE_NO_WARNINGS
char* MakeStr(int len) {
	char* str = (char*)malloc(sizeof(char) * len);
	return str;
}
void t6() {
	char* t6 = MakeStr(20);
	strcpy(t6, "Hello Cpp");
	cout << t6 << endl;
	free(t6);
}
