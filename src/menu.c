#include "menu.h"

#define _CRT_SECURE_NO_WARNINGS

int menu()
{
	char title_list[10][100] = { "原神，启动！", "由韩健桐制作", "我是神里绫华的狗！", "114514!", "原来你也玩原神", "HOMO特有的无处不在", "鸟，为什么会飞？", "这，这不对吧", "有一个人前来买瓜", "你被骗了" };
	srand((unsigned)time(NULL));
	int title_num = rand() % 10;
	char title[100] = "Snake ";
	strcat(title, title_list[title_num]);
	SetConsoleTitleA((LPCSTR)title);
	CONSOLE_CURSOR_INFO cursor_info = { 20, 0 };
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
	system("cls");
	printf("%s\n%s\n%s\n%s\n%s\n%s\n%s\n", "Snake", "------------------------------------------------------------------------------------------------------", "| 1.游戏                                                                                             |", "| 2.设置                                                                                             |", "| 3.教程                                                                                             |", "|                                                                                                    |", "| 0.退出                                                                                             |");

	for (int i = 0; i < 20; ++i)
	{
		printf("%s\n", "|                                                                                                    |");
	}

	printf("%s\n%s\n", "------------------------------------------------------------------------------------------------------", "按下对应数字键以进入");
	int ch = _getch();
	return ch - 48;
}
