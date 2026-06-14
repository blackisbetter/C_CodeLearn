CC = gcc
CFLAGS = -Wall -g
LDFLAGS = -lm

SHARED_DIR = shared
SHARED_SRCS = $(SHARED_DIR)/math_utils.c \
              $(SHARED_DIR)/string_utils.c \
              $(SHARED_DIR)/bit_utils.c \
              $(SHARED_DIR)/array_utils.c \
              $(SHARED_DIR)/menu_utils.c

.PHONY: all clean tictactoe minesweeper

all: tictactoe minesweeper

tictactoe:
	$(CC) $(CFLAGS) \
		C_study_game1/C_study_game1/test.c \
		C_study_game1/C_study_game1/game.c \
		$(SHARED_DIR)/menu_utils.c \
		-IC_study_game1/C_study_game1 \
		-o $@ $(LDFLAGS)

minesweeper:
	$(CC) $(CFLAGS) \
		C_study_game2_saolei/C_study_game2_saolei/test.c \
		C_study_game2_saolei/C_study_game2_saolei/game2.c \
		$(SHARED_DIR)/menu_utils.c \
		-IC_study_game2_saolei/C_study_game2_saolei \
		-o $@ $(LDFLAGS)

clean:
	rm -f tictactoe minesweeper *.o
