#include "header.h"

int main()
{
	setlocale(LC_ALL, "Rus");

	int key = 0;

	do
	{
		CLS;
		cout
			<< "1 - ������� ������ � ���������;" << endl
			<< "2 - ������� ������ �� �����;" << endl
			<< "3 - �������� ����������;" << endl
			<< "4 - ������� ����������;" << endl
			<< "5 - ����� �� ����� ������;" << endl
			<< "0 - ���������� ������." << endl << endl;
		cin >> key;

		switch (key)
		{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 0:
			break;
		default:
			break;
		}
	} while (key != 0);

	return 0;
}