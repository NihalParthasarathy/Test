#include <iostream>
#include <cstring>

using namespace std;

struct game {
  int board[3][3];
  int turn;
  int move;

};

void printBoard(game board);
void reprint();

int main() {
  struct game newboard;
  struct game X;
  struct game O;
  X.turn = 0;
  O.turn = 1;
  X.move = 1;
  O.move = 2;
  int BLANK = 0;
  char str[2];
  int whosturn = X.turn;
  bool stillPlaying = true;
  bool checkWinX = false;
  bool checkWinO = false;
  bool checkTie = false;
  while (stillPlaying == true) {

  
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      newboard.board[i][j] = BLANK;
      cout << newboard.board[i][j] << endl;
    }
  }
  while (checkWinX == false || checkWinO == false || checkTie == false) {
    
  printBoard(newboard);

  cout << "Enter a letter followed by a number" << endl;

  cin.get(str, 3);
  cin.get();
  cout << str << endl;
  if (str[0] != 'a' && str[0] != 'b' && str[0] != 'c') {
    cout << "first letter must be a b or c" << endl;
  }
  else if (str[1] != '1' && str[1] != '2' && str[1] != '3') {
    cout << "second charector must be either 1 2 or 3" << endl;
  }

  else {
    for (int row = 0; row < 1; row++) {
        for (int colum = 0; colum < 1; colum ++) {


        if (whosturn == X.turn) {
          if (str[0] == 'a' && str[1] == '1' && newboard.board[row][colum] == BLANK)) {
            newboard.board[0][0] = X.move;
	    
          }
	  if (str[0] == 'a' && str[1] == '2' && newboard.board[row][colum] == BLANK)) {
            newboard.board[1][0] = X.move;
	    
          }
          if (str[0] == 'a' && str[1] == '3' && newboard.board[row][colum] == BLANK)) {
            newboard.board[2][0] = X.move;
	    
          }
          if (str[0] == 'b' && str[1] == '1' && newboard.board[row][colum] == BLANK)) {
            newboard.board[0][1] = X.move;
	    
          }
          if (str[0] == 'b' && str[1] == '2' && newboard.board[row][colum] == BLANK)) {
            newboard.board[1][1] = X.move;
	 
          }
          if (str[0] == 'b' && str[1] == '3' && newboard.board[row][colum] == BLANK)) {
            newboard.board[2][1] = X.move;
	    
          }
          if (str[0] == 'c' && str[1] == '1' && newboard.board[row][colum] == BLANK)) {
            newboard.board[0][2] = X.move;
	    
          }
          if (str[0] == 'c' && str[1] == '2' && newboard.board[row][colum] == BLANK)) {
            newboard.board[1][2] = X.move;
	    
          }
          if (str[0] == 'c' && str[1] == '3' && newboard.board[row][colum] == BLANK)) {
            newboard.board[2][2] = X.move;
	    
          }
	  whosturn = O.turn;
	  
        }
	
        else {
          if (str[0] == 'a' && str[1] == '1' && newboard.board[row][colum] == BLANK)) {
            newboard.board[0][0] = O.move;
	    
          }
          if (str[0] == 'a' && str[1] == '2' && newboard.board[row][colum] == BLANK)) {
            newboard.board[1][0] = O.move;
	    
          }
          if (str[0] == 'a' && str[1] == '3' && newboard.board[row][colum] == BLANK)) {
            newboard.board[2][0] = O.move;
	    
          }
          if (str[0] == 'b' && str[1] == '1' && newboard.board[row][colum] == BLANK)) {
            newboard.board[0][1] = O.move;
	    
          }
          if (str[0] == 'b' && str[1] == '2' && newboard.board[row][colum] == BLANK)) {
            newboard.board[1][1] = O.move;
	    
          }
          if (str[0] == 'b' && str[1] == '3' && newboard.board[row][colum] == BLANK)) {
            newboard.board[2][1] = O.move;
	    
          }
          if (str[0] == 'c' && str[1] == '1' && newboard.board[row][colum] == BLANK)) {
            newboard.board[0][2] = O.move;
	    
          }
          if (str[0] == 'c' && str[1] == '2' && newboard.board[row][colum] == BLANK)) {
            newboard.board[1][2] = O.move;
	    
	  }
	  if (str[0] == 'c' && str[1] == '3' && newboard.board[row][colum] == BLANK)) {
            newboard.board[2][2] = O.move;
          }
	  whosturn = X.turn;
	  
        }
      

    }
    }
  }
  }
  }
  return 0;
}

void printBoard(game newboard) {
  //struct game newboard;
  int num = 1;
  cout << "  a b c" << endl;
  for (int i = 0; i < 3; i++) {
    cout << '\0' << endl;
    cout << num;
    num++;
    for (int j=0; j < 3; j++) {
      cout << ' ';
       if (newboard.board[i][j] == 0) {
	 cout << ' ';
       }
       if (newboard.board[i][j] == 1) {
	 cout << 'X';
       }
       if (newboard.board[i][j] == 2) {
	 cout << 'O';
       }
      //cout << newboard.board[i][j] << endl;
    }
    cout << '\0' << endl;
  }
  
}
