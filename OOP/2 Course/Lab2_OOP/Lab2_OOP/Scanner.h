/************************************************************************
*file: Scanner.h
*author: Bidyak Mikhailo
*written: 03/11/2017
*last modified: 03/11/2017
************************************************************************/

#ifndef SCANNER_H
#define SCANNER_H

//#include <io.h>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <string.h> //strstr

typedef struct {
    int id;//��������� �������������
	char manufacturer[128];// ������������
	int year;	 // �� ������������
	char model[128];// ������������ �����
	float price;// ����
	int x_size;// �������������� ����� ������ ����������
	int y_size;// ������������ ����� ������ ����������
} SCAN_INFO;


void create_db(const char* csv, const char *db);
void print_db(const char*db);
int make_index(const char *db, const char *field_name);
void PrintIDX(const char *field_name);
/*FILE *CSV;
FILE *DB;*/

#endif /* SCANNER_H */
