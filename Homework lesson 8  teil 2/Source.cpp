#include <iostream>
#include <conio.h>
#include <time.h>
using namespace std;

int hod_computer();
int hod_player();
void vivod_1();
void vivod_2();
void vivod_3();
void vivod_4();
void vivod_5();
void vivod_6();
void resultat(int sum_computer, int sum_player);

void main()
{
	setlocale(LC_ALL, "Rus");
	cout << "\t\t\t ���� � ������\n\n";
	cout << "������� ����: \n\n";
	cout << "����� � ��������� �� ������� ������� ��� ������.\n";
	cout << "������ ������ ���� �������. � ����� ������������ ������� �����.\n";
	cout << "��������� ���, � ���� ����� ����� ������\n\n";
	cout << "��� ����� ������ ������?\n";
	cout << "���� ��������� - ������� 0. ���� ����� - ������� 1."<<endl;
	int hod; hod=_getch();
	//cout << hod<< endl<< endl;
	srand(time(NULL));
	int sum_computer = 0;
	int sum_player = 0;
	do
	{
		if (hod == 48)
		{
			cout << "\n��� ���������� �1" << endl;
			sum_computer+=hod_computer();
			cout << "\n��� ������ �1" << endl;
			sum_player+=hod_player();
		}
		else if (hod == 49)
		{
			cout << "\n��� ������ �1" << endl;
			sum_player += hod_player();
			cout << "\n��� ���������� �1" << endl;
			sum_computer += hod_computer();
		}
		else
		{
			cout << "\n\n��������� ����!  ";
			hod = _getch();
		}
	} while (hod != 48 && hod != 49);

	for (int i = 0; i < 4; i++)
	{
		if (hod == 49)
		{
			cout << "��� ������ �"<<i+2 << endl;
			sum_player += hod_player();
			cout << "��� ���������� �" << i + 2 << endl;
			sum_computer += hod_computer();
		}
		else
		{
			cout << "��� ���������� �" << i+2 << endl;
			sum_computer += hod_computer();
			cout << "��� ������ �" << i + 2 << endl;
			sum_player += hod_player();
		}
	}
	cout << "\n\n��������� ����������: " << sum_computer << "�����";
	cout << "\n\n��������� ������: " << sum_player << "�����";
		resultat(sum_computer, sum_player);
}

int hod_computer()
{
	int sum_computer=0;
	for (int i = 0;i < 2;i++)
	{
		int punkte = rand()%6;
		while (punkte == 0)
		{
			punkte = rand() % 6;
		}
		if (punkte == 1)
		{
			vivod_1();
			sum_computer += punkte;
		}

		else if (punkte == 2)
		{
			vivod_2();
			sum_computer += punkte;
		}
		else if (punkte == 3)
		{
			vivod_3();
			sum_computer += punkte;
		}
		else if (punkte == 4)
		{
			vivod_4();
			sum_computer += punkte;
		}
		else if (punkte == 5)
		{
			vivod_5();
			sum_computer += punkte;
		}
		else if (punkte == 6)
		{
			vivod_6();
			sum_computer += punkte;
		}
		cout << endl<< endl;
	}
	return sum_computer;
}

int hod_player()
{
	int hod_player;
	int sum_player=0;
	cout << "��� ���������� ���� ������� Enter" << endl;
	for (int i = 0;i < 2;i++)
	{
		hod_player = _getch();
		while (hod_player != 13)
		{
			cout << "��� ���������� ���� ������� Enter" << endl;
			hod_player = _getch();
		}
		int punkte = rand() % 6;
		while (punkte == 0)
		{
			punkte = rand() % 6;
		}
		if (punkte == 1)
		{
			vivod_1();
			sum_player += punkte;
		}
		else if (punkte == 2)
		{
			vivod_2();
			sum_player += punkte;
		}
		else if (punkte == 3)
		{
			vivod_3();
			sum_player += punkte;
		}
		else if (punkte == 4)
		{
			vivod_4();
			sum_player += punkte;
		}
		else if (punkte == 5)
		{
			vivod_5();
			sum_player += punkte;
		}
		else if (punkte == 6)
		{
			vivod_6();
			sum_player += punkte;
		}
		cout << endl << endl;
	}
	return sum_player;
}

void vivod_1()
{
	for (int i = 0;i < 3;i++)
	{
		for (int j = 0;j < 3;j++)
		{
			if (i == 1 && j == 1) cout << char(42)<< char(32);
			else cout << char(32) << char(32);
		}
		cout << endl;
	}
}

void vivod_2()
{
	for (int i = 0;i < 3;i++)
	{
		for (int j = 0;j < 3;j++)
		{
			if (i == 0 && j == 2) cout << char(42) << char(32);
			else if (i == 2 && j == 0) cout << char(42) << char(32);
			else cout << char(32) << char(32);
		}
		cout << endl;
	}
}


void vivod_3()
{
	for (int i = 0;i < 3;i++)
	{
		for (int j = 0;j < 3;j++)
		{
			if (i == 0 && j == 2) cout << char(42) << char(32);
			else if (i == 2 && j == 0) cout << char(42) << char(32);
			else if (i == 1 && j == 1) cout << char(42) << char(32);
			else cout << char(32) << char(32);
		}
		cout << endl;
	}
}

void vivod_4()
{
	for (int i = 0;i < 3;i++)
	{
		for (int j = 0;j < 3;j++)
		{
			if (i == j && i!=1) cout << char(42) << char(32);
			else if (i == 2 && j == 0) cout << char(42) << char(32);
			else if (i == 0 && j == 2) cout << char(42) << char(32);
			else cout << char(32) << char(32);
		}
		cout << endl;
	}
}
void vivod_5()
{
	for (int i = 0;i < 3;i++)
	{
		for (int j = 0;j < 3;j++)
		{
			if (i == j) cout << char(42) << char(32);
			else if (i == 2 && j == 0) cout << char(42) << char(32);
			else if (i == 0 && j == 2) cout << char(42) << char(32);
			else cout << char(32) << char(32);
		}
		cout << endl;
	}
}

void vivod_6()
{
	for (int i = 0;i < 3;i++)
	{
		for (int j = 0;j < 3;j++)
		{
			if (j!=1) cout << char(42) << char(32);
			else cout << char(32) << char(32);
		}
		cout << endl;
	}
}

void resultat(int sum_computer, int sum_player)
{
	if (sum_computer == sum_player) cout << "\n\n�����! �������� ������!";
	else 
		sum_computer > sum_player ? cout << "\n\n������� ���������!" : cout << "\n\n������� �����!";
}