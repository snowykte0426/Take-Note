#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <windows.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

long long subject_arr[350][350], Craftsman_Information_Processing_Warring = 0, Craftsman_Information_Processing_Error = 0;
enum{
	BLACK,
	DARK_BLUE,
	DARK_GREEN,
	DARK_SKYBLUE,
	DARK_RED,
	DARK_VIOLET,
	DAKR_YELLOW,
	GRAY,
	DARK_GRAY,
	BLUE,
	GREEN,
	SKYBLUE,
	RED,
	VIOLET,
	YELLOW,
	WHITE,
};
void List() {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), RED);
	printf("----------------------\n");
	printf("PCM(Pulse Code Modulation)�� ���� - 1\n���� ��ȣ�������� ����Ű��Ʈ ǥ��ȭ �ֱ� - 2\n");
	printf("EBCDIC(Extended BCD Interchange Code)���� Zone ��Ʈ�� ���� - 3\n���� ó���� ������ ��ġ - 4\n");
	printf("���� ����Ŭ(Instruction Cycle)�� ���� - 5\nDBMS����� ������� - 6\nUNIX�� �α׾ƿ� ���ɾ� - 7\n");
	printf("UiNX���ɾ�� MS-DOS���ɾ��� �� - 8\n���� �ּ�(Absolute Address)�� ���� - 9\n���� �ּ�(Indirect Address)�� ���� - 10");
	printf("\n�ֱ�� ��ġ���� ��� ��ġ�� ���� - 11\n���ڴ�(Encoder)�� ��� - 12\n���� ��Ÿ�(Mesh Communications Network)���� ��(Station)�� ������ ���� ��� ȸ�� - 13\n");
	printf("��� �ּ� ǥ�� ����� ���� - 14\n");
	printf("----------------------\n");
}
void Def_Sy() {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BLUE);
	printf("----------------------\n");
	if (Craftsman_Information_Processing_Error < 1)
		Craftsman_Information_Processing_Error++;
	else
		Sleep(10);
}
void Pulse_Code_Modulation() {
	printf("��ȣ �� ǥ��ȭ �� ����ȭ �� ��ȣȭ �� ��ȣȭ\n");
	return 1;
}
void Nyquist_Sampling_Theorem() {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BLUE);
	printf("����Ű��Ʈ ǥ��ȭ �ֱ�� �������� ��ȣ�������� �ְ� ���ļ��� ���̴�\nEx)W[Hz]�� �� ����Ű��Ʈ ǥ��ȭ �ֱ�� ��W\n");
}
void Extended_BCD_Interchange_Code_Zone_bit() {
	printf("EBCDIC�ڵ�� Ȯ�� 2��ȭ 10�� �ڵ�� Zone�� 4bit / Digit�� 4bit�� ����\n8bit�� 256���� ǥ���� ����\n");
}
void Sequential_Access_Storage_Machine() {
	printf("�ڱ� ������(Magnetic Tape)�� ���� ���� ��� ��ġ�� �ش�\n");
}
void Instruction_Cycle() {
	printf("���� ����Ŭ(Instruction Cycle)�� ���� ����Ŭ(Fetch Cycle),���� ����Ŭ(Fectch Cycle),\n���� ����Ŭ(Execution Cycle),���ͷ�Ʈ ����Ŭ(Interrupt Cycle)�� ����\n");
}
void UNIX_Command_and_MS_DOS_Command() {
	long long command_list_with_UNIX_MSDOS[5][3] = {
		{"UNIX ���ɾ�\t", "MS-DOS ���ɾ�\t","����\n"},
		{ "ls\t\t","dir\t\t","������ ���͸��� ������ ������\n" },
		{ "cp\t\t", "COPY\t\t", "���� ���� ����\n" },
		{ "cd\t\t", "CD\t\t", "���丮 ��� ����\n" },
		{ "rmdir\t\t", "RD\t\t", "���丮 ���� ����\n" }
	};
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 3; j++)
			printf("%s", command_list_with_UNIX_MSDOS[i][j]);
	}
}
long long Subject_Arr_Def() {
		subject_arr[6][6]   = "�����ͺ��̽� ���� �ý���(DBMS, Databases Management System)�� ����,����,���� ������� ����\n";
		subject_arr[7][7]   = "UNIX�� �α׾ƿ� ���ɾ�� [Ctrl] + [D],logout,exit�� ����\n";
		subject_arr[9][9]   = "���� �ּ�(Absolute Address)�� �ּ� �κ��� ���� ���� �����Ͱ� �ִ� �ֱ�� ��ġ ���� �ּҸ� ��Ÿ����\n�ܼ��� ���� ���� ������ �ϴµ� ���\n";
		subject_arr[10][10] = "���� �ּ�(Indirect Address)�� �޸� ���� Ƚ���� 2ȸ �̻��̸� ���ɾ��� �ּ� �κ��� ��� ����� ���� ������ �ּҷ� ���\n";
		subject_arr[11][11] = "�ֱ�� ��ġ���� ��� ��ġ�� ������ ��巹��(Address)�� ���� �̷������\n�� ��� ��ġ ���� �ּҸ� ����ϴ� ��ġ�� �ּ� ��������(Address Register)�� ��Ī\n";
		subject_arr[12][12] = "���ڴ�(Encoder)�� 2������ �Է��� �޾� n���� �����͸� ����ϰ� OR ����Ʈ�� �����Ǹ�\n��ȣ��� ��Ī";
		subject_arr[13][13] = "��(Mesh)�� ��Ÿ����� ��(Station)�� ������ 'n'�̶� Ī�Ѵٸ�\n��� ȸ���� ���� �� n(n-1)/2 �� ���Ŀ� ���� ��� ȸ���� ���� ���� �� ������\n10���� ���� ���� �� ��� ȸ�� 45���� ���� ����\n";
		subject_arr[14][14] = "��� �ּ� ǥ�� ����� �ٸ� ���� '��꿡 ���� �ּ�' ����� ���ϸ�\n��������(Register)�� �̿��ϰ� �ּ��� �Ϻκ��� ������ ���\n";
		return subject_arr;
}
int Craftsman_Information_Processing(void) {
	while (true) {	
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), WHITE);
		Subject_Arr_Def();
		for(;Craftsman_Information_Processing_Warring < 1;Craftsman_Information_Processing_Warring++)
			printf("ī�װ��� �������� ���ư����� B��,���α׷��� �����Ͻ÷��� Q�� �Է����ּ���\n");
		printf("ã���ô� �׸��� ��ȣ�� �Է����ּ���(0�� �Է��ϸ� ������ �ҷ��ɴϴ�): ");
		int subject = 22000, subject_charsync;
		if (Craftsman_Information_Processing_Error >= 1)
			subject = 22000, subject_charsync = NULL;
		scanf("%d", &subject);
		if (subject != 22000)
			scanf("%c", &subject_charsync);
		if (subject == 0 && subject_charsync != 0) {
			List();
			continue;
		}
		if (subject == 1) {
			Def_Sy();
			Pulse_Code_Modulation();
			Def_Sy();
			continue;
		}
		if (subject == 2) {
			Def_Sy();
			Nyquist_Sampling_Theorem();
			Def_Sy();
			continue;
		}
		if (subject == 3) {
			Def_Sy();
			Extended_BCD_Interchange_Code_Zone_bit();
			Def_Sy();
			continue;
		}
		else {
			switch (subject) {
				case 4:
					Def_Sy();
					Sequential_Access_Storage_Machine();
					Def_Sy();
					continue;
				case 5:
					Def_Sy();
					Instruction_Cycle();
					Def_Sy();
					continue;
				case 8:
					Def_Sy();
					UNIX_Command_and_MS_DOS_Command();
					Def_Sy();
					continue;
				default:
					if (subject_charsync == 'B') {
						printf("\n");
						return 1;
					}
					else if (subject_charsync == 'Q')
						exit(1);
					else {
						Def_Sy();
						printf("%s", subject_arr[subject][subject]);
						Def_Sy();
						continue;
					}
			}
		}
	}
	return 1;
}
int main(void) {
	SetConsoleTitle(TEXT("Take_Note"));
	error_category:
	printf("���ϴ� ������ ī�װ��� ��ȣ�� �Է����ּ���(0�� �Է��ϸ� ī�װ��� ������ �ҷ��ɴϴ�): ");
	unsigned short category = 15000,  category_char = NULL;
	scanf("%d", &category);
	if (category == 15000) {
		scanf("%c", &category_char);
	}
	if (category == 0 && category_char == 0) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), RED);
		printf("----------------------\n����ó����ɻ� �ʱ� - 1\n");
		printf("----------------------\n");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), WHITE);
		goto error_category;
	}
	switch (category) {
	case 1:
		printf("\n");
		Craftsman_Information_Processing();
		goto error_category;
	default:
		if (category_char == 'Q')
			exit(1);
		else if (category_char == 'QUIT')
			exit(1);
		else {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), RED);
		printf("----------------------\n�������� �ʴ� ī�װ����Դϴ�!!\n----------------------\n");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), WHITE);
		goto error_category;
		}
	}
	return 0;
}