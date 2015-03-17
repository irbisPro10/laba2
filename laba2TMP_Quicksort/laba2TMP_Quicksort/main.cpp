///@mainpage Программа для сортировки массива
///@authors Программа сделана студентом группы ИУ8-22 Шабановым Андреем.
///@version v1.0
#include <iostream>
#include "function.h"
using namespace std;

/*!
@brief программа для быстрой сортировки массива

*/
/**@function print функция печати массива
@param arr массив выходящий на печать
@param n длина массива
*/
///@code
void print(int arr[], int n) { 
	for (int i = 0; i <n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}///@endcode

/*!
@fuction 
@brief Главная функция
@brief функция без параметров
@return 0
*/

///@code
int main()
{
	int n;///@param n длина массива

	int i;///@param i счетчик 
	cout << "Array Size: ";
	cin >> n;
	cout << endl;
	int* arr = new int[n];
	
	for (i = 0; i<n; i++) {
		cout << "A[" << i << "]= ";
		cin >> arr[i];
		
	}
	print(arr, n);
	QS(arr, 0, n - 1);
	print(arr, n);
	return 0;
}
