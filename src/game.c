#include "game.h"

int game()
{
	SetConsoleTitleA((LPCSTR)"Snake");
	CONSOLE_CURSOR_INFO cursor_info = { 20, 0 };
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
	short list[26][51] = { 0 }, direction = 0, length = 2, score = 0;
	list[12][24] = 2;
	list[13][24] = 1;
	bool alive = 1;
	short head_i = 12, head_j = 24;
	short food_i = -1, food_j = -1;
	bool length_changed = 0;
	short k = 0;

	while (alive)
	{
		++k;

		if (food_i == -1 && food_j == -1)
		{
			srand((unsigned)time(NULL));
			food_i = rand() % (21 - 3) + 3;
			srand((unsigned)time(NULL));
			food_j = rand() % (46 - 3) + 3;
		}

		if (k == 22000)
		{
			k = 0;
			system("cls");
			printf("%s\n%s\n", "”Œœ∑", "------------------------------------------------------------------------------------------------------");

			for (short i = 0; i < 25; ++i)
			{
				printf("%s", "|");
				for (short j = 0; j < 50; ++j)
				{
					if (i == food_i && j == food_j)
					{
						if (list[i][j] > 0)
						{
							food_i = -1;
							food_j = -1;
							++score;
							Beep(750, 100);
						}
						else
						{
							printf("%s", "~ ");
						}
					}
					if (list[i][j] == length)
					{
						if (length_changed)
						{
							++list[i][j];
						}

						head_i = i;
						head_j = j;
						printf("%s", "><");
						--list[i][j];
					}
					else if (list[i][j] > 0 && list[i][j] < length)
					{
						if (length_changed)
						{
							++list[i][j];
						}

						printf("%s", "[]");
						--list[i][j];
					}
					else if (!(i == food_i && j == food_j))
					{
						printf("%s", "  ");
					}
				}

				printf("%s\n", "|");
			}

			printf("%s\n%s%.5d", "------------------------------------------------------------------------------------------------------", "∑÷ ˝£∫", score);

			if (direction == 0)
			{
				if ((head_i - 1 < 0 || list[head_i - 1][head_j] != 0) && !length_changed)
				{
					alive = 0;
				}

				list[head_i - 1][head_j] = length;
			}
			else if (direction == 1)
			{
				if ((head_j - 1 < 0 || list[head_i][head_j - 1] != 0) && !length_changed)
				{
					alive = 0;
				}

				list[head_i][head_j - 1] = length;
			}
			else if (direction == 2)
			{
				if ((head_i + 1 > 24 || list[head_i + 1][head_j] != 0) && !length_changed)
				{
					alive = 0;
				}

				list[head_i + 1][head_j] = length;
			}
			else if (direction == 3)
			{
				if ((head_j + 1 > 49 || list[head_i][head_j + 1] != 0) && !length_changed)
				{
					alive = 0;
				}

				list[head_i][head_j + 1] = length;
			}

			length_changed = 0;

			if (score / 3 > length - 2)
			{
				++length;
				length_changed = 1;
			}

		}

		if ((GetAsyncKeyState(87) & 0x8000 || GetAsyncKeyState(119) & 0x8000) && direction != 2 &&!length_changed)
		{
			direction = 0;
		}
		else if ((GetAsyncKeyState(65) & 0x8000 || GetAsyncKeyState(97) & 0x8000) && direction != 3 && !length_changed)
		{
			direction = 1;
		}
		else if ((GetAsyncKeyState(83) & 0x8000 || GetAsyncKeyState(115) & 0x8000) && direction != 0 && !length_changed)
		{
			direction = 2;
		}
		else if ((GetAsyncKeyState(68) & 0x8000 || GetAsyncKeyState(100) & 0x8000) && direction != 1 && !length_changed)
		{
			direction = 3;
		}

	}

	return score;
}
