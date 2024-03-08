#include <iostream>
#include "tictactoe.h"

using namespace std;

enum board_status{ EMPTY = 0, PLAYER_1 = 1, PLAYER_2 = 2}

typedef struct SPIELZUG {
  int x;
  int y;
}spielzug;

string output_board_line(int spielfeld[]){
 string output = "";
  for(int i = 0; i < 3; i++) {
    switch (spielfeld[i]) {
      case EMPTY:
        output += "  ";
        break;

      case PLAYER_1:
        output += "X ";
        break;

      case PLAYER_2:
        output += "O "

      default:

        break;
    }
  }
  return output;
} 




int search_win(int spielfeld[3][3]) {
  int win_counter_1;
  int win_counter_2;
  for(int i = 0; i < 3; i++) {
    win_counter_1 = 0;
    win_counter_2 = 0;
    for(int h = 0; h < 3; h++) {
      if(spielfeld[i][h] == 1) win_counter_1++;
      if(spielfeld[i][h] == 2) win_counter_2++;
    }
    if(win_counter_1 == 3) return 1;
    if(win_counter_2 == 3) return 2;
  }
  for(int i = 0; i < 3; i++) {
    win_counter_1 = 0;
    win_counter_2 = 0;
    for(int h = 0; h < 3; h++) {
      if(spielfeld[h][i] == 1) win_counter_1++;
      if(spielfeld[h][i] == 2) win_counter_2++;
    }
    if(win_counter_1 == 3) return 1;
    if(win_counter_2 == 3) return 2;
  }
  if (spielfeld[1][1] == spielfeld[2][2] == spielfeld[3][3] != 0) return spielfeld[1][1];
  if (spielfeld[1][3] == spielfeld[2][2] == spielfeld[3][1] != 0) return spielfeld[1][3];
  return 0;
}

int search_draw(spielfeld[3][3]) {
  int draw_counter;
  for(int i = 0; i < 3; i++) {
    for(int h = 0; h < 3; h++) {
      if(spielfeld[i][h] == 0) return 0;
    }
  }
  return 3;
}


class TicTacToe{
public:
  int spielfeld[3][3];

  void print() {
    std::cout << " " << " " << "1" << " " << "2" << " " << "3" << enld;
    std::cout << "1" << output_board_line(spielfeld[0]) << endl;
    std::cout << "2" << output_board_line(spielfeld[1]) << endl;
    std::cout << "3" << output_board_line(spielfeld[2]) << endl;
  }

  int possible_move(spielzug koordinaten) {
    if (spielfeld[koordinaten.x][koordinaten.y] == 0) {
      return 0;
    }else {
      return 1;
    }
  }

  int check_win() {
    if (search_win(spielfeld)) return search_win(spielfeld);
    if (search_draw(spielfeld)) return 3;
    return 0;
  }

};


