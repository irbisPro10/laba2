#include <iostream>
using namespace std;
/*!@function Функция отвечающая за быструю сортировку массива 
@param in_arr - Входящий массив
@param left - левый счетчик
@param right - правый счетчик
*/
///@code 
void QS(int arr[], int left, int right) {
	int i = left, j = right;
	int tmp;
	int pivot = arr[(left + right) / 2];

	/*! разделение массива */
	while (i <= j) {
		while (arr[i] < pivot)
			i++;
		while (arr[j] > pivot)
			j--;
		if (i <= j) {
			tmp = arr[i];
			arr[i] = arr[j];
			arr[j] = tmp;
			i++;
			j--;
		}
	};

	/*! рекурсия */
	if (left < j)
		QS(arr, left, j);
	if (i < right)
	QS(arr, i, right);

}///@endcode