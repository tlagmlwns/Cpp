#include<iostream>

using namespace std;
class Vehicle {
public:
	char Object_name[50];
	Vehicle(const char* vn) { strcpy(Object_name, vn); }
	virtual void start() = 0;
	void stop() { cout << "������ ����ϴ�." << endl; }
};

class Car: public Vehicle{
public:
	char Modle_name[50];
	Car(const char* cmn, const char* cn) :Vehicle(cn) {
		strcpy(Modle_name, cmn);
		//strcpy(Object_name, cn);
	}
	virtual void start() { cout << "������ �����մϴ�." << endl; }
};
class Bike : public Vehicle {
public:
	bool Ar;
	Bike(const char* bn, bool bar) :Vehicle(bn) {
		//strcpy(Object_name, bn);
		Ar = bar;
	}
	virtual void start() { cout << "������ �����մϴ�." << endl; }
	void ringBell() {
		if (Ar) cout << "������ ������" << endl;
		else cout << "���� �����ϴ�." << endl;
	}
};
/*
int main() {
	Car car("Toyota", "Camry");
	Bike bike("Schwinn", true);

	car.start();
	car.stop();
	cout << endl;
	bike.start();
	bike.stop();
	bike.ringBell();

	return 0;
}
*/