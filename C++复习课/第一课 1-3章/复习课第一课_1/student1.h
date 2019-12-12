#pragma once
#include<iostream>
using namespace std;
namespace spc1 {
	class student {
	public:
		student(const char* Name, int Age, int Num) :name(Name), age(Age), num(Num) {}
		void output() {
			cout << name << " " << age << " " << num << endl;
		}
	private:
		const char* name;
		int age;
		int num;
	};
}
