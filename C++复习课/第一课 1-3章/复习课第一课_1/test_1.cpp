#define test_4


//����void����ָ����÷�
#ifdef test_1
#include<iostream>
using namespace std;

int main() {
	int a = 0;
	void* p = &a;
	cout << p << endl;
	return 0;
}
#endif // test_1

//�����Զ����namespace
#ifdef test_2
#include<iostream>
#include"student1.h"
#include"student2.h"
using namespace std;
using namespace spc1;

int main() {
	student stu1("LL", 1, 2);
	stu1.output();
	return 0;
}
#endif // test_2

//����typedef
#ifdef test_3
#include<iostream>
using namespace std;
typedef int rank;
int main() {
	struct clock {
		int a;
		int b;
	};
	struct clock myclock;
	clock myclock2;
	//������д��������
	myclock.a = 0;
	myclock.b = 1;
	cout << myclock.a << endl;
	class triangle {
		int a;
	};
	class triangle myc;
	triangle myc2;
	//������д��������


	return 0;


}
#endif


#ifdef test_4
#include<stdio.h>
#include<iostream>
using namespace std;

int main() {
	int a = 0;
	scanf_s("%d", &a);//�����ҵı�����ֻ����scanf_s,��������scanf;
	printf("a=%d\n", a);
	return 0;
}
#endif // test_4
