//#pragma once -> #ifndef 대체
#ifndef _test_Card_
#define _test_Card_
using namespace std;
class Card1 {
public:
	char Shape[30];
	int number;
	void printCard();
};
class Card2 {
private:
	char Shape[30];
	int number;
public:
	void GetShape();
	void SetShape(const char* str1, int num);
	int GetNumber();
	void SetNumber(int num);
	void printCard();
};
void func2_Q3(); //메인에 띄울 사용자설정함수
#endif // !_2_Card_
