//#pragma once
#ifndef _Student_UG_
#define _Student_UG_

class Student {
public:
	char* name;		//학생이름
	int no;			//학번
	int kor;		//국
	int eng;		//영
	int math;		//수
	Student(const char* sname, int sno, int ks, int es, int ms);
	double getAverage();
	void showStudentInfo();
	bool operator==(const char* sname) const;
	bool operator==(int sno) const;
};
#endif // !_Student_UG_

