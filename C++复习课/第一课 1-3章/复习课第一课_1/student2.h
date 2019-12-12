#pragma once
#include<iostream>
using namespace std;

namespace spc2 {
	class student {
	public:
		student(const char* Name, bool Sex, int Num) :name(Name), sex(Sex), num(Num) {}
		void output() {
			cout << name << " " << sex << " " << num << endl;
		}
	private:
		const char* name;
		bool sex;
		int num;
	};
}

