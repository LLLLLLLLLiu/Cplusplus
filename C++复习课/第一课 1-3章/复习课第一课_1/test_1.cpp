#define test_4


//测试void类型指针的用法
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

//测试自定义的namespace
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

//测试typedef
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
	//这两种写法都可以
	myclock.a = 0;
	myclock.b = 1;
	cout << myclock.a << endl;
	class triangle {
		int a;
	};
	class triangle myc;
	triangle myc2;
	//这两种写法都可以


	return 0;


}
#endif


#ifdef test_4
#include<stdio.h>
#include<iostream>
using namespace std;

int main() {
	int a = 0;
	scanf_s("%d", &a);//这里我的编译器只能用scanf_s,而不能用scanf;
	printf("a=%d\n", a);
	return 0;
}
#endif // test_4
