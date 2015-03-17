#include <iostream>
using namespace std;
/*!@function ������� ���������� �� ������� ���������� ������� 
@param in_arr - �������� ������
@param left - ����� �������
@param right - ������ �������
*/
///@code 
void QS(int arr[], int left, int right) {
	int i = left, j = right;
	int tmp;
	int pivot = arr[(left + right) / 2];

	/*! ���������� ������� */
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

	/*! �������� */
	if (left < j)
		QS(arr, left, j);
	if (i < right)
	QS(arr, i, right);

}///@endcode