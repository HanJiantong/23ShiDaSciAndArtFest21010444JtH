#include "fail.h"

void fail(int score)
{
	SetConsoleTitleA((LPCSTR)"Snake");
	CONSOLE_CURSOR_INFO cursor_info = { 20, 0 };
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
	system("cls");
	printf("%s", "”Œœ∑\n");
	printf("%s", "------------------------------------------------------------------------------------------------------\n");
	printf("%s", "|                                                                                                    |\n");
	printf("%s", "|                                                                                                    |\n");
	printf("%s", "|                                                                                                    |\n");
	printf("%s", "|                                                                                                    |\n");
	printf("%s", "|                                                                                                    |\n");
	printf("%s", "|                                                                                                    |\n");
	printf("%s", "|                                                                                                    |\n");
	printf("%s", "|                         ___                      ___                                               |\n");
	printf("%s", "|                        /                        /   \\                                              |\n");
	printf("%s", "|                        |___              __     |   |        __                                    |\n");
	printf("%s", "|                        |  /|  --| |-\\/- /  \\    |   | |   | /  \\ | _/                              |\n");
	printf("%s", "|                        \\  || /  | | | | |--/    |   | \\  /  |--/  |                                |\n");
	printf("%s", "|                         ---| \\__| | | | \\__     \\___/  \\/   \\__   |                                |\n");
	printf("|                                   µ√∑÷:%05d                                                       |\n", score);
	printf("%s", "|                                                                                                    |\n");
	printf("%s", "|                                                                                                    |\n");
	printf("%s", "|                                                                                                    |\n");
	printf("%s", "|                                                                                                    |\n");
	printf("%s", "|                                                                                                    |\n");
	printf("%s", "|                                                                                                    |\n");
	printf("%s", "|                                                                                                    |\n");
	printf("%s", "|                                                                                                    |\n");
	printf("%s", "|                                                                                                    |\n");
	printf("%s", "|                                                                                                    |\n");
	printf("%s", "|                                                                                                    |\n");
	printf("%s", "------------------------------------------------------------------------------------------------------\n");
	Beep(750, 250);
	Beep(750, 250);
	system("pause");
	return;
}
