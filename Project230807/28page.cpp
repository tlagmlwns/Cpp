#include <iostream>
#include "28page.h"
using namespace std;

MyCar::MyCar() { dorNum = 2; strcpy(color, "black"); }
MyCar::MyCar(int num, const char* str) {
    dorNum = num;
    strcpy(color, str);
}
void MyCar::showCarInfo() {
    cout << "�� ����:" << dorNum << ", �ڵ��� ����:" << color << endl;
}
MySunRoofCar::MySunRoofCar(int num, const char* str, bool sunRoof) :MyCar(num, str) {
    bSunRoof = sunRoof;
}
void MySunRoofCar::showCarInfo() {
    //cout << "�� ����:" << dorNum << ", �ڵ��� ����:" << color << endl;
}
void func_3_() {
    MyCar car1(3, "red");
    car1.showCarInfo();

    MyCar car2(3, "black");
    car2.showCarInfo();
}