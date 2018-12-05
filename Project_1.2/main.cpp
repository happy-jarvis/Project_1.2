#include "header.h"
#include "list.h"

void flush_stdin();

int main()
{
	setlocale(LC_ALL, "Rus");

	List list;
	int key = 0;

	string temp_name = " ";
	string temp_post = " ";
	int temp_year = 0;
	int temp_length = 0;
	Worker temp;

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
			CLS;
			cout << "Введите размер списка: ";
			cin >> temp_length;
			flush_stdin();
			list.create(temp_length);
			for (int i = 0; i < temp_length; i++)
			{
				CLS;
				cout << "Осталось - " << temp_length - i << endl;
				cout << "Введите фамилию и инициалы сотрудника: ";
				getline(cin, temp_name);
				cout << "Введите занимаемую должность(junior, middle or senior): ";
				cin >> temp_post;
				flush_stdin();
				cout << "Введите год поступления на работу: ";
				cin >> temp_year;
				flush_stdin();
				list.fill(temp_name, temp_post, temp_year, i);
			}
			break;
		case 2:
			CLS;
			cout << "ID" << "\t\t\t" << "Ф.И.О." << "\t\t\t" << "\tДолжность" << "\t\t\t" << "Год поступления" << endl;
			for (int i = 0; i < temp_length; i++) list.show(i);
			PAUSE;
			break;
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

void flush_stdin()
{
	cin.clear();
	while (cin.get() != '\n');
}