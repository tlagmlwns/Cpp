#include<iostream>

using namespace std;
class Point {
public:
	int x;
	int y;
	Point(int px, int py):x(px),y(py){ }
	void show() {
		cout << x << y;
	}
};
class Shape {
	virtual void draw() = 0;
};
class Circle : Shape {
public:
	Point * pr;
	double r;
	Circle(Point * cpr, double cr):pr(cpr), r(cr){ }
	virtual void draw() { cout << "원의 반지름 : " << r << ", 원의 중점좌표 : " << pr->x << ", " << pr->y << endl; }
};
class Triangle : Shape {
public:
	Point *p1;
	Point *p2;
	Point *p3;
	Triangle(Point *tp1, Point *tp2, Point *tp3):p1(tp1),p2(tp2),p3(tp3){ }
	virtual void draw() { cout << "세꼭지점의 (x,y) : (" << p1->x <<", "<< p1->y 
		<< "), (" << p2->x << ", " << p2->y << "), (" << p3->x << ", " << p3->y << ")" << endl; }
};
/*
int main() {
	double r = 3.5;
	Point p(1, 3);
	Circle c(&p, r);
	c.draw();

	Point p1 = { 2, 10 };
	Point p2 = { 5, 5 };
	Point p3 = { 10, 7 };
	Triangle t(&p1, &p2, &p3);
	t.draw();
}*/