#include "Employee.h"

employee::employee()
{
	cout << "<< ��������� ����������� ��� ��������i� >>" << endl;
}

employee::employee(char* Name, int age, int stage)
{
	cout << "<< ��������� ����������� � ����������� >>" << endl << endl;
	SetName(Name);
	SetAge(age);
	SetStage(stage);
}

employee::employee(const employee &)
{
	cout << "<< ��������� ����������� ���i������  >>" << endl;
}


//��� ��������� ��������� �����
void employee::SetName(char* Name)
{
	strcpy_s(name, Name);
}

void employee::SetAge(int Age)
{
	age = Age;
}

void employee::SetStage(int Stage)
{
	stage = Stage;
}


//��� ������ �� ����� �����
char* employee::GetName()
{
	cout << "��� ���������: " << name;
	return  name;
}

int employee::GetAge()
{
	cout << endl << "�i�: " << age;
	return age;
}

int employee::GetStage()
{
	cout << endl << "����: " << stage;
	return stage;
}

//����������
employee::~employee()
{
	cout << endl << "��� ��������� ����������;" << endl;
}