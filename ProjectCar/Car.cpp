#include <iostream>
#include "myCar.h"
using namespace std;


MyCar::MyCar(int num, const char* str) {
        dorNum = num;
        strcpy(color, str);
    }

void MyCar::showCarInfo() {
        cout << "문 개수:" << dorNum << ", 자동차 색깔:" << color << endl;}

void func_Car(){
    MyCar car1(3, "red");
    car1.showCarInfo();
}