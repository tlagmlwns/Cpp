#include<iostream>

using namespace std;

class Student {
protected:
    char name[30];
    int id;

public:
    Student(const char* name, int id) :id(id) {
        strcpy(this->name, name);
    }

    virtual void show_info() const {
        cout << name << ", " << id << endl;
    }

};

class Student_Java : Student {
public:
    Student_Java(const char* name, int id) : Student(name, id) {

    }

    virtual void show_info() const {
        cout << name << ", " << id << " : 자바기반 프로그래밍 수업" << endl;
    }

};

class Student_C : Student {

public:
    Student_C(const char* name, int id) : Student(name, id) {

    }

    void show_info() const {
        cout << name << ", " << id << " : C/C++ 프로그래밍 수업" << endl;
    }

};
/*
int main() {
    Student s1 = { "qwer",100 };
    Student_C c1 = { "qwer",100 };
    Student_Java j1 = { "qwer",100 };

    c1.show_info();
    j1.show_info();
}*/