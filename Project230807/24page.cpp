#include <iostream>
#include "24page.h"
using namespace std;
using namespace P24;
//2.4.4 ������ �Ű������� �⺻��
void func2_4_4() {
	SimpleClass sc1; sc1.ShowData();
	SimpleClass sc2(100); sc2.ShowData();
	SimpleClass sc3(100, 200); sc3.ShowData();
}

//2.4.5 �ɹ� �ʱ�ȭ �̴ϼȶ�����
void func2_4_5() {
	Seller s1(1000, 5, 20000);
	s1.ShowSalesResult();
}
//int main() { func2_4_5(); }