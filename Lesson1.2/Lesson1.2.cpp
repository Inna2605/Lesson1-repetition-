/*������� ����������� ��������� ��������� N ���.
�������� ��������, �� ������� ��������� ������� ����������� ��������� ��������(powerbank),
���� ��������� 3 ����� ������ ���������.

������� ��� �������� �������� �� �����������:
�������� ������ � :
������� ����������� ���������(���) -> 3000
����������������������������
������� ���� :
̳�������� ������� : 9000 ���*/

#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "uk_UA");

	cout << "����i�� ���i��� ����������� ���������: ";
	float Capacity;
	cin >> Capacity;
	cout << "\n\n��i����� ������ � :\n"
		<< "���i��� ����������� ���������(���) -> " << Capacity
		<< "\n����������������������������"
		<< "\n���i��i ���i :\n"
		<< "�i�i������ ���i��� powerbank ��� ����������� ������� ���������: " << Capacity * 3 << endl;
}