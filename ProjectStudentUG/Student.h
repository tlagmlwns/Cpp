//#pragma once
#ifndef _Student_UG_
#define _Student_UG_

class Student {
public:
	char* name;		//�л��̸�
	int no;			//�й�
	int kor;		//��
	int eng;		//��
	int math;		//��
	Student(const char* sname, int sno, int ks, int es, int ms);
	double getAverage();
	void showStudentInfo();
	bool operator==(const char* sname) const;
	bool operator==(int sno) const;
};
#endif // !_Student_UG_

