#include<iostream>
#include<conio.h>
using namespace std;
#define Left 75
#define Right 77
void main()
{
	setlocale(LC_ALL, "Russian");
	cout << "��� ����� ���� �������� ������� �� Enter: " << endl;
	char program;
	do {
		setlocale(LC_ALL, "Russian");
		int chislo = 0;
		int ostatok = 0;
		int sleduyshee_chislo = 0;
		int coll = 0;
		int mas[15];
		const int cezar = 10;
		int array[cezar] = { 1,2,3,4,5,6,7,8,9,10 };
		program = _getch();
		switch (program)
		{
		case '1':
			system("CLS");
			cout << "������� ����� ����������� ������� ������� �����: "; cin >> chislo;
			for (int i = 0; i < cezar; i++)
			{
				cout <<"������ "<< array[i] << "\t";
			}
			cout << endl;
			for (int j = 0; j < chislo; j++)
			{
				int buffer = array[0];
				for (int i = 1; i < cezar; ++i)
				{
					array[i - 1] = array[i];
				}
				array[cezar - 1] = buffer;
			}
			for (int i = 0; i < cezar; i++)
			{
				cout << "��������� ������ "<<array[i] << "\t";
			}
			cout << endl;
			cout << "������� ����� �������� ��������� ��� ������� Enter, ����� ����� � ����: " << endl;
			break;
		case '2':
			system("CLS");
			cout << "������� ����� ����������� ������� ������� ������: "; cin >> chislo;
			for (int i = 0; i < cezar; i++)
			{
				cout << "������ " << array[i] << "\t";
			}
			cout << endl;
			for (int j = 0; j < chislo; j++)
			{
				int buffer = array[cezar - 1];//������� ������� ����� ���������
				for (int i = cezar - 2; i >= 0; --i)
				{
					array[i + 1] = array[i];
				}
				array[0] = buffer;
			}
			cout << endl;
			for (int i = 0; i < cezar; i++)
			{
				cout << "��������� ������ " << array[i] << "\t";
			}
			cout << endl;
			cout << "������� ����� �������� ��������� ��� ������� Enter, ����� ����� � ����: " << endl;
			break;


		case'3':
			system("CLS");
			cout << "������� �����:"; cin >> chislo;
			do {
				ostatok = chislo % 2;
				sleduyshee_chislo = chislo / 2;
				chislo /= 2;
				mas[coll] = ostatok;
				coll++;
			} while (sleduyshee_chislo != 0 && sleduyshee_chislo != 1);
			mas[coll] = chislo;
			coll++;
			for (int i = coll - 1; i >= 0; --i)
			{
				cout << mas[i]  ;
			}
			cout << endl;
			cout << "������� ����� �������� ��������� ��� ������� Enter, ����� ����� � ����: " << endl;
			break;
		case '4':
			
			system("CLS");
			cout << "������� �����:"; cin >> chislo;
			do {
				ostatok = chislo % 16;
				sleduyshee_chislo = chislo / 16;
				chislo /= 16;
				mas[coll] = ostatok;
				coll++;
			} while (sleduyshee_chislo >= 16);
			mas[coll] = chislo;

			for (int i = coll; i >= 0; --i)
			{
				switch (mas[i])
				{
				case 10:cout << 'A'; break;
				case 11:cout << 'B'; break;
				case 12:cout << 'C'; break;
				case 13:cout << 'D'; break;
				case 14:cout << 'E'; break;
				case 15:cout << 'F'; break;
				case 16:cout << '10'; break;
				case 17:cout << '11'; break;
				case 18:cout << '12'; break;
				case 19:cout << '13'; break;
				case 20:cout << '14'; break;

				default:cout << mas[i];
					break;
				}
			}
			cout << endl;
			cout << "������� ����� �������� ��������� ��� ������� Enter, ����� ����� � ����: " << endl;
			break;

		case '5':
			system("CLS");
			char dvizh;
			cout << "����� ���������� �������� �������, �������� �� ������� ""\"����� �����""\" ��� �� 'A' � 'D' � ���������� ���������:";
			do {
				dvizh = _getch();
				switch (dvizh)
				{

				case'�':case'a':case Left:
					system("CLS");
					cout << "����� ���������� �������� �������, �������� �� ������� ""\"����� �����""\" ��� �� 'A' � 'D':";
					cout << endl;
					for (int j = 0; j < 1; j++)
					{
						int buffer = array[0];
						for (int i = 1; i < cezar; ++i)
						{
							array[i - 1] = array[i];
						}
						array[cezar - 1] = buffer;
					}
					for (int i = 0; i < cezar; i++)
					{
						cout << array[i] << "\t";
					}
					cout << endl;

					break;
				case'�':case'd':case Right:
					system("CLS");
					cout << "����� ���������� �������� �������, �������� �� ������� ""\"����� �����""\" ��� �� 'A' � 'D':";
					cout << endl;
					for (int j = 0; j < 1; j++)
					{
						int buffer = array[cezar - 1];//������� ������� ����� ���������
						for (int i = cezar - 2; i >= 0; --i)
						{
							array[i + 1] = array[i];
						}
						array[0] = buffer;
					}

					for (int i = 0; i < cezar; i++)
					{
						cout << array[i] << "\t";
					}
					cout << endl;
					
					break;
				
				}
			} while (dvizh != 27);
			cout << "������� ����� �������� ��������� ��� ������� Enter, ����� ����� � ����: " << endl;
			break;
		case 13:
			system("CLS");
			cout << "��������� �1 ""\"����� ������� �����""\": " << endl;
			cout << "��������� �2 ""\"����� ������� ������""\": " << endl;
			cout << "��������� �3 ""\"��������������� �� ����������� ����� � �������� ������� ���������""\": " << endl;
			cout << "��������� �4 ""\"��������������� �� ����������� ����� � ����������������� ������� ���������""\": " << endl;
			cout << "��������� �5 ""\"����� ������� �����, ��� ������, �� ������ ������������""\": " << endl;
			cout << "������� ����� ���������: " << endl;
			break;
		default: if (program != 27) cout << "��� ����� ���� �������� ������� �� Enter: " << endl;
			break;
		}
	} while (program != 27);
}