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
			CLS;
			cout << "������� ������ ������: ";
			cin >> temp_length;
			flush_stdin();
			list.create(temp_length);
			for (int i = 0; i < temp_length; i++)
			{
				CLS;
				cout << "�������� - " << temp_length - i << endl;
				cout << "������� ������� � �������� ����������: ";
				getline(cin, temp_name);
				cout << "������� ���������� ���������(junior, middle or senior): ";
				cin >> temp_post;
				flush_stdin();
				cout << "������� ��� ����������� �� ������: ";
				cin >> temp_year;
				flush_stdin();
				list.fill(temp_name, temp_post, temp_year, i);
			}
			break;
		case 2:
			CLS;
			cout << "ID" << "\t\t\t" << "�.�.�." << "\t\t\t" << "\t���������" << "\t\t\t" << "��� �����������" << endl;
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