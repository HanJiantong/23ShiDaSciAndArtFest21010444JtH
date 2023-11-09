#include "main.h"

int main()
{
	SetConsoleTitleA((LPCSTR)"Snake");
	CONSOLE_CURSOR_INFO cursor_info = { 20, 0 };  
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);

	while (1)
	{
		int n = menu();

		if (n == 0)
		{
			break;
		}
		else if (n == 1)
		{
			int score = game();
			fail(score);
		}
		else if (n == 2)
		{
			setting();
		}
		else if (n == 3)
		{
			guide();
		}
	}

	return 0;
}
