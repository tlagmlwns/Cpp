#pragma once
#ifndef _test_myCar_
#define _test_mtCar_
using namespace std;
#include <iostream>
using namespace std;

class MyCar {

private:
    int dorNum = 0;
    char color[30] = { 0 };

public:
    MyCar(int num, const char* str);
    void showCarInfo(); 
};

void func_Car();

#endif // !_test_myCar_

