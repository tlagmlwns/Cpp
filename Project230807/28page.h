//#pragma once
#ifndef _Ch3_28page_
#define _Ch3_28page_
#include <iostream>
using namespace std;

class MyCar {

private:
    int dorNum = 0;
    char color[30] = { 0 };

public:
    MyCar();
    MyCar(int num, const char* str);
    void showCarInfo();
};
class MySunRoofCar : public MyCar {
public:
    bool bSunRoof;
    bool isSunRoof();
    MySunRoofCar(int num, const char* str, bool sunRoof);
    void showCarInfo();
};
void func_3_();
#endif // !_Ch3_28page_
