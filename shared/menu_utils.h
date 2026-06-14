#ifndef MENU_UTILS_H
#define MENU_UTILS_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Display a simple game menu with 0=exit and 1=play options.
 * game_title: optional title shown in exit message (can be NULL for default).
 */
void show_game_menu(void);

/*
 * Run the standard game loop: show menu, read input, call game_func on play.
 * game_func: pointer to the function that runs one round of the game.
 * exit_msg: message to print when user chooses to exit.
 */
void run_game_loop(void (*game_func)(void), const char *exit_msg);

#endif /* MENU_UTILS_H */
