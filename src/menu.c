#include "menu.h"

#define _CRT_SECURE_NO_WARNINGS

int menu()
{
	char title_list[10][100] = { "ԭ��������", "�ɺ���ͩ����", "��������类��Ĺ���", "114514!", "ԭ����Ҳ��ԭ��", "HOMO���е��޴�����", "��Ϊʲô��ɣ�", "�⣬�ⲻ�԰�", "��һ����ǰ�����", "�㱻ƭ��" };
	srand((unsigned)time(NULL));
	int title_num = rand() % 10;
	char title[100] = "Snake ";
	strcat(title, title_list[title_num]);
	SetConsoleTitleA((LPCSTR)title);
	CONSOLE_CURSOR_INFO cursor_info = { 20, 0 };
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
	system("cls");
	printf("%s\n%s\n%s\n%s\n%s\n%s\n%s\n", "Snake", "------------------------------------------------------------------------------------------------------", "| 1.��Ϸ                                                                                             |", "| 2.����                                                                                             |", "| 3.�̳�                                                                                             |", "|                                                                                                    |", "| 0.�˳�                                                                                             |");

	for (int i = 0; i < 20; ++i)
	{
		printf("%s\n", "|                                                                                                    |");
	}

	printf("%s\n%s\n", "------------------------------------------------------------------------------------------------------", "���¶�Ӧ���ּ��Խ���");
	int ch = _getch();
	return ch - 48;
}
