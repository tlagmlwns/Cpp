#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std; //std:: 생략
//3. 새로운 자료형 bool
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

//4. 포인터로 동적 메모리 할당
//int main() {  }

//t1. 하나의 정수를 저장하기 위한 동적메모리 할당후 10을 저장
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

//t2. 하나의 문자를 저장하기위한 동적메모리 할당후 'A'를 저장
void t2() {
	char* t2 = (char*)malloc(1);
	*t2 = 'A';
	cout << "*t2  : " << *t2 << endl;
	free(t2);
}

//t3. 정수 5개를 저장하기 위한 동적 메모리 할당후 3의 배수 5개 저장
void t3() {
	int* t3 = (int*)malloc(sizeof(int) * 5);
	for (int i = 0; i < 5; i++) *(t3 + i) = 3 * (i + 1);
	for (int i = 0; i < 5; i++) cout << *(t3 + i) << " , ";
	cout << " " << endl;
	free(t3);
}

//tf. 이름을 저장하기 위한 동적 메모리 할당후 (길이 32) 이름 저장
void t4() {
	char* t4 = (char*)malloc(32);
	//string* t4 = (string*)malloc(32);
	strcpy(t4, "tlagmlwns");
	cout << "입력한 이름 출력 : ";
	for (int i = 0; i <= sizeof(t4); i++) cout << *(t4 + i) << " ";
	free(t4);
}

//t5. 정수 6개 저장하기 위한 동적 메모리 할당후 5개는 과목 1개는 평균
void t5() {
	float* t5 = (float*)malloc(sizeof(int) * 6);
	for (int i = 0; i < 5; i++) { //입력
		cout << i + 1 << "번째 과목의 점수 입력 : ";
		cin >> t5[i];
	}
	cout << endl; //줄바꿈
	float hap = 0, average = 0;
	for (int i = 0; i < 5; i++) { hap += t5[i]; } //합에 더하기
	average = hap / 5; //평균
	t5[6] = average;
	cout << "해당 과목수의 평균 : " << average << endl;
}

//t6. char 20개를 저장할 메모리 할당후 hello cpp를 저장(malloc, strcpy)사용 -> 전처리기 필수 ;_CRT_SECURE_NO_WARNINGS
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
