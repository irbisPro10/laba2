///@mainpage ��������� ��� ���������� �������
///@authors ��������� ������� ��������� ������ ��8-22 ��������� �������.
///@version v1.0
#include <iostream>
#include "function.h"
using namespace std;

/*!
@brief ��������� ��� ������� ���������� �������

*/
/**@function print ������� ������ �������
@param arr ������ ��������� �� ������
@param n ����� �������
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
@brief ������� �������
@brief ������� ��� ����������
@return 0
*/

///@code
int main()
{
	int n;///@param n ����� �������

	int i;///@param i ������� 
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
