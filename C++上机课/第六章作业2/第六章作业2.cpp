#include <iostream>
using namespace std;
void calculation(int* array, double* mean, int& maximum,int length);
int main()
{
	int length;
	cin >> length;
	int* array = new int[length];
	for (int i = 0; i != length; i++) {
		cin >> array[i];
	}
	double mean = 0;
	int maxinum = 0;
	calculation(array, &mean, maxinum, length);
	cout << mean << endl;
	cout << maxinum;
	delete array;
	return 0;
}
void calculation(int* array, double* mean, int& maximum, int length) {
	double sum = 0;
	for (int i = 0; i != length; i++) {
		sum += *(array + i);
		if (*(array + i) > maximum) {
			maximum = *(array + i);
		}
	}
	*mean = (sum / length);
}
//这里来思考一下指针和数组的关系