#pragma once
#include <iostream>
using namespace std;
//24page
namespace P24 {
	class SimpleClass {
		int num1;
		int num2;
	public:
		SimpleClass(int n1 = 0, int n2 = 0) { num1 = n1; num2 = n2; }
		void ShowData() const { cout << num1 << ' ' << num2 << endl; }
	};

	class Seller {
		int price;
		int numOfProduct;
		int myMoney;
	public:
		Seller(int price, int num, int money) 
			: price(price), numOfProduct(num), myMoney(money) {}
		void ShowSalesResult() const {
			cout << "- 상품 가격 : " << price << endl;
			cout << "- 상품 개수 : " << numOfProduct << endl;
			cout << "- 현금 : " << myMoney << endl;
		}
	};
}
