#include "header.h"

int main()
{
	setlocale(LC_ALL, "Rus");

	int key = 0;

	do
	{
		CLS;
		cout
			<< "1 - Создать список и заполнить;" << endl
			<< "2 - Вывести список на экран;" << endl
			<< "3 - Добавить сотрудника;" << endl
			<< "4 - уволить сотрудника;" << endl
			<< "5 - поиск по стажу работы;" << endl
			<< "0 - завершение работы." << endl << endl;
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