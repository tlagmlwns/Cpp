#include <iostream>
#include <vector>
#include <string>
using namespace std;
//vector를 이용한 응용 문제 Card
class Card {
public:
	int CardNum;
	char Shape[10];
	Card(int num, const char* c) {
		this->CardNum = num;
		strcpy(this->Shape, c);
	}
	void showCard() { cout << "\n카드 정보 : " << CardNum << ", " << Shape << endl; }
};
void func4_STL_vcCard() {
	vector<Card> v;
	vector<Card>::iterator it;
	int num; char c[10];
	for (int i = 0; i < 5; i++) {
		cout << "숫자 입력 : ";			cin >> num;
		cout << "모양 입력(ml:10) : ";	cin >> c;
		Card cd(num, c);
		v.push_back(cd);
	}
	for (it = v.begin(); it != v.end(); it++)
		(*it).showCard();
}
/*
int main() {
	func4_STL_vcCard();
}
*/