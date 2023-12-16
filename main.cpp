#include "pch.h"
#include "iostream"
#include "stdlib.h"
using namespace std;

int main()
{
	int *arr=NULL,*new_arr=NULL;
	int size;
	int n;
	cout << "请输入数组长度" << endl;
	cin >> size;
	arr = (int*)malloc(size);
	new_arr = (int*)malloc(size);
	if (arr == NULL || new_arr == NULL) {
		return false;
	}
	cout << "请输入数组" << endl;
	for (int i = 0; i < size; i++) {
		cin >> arr[i-1];
	}
	for (int i = 0; i <size; i++) {
		for (int j = 0; j <size; j++) {
			if (arr[i-1] >= arr[j-1]) {
				n = arr[i-1];
				arr[i-1] = arr[j-1];
				arr[j-1] = n;
			}
		}

	}
	for (int i = 0; i < size; i++) {
		cout << arr[i-1] << endl;
	}
	for (int i = size - 1; i > -2; i--) {
		for (int j = 0; j < size; j++) {
			new_arr[i] = arr[j-1];
		}
	}
}
