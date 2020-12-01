#include <stdio.h>
#include <stdlib.h>

char square[10] = { ' ',
  ' ',' ',' ',
  ' ',' ',' ',
  ' ',' ',' '
};
int choice, player;

int check_for_win();
int check_if_board_full();
void display_board();
int mark_board(int index, char mark);

int main() {
  int game_status;
  int choice_valid;
  player = 2;
  do {
    player = player == 1 ? 2 : 1;

    printf("Player %d, pick a square!\n> ", player);
    do {
      scanf("%d", &choice);
      choice_valid = mark_board(choice, player == 1 ? 'x' : 'o');
    } while (!choice_valid);

    display_board();

    game_status = check_for_win();
  } while(game_status == -1);

  if (game_status == 1) {
    printf("Player %d WINS!\n", player);
  } else {
    printf("It's a draw!\n");
  }
}

int mark_board(int index, char mark) {
  if (index < 1 || index > 9) {
    printf("That square is not on the board, try again.\n> ");
    return 0;
  } else if (square[index] != ' ') {
    printf("That square is already taken, try again.\n> ");
    return 0;
  } else {
    square[index] = mark;
    return 1;
  }
}

void display_board() {
  printf(
      "#---#---#---#\n"
      "| %c | %c | %c |\n"
      "#---#---#---#\n"
      "| %c | %c | %c |\n"
      "#---#---#---#\n"
      "| %c | %c | %c |\n"
      "#---#---#---#\n\n",
      square[1], square[2], square[3],
      square[4], square[5], square[6],
      square[7], square[8], square[9]
  );
}

int check_for_win() {
  int result = -1;

  // Check horizontal
  int horizontal_starters[] = { 1, 4, 7 };
  for (int i = 0; i < 3; i++) {
    if (square[i] == ' ') {
      continue;
    }

    if (square[i] == square[i+1] && square[i+1] == square[i+2] ) {
      result = 1;
    }
  }

  // Check vertical
  int vertical_starters[] = { 1, 2, 3 };
  for (int i = 0; i < 3; i++) {
    if (square[i] == ' ') {
      continue;
    }

    if (square[i] == square[i+3] && square[i+3] == square[i+6] ) {
      result = 1;
    }
  }

  // Check diagonal
  int diagonal1 = square[1] != ' ' && square[1] == square[5] && square[5] == square[9];
  int diagonal2 = square[3] != ' ' && square[3] == square[5] && square[5] == square[7];
  if (diagonal1 || diagonal2) {
    result = result == -1 ? 0 : result;
  }

  if (result == -1 && check_if_board_full()) {
    result = 0;
  }

  return result;
}

int check_if_board_full() {
  return square[1] != ' '
    && square[2] != ' '
    && square[3] != ' '
    && square[4] != ' '
    && square[5] != ' '
    && square[6] != ' '
    && square[7] != ' '
    && square[8] != ' '
    && square[9] != ' ';
}
