#include <iostream>
#include "myCard.h"
using namespace std;

void Card1::printCard(){ cout << Shape << "," << number << endl; }

void Card2::GetShape() { cout << Shape; }
void Card2::SetShape(const char* str1, int num) { strcpy(Shape, str1); number = num; }
int Card2::GetNumber() { return number; }
void Card2::SetNumber(int num) { number = num; }
void Card2::printCard() { cout << Shape << "," << number << endl; }

void func2_Q3(){
	Card1 c1 = { "diamond", 7 };
	Card1 c2 = { "Heart", 3 };
	Card1 c3 = { "Clover", 11 };
	c1.printCard();
	c2.printCard();
	c3.printCard();
}