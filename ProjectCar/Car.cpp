#include <iostream>
#include "myCar.h"
using namespace std;


MyCar::MyCar(int num, const char* str) {
        dorNum = num;
        strcpy(color, str);
    }

void MyCar::showCarInfo() {
        cout << "�� ����:" << dorNum << ", �ڵ��� ����:" << color << endl;}

void func_Car(){
    MyCar car1(3, "red");
    car1.showCarInfo();
}