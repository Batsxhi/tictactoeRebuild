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

};


