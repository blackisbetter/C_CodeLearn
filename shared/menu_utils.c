#include "menu_utils.h"

void show_game_menu(void)
{
	printf("******************************\n");
	printf("********    0.exit    ********\n");
	printf("********    1.play    ********\n");
	printf("******************************\n");
}

void run_game_loop(void (*game_func)(void), const char *exit_msg)
{
	int input = 0;
	srand((unsigned int)time(NULL));

	do
	{
		show_game_menu();
		printf("请选择数字:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game_func();
			break;
		case 0:
			printf("%s\n", exit_msg ? exit_msg : "退出游戏");
			break;
		default:
			printf("请输入正确的数字!\n");
			break;
		}
	} while (input);
}
