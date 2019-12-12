//约瑟夫环问题,这个问题值得思考
#include <iostream>
using namespace std;
int main()
{	
	int n, m;
	cin >> n >> m;
	if (n>0&&n<100&&m>0&&m<100) {
		int index = 0;
		int* p = new int[n + 1];
		int* res = new int[n + 1];//从1到n分别存第i个选中的，也可以不用，节省空间
		for (int i = 0; i != n + 1; i++) {
			p[i] = 0;
		}
		//i:第几个被选到的
		for (int i = 1; i != n + 1; i++) {
			for (int j = 0; j != m; ) {
				if (index == n) {
					index = 1;
				}
				else { index++; }
				if (p[index] == 0) {
					j++;
				}
				//这个位置已经出局了（已经有数字了）,j就不变	
			}
			p[index] = i;
			res[i] = index;
			if (i != n) {
				cout << index ;
				if (i != n - 1) {
					cout << " ";
				}
			}
			else {
				cout << endl;
				cout << index;
			}
		}
	}
	else {
		cout << "WRONG!";
	}
	return 0;
}

/*int m, n;
	cin >> m >> n;
	if (cin.fail()) {
		cout << "WRONG";
	}
	else if (m <= 0 || n <= 0) {
		cout << "WRONG";
	}
	else {

		int* joseRing = new int[n];
		bool* exist = new bool[n];
		int* output = new int[n];
		for (int i = 0; i != n; i++) {
			exist[i] = true;
		}
		for (int i = 0; i != n; i++) {
			joseRing[i] = i + 1;
		}
		int i = 0;
		int j = 0;
		int k = 0;
		while(k!=n-1){
			if (exist[i] == true) {
				j++;
			}
			if (j == m) {
				exist[i] = false;
				output[k] = joseRing[i];
				k++;
				j = 0;
			}
			i = (i++) % n;
		}
		for (int i = 0; i != n; i++) {
			cout << output[i];
			if (i != n - 1) {
				cout << " ";
			}
		}
	}*/

