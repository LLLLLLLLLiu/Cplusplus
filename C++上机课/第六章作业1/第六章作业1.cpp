#include <iostream>
using namespace std;
int main()
{
	int row, col;
	cin >> row >> col;
	int* matrix_1 = new int[row * col];

	
	for (int i = 0; i != row; i++) {
		for (int j = 0; j != col; j++) {
			cin >> matrix_1[i * col + j];
		}
	}
	int* matrix_2 = new int[row * col];
	for (int i = 0; i != row; i++) {
		for (int j = 0; j != col; j++) {
			cin >> matrix_2[i * col + j];
		}
	}
	int* matrix_sum = new int[row * col];
	for (int i = 0; i != row * col;i++) {
		matrix_sum[i] = matrix_1[i] + matrix_2[i];
	}
	for (int i = 0; i != row; i++) {
		for (int j = 0; j != col; j++) {
			cout << matrix_sum[i * col + j] << " ";
		}
		if (i != row - 1) {
			cout << endl;
		}
	}
	delete matrix_1;
	delete matrix_2;
	delete matrix_sum;
	return 0;
}

//关于动态生成二维数组

int main() {
	int** arr = NULL; int row = 5;//用于表示行数
	int col = 5;//用于表示列数
	arr = new int*[row];//开辟一块内存来存放每一行的地址
	for (int i = 0; i < row; i++)//分别为每一行开辟内存
		arr[i] = new int[col];
}