#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stdlib.h>
#include "Score_manager.h"
#include "Student.h"

using namespace std;
vector<Student> vs; //학생데이터 벡터
vector<Student>::iterator itr;
vector<int> Averages; //평균 벡터

void Score_manager() {
	cout << " (프로그램 실행)" << endl;
	cout << " 점수관리 프로그램 입니다." << endl;
	while (true) {
		char choice;
		cout << "\n-----------------------------------" << endl;
		cout << " 1. 데이터 입력\n";
		cout << " 2. 입력한 모든 데이터 출력\n";
		cout << " 3. 이름으로 검색\n";
		cout << " 4. 번호로 검색\n";
		cout << " 5. 이름 입력받아 평균과 석차 출력\n"; 
		cout << " 6. 평균점수 높은순으로 출력\n" << endl;
		cout << " ! 프로그램 종료(q or Q)" << endl;
		cout << "-----------------------------------\n" << endl;
		cout << " 해당되는 기능을 사용시 문자를 입력하시오 : ";
		cin >> choice;
		if (choice == 'Q' || choice == 'q') {
			cout << " 3" << endl;
			cout << " 2" << endl;
			cout << " 1" << endl;
			cout << " (프로그램 종료)" << endl;
			break;
		}
		else if (choice == '1') sDataIp();			//1. 데이터 입력 
		else if (choice == '2') sDataAllOp(); 		//2. 입력한 모든 데이터 출력
		else if (choice == '3') searchSname(); 		//3. 이름으로 검색
		else if (choice == '4') searchSno();		//4. 번호로 검색
		else if (choice == '5') printAnR(); 		//5. 이름 입력받아 평균과 석차 출력
		else if (choice == '6') scoreRanking(); 	//6. 평균점수 높은순으로 출력
		else {
			cout << " 해당 번호가 존재하지 않습니다. 다시 입력하시오\n" << endl;
		}
		cout << "\n (프로그램 실행중....)" << endl;
	}
}
void sDataIp() {
	char sname[30];
	int sno;
	int ks;
	int es;
	int ms;
	cout << " 1. 학생 이름 입력 >> "; cin >> sname;
	cout << " 2. 학생 번호 입력 >> "; cin >> sno;
	cout << " 3. 국어 점수 입력 >> "; cin >> ks;
	cout << " 4. 영어 점수 입력 >> "; cin >> es;
	cout << " 5. 수학 점수 입력 >> "; cin >> ms;
	Student sp(sname, sno, ks, es, ms);
	vs.push_back(sp); //학생데이터 넣기
}

void sDataAllOp() {
	for (itr = vs.begin(); itr != vs.end(); itr++)
		(*itr).showStudentInfo();
	cout << "\n (출력완료)\n" << endl;
}

void searchSname() {
	char sname[30];
	cout << " 학생 이름으로 검색 : ";
	cin >> sname;
	itr = find(vs.begin(), vs.end(), sname);

	if (itr != vs.end()) {
		cout << " 검색 결과: ";
		(*itr).showStudentInfo();
	}
	else { cout << " 검색 결과 없음" << endl; }
}

void searchSno() {
	int sno;
	cout << " 학생 번호로 검색 : ";
	cin >> sno;
	itr = find(vs.begin(), vs.end(), sno);

	if (itr != vs.end()) {
		cout << " 검색 결과: ";
		(*itr).showStudentInfo();
	}
	else { cout << " 검색 결과 없음" << endl; }
}

void printAnR() {
	for (itr = vs.begin(); itr != vs.end(); itr++) { //평균 랭킹 추가
		Averages.push_back((*itr).getAverage());
	}
	sort(Averages.begin(), Averages.end(), greater<int>());
	vector<int> sorted_indices(Averages.size());
	for (size_t i = 0; i < Averages.size(); ++i) { sorted_indices[i] = i; }

	char sname[30];
	cout << " 학생 이름으로 검색 : "; cin >> sname;
	itr = find(vs.begin(), vs.end(), sname);
	if (itr != vs.end()) {
		cout << " 평균: " << (*itr).getAverage();
		for (size_t i = 0; i < sorted_indices.size(); ++i) {
			if (Averages[sorted_indices[i]] == (int)(*itr).getAverage()) {
				cout << ", 순위: " << i + 1 << endl;
				Averages.clear(); //초기화
				break;
			}
		}
	}
	else { cout << " 검색 결과 없음" << endl; }
}

void scoreRanking() {
	Averages.clear(); //초기화
	for (itr = vs.begin(); itr != vs.end(); itr++) { //평균 랭킹 추가
		Averages.push_back((*itr).getAverage());
	}
	sort(Averages.begin(), Averages.end(), greater<int>()); //내림차순 정렬
	cout << "- 성적 평균 랭킹 - " << endl;
	for (int a : Averages) {
		cout << a << endl;
	}
	Averages.clear(); //초기화
}
