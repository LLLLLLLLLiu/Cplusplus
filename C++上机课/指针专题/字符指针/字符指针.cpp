#include <iostream>
using namespace std;

int main() {
	char a[] = "File";
	cout << a << endl;
	cout << &a << endl;
	int b[] = { 1,2,3 };
	cout << b << endl;
	cout << &b << endl;
	
	int* p = b;
	cout << p << endl;
	cout << &p << endl;
	int* p2 = &b;
	cout << p2 << endl;
	cout << &p2 << endl;
	return 0;
}

//+1 ��[1]��Ч�������ƶ��ķ�Χ������