#include<iostream>

using namespace std;
char board[9] = {};

int get_move();
void print_board();
void clear_screan();
void clear_board();
bool winer_g(char play);
char game_winner();

int main() {
	clear_board();
	game_winner();
	cout << "The final board load:" << endl;
	print_board();

	return 0;
}

int get_move() {
	cout << "Game board:" << endl;
	cout << "-" << board[0] << "-|-" << board[1] << "-|-" << board[2] << "-" << endl;
	cout << "-" << board[3] << "-|-" << board[4] << "-|-" << board[5] << "-" << endl;
	cout << "-" << board[6] << "-|-" << board[7] << "-|-" << board[8] << "-" << endl;
	cout << "\n";
	cout << "Your move:" << endl;

	int move;
	cin >> move;
	while (move > 9 || move < 1 || board[move-1] != '-') {
		cout << "Please enter a lagace move:" << endl;
		cin >> move;
	}

	return move;
}
void print_board() {
	cout << "Move game:" << endl;
	cout << "-1-|-2-|-3-" << endl;
	cout << "-4-|-5-|-6-" << endl;
	cout << "-7-|-8-|-9-" << endl;
	cout << "\n";
}
void clear_screan() {
	for (int i = 0; i < 10; i++){
		cout << endl;
	}
}
void clear_board() {
	for (int i = 0; i < 9; i++){
		board[i] = '-';
	}
}
bool winer_g(char play) {
	int winer[][3] = { {0,1,2}, {3,4,5},{6,7,8},{0,3,6},{1,4,7},{2,5,8},{2,4,6},{0,4,8} };
	for (int i = 0; i < 8; i++){
		int cound = 0;
		for (int j = 0; j < 3; j++) {
			if (board[winer[i][j]] == play){
				cound++;
			}
			if (cound == 3){
				return true;
			}
		}
	}
	return false;
}
char game_winner() {
	int turn = 1;
	while (!winer_g('X') && winer_g('0')) {
		clear_screan();
		int move = get_move();
		cout << "The move you entered is:" << move << endl;
		if (turn % 2 == 0) {
			board[get_move() - 1] = 'X';
			if (winer_g('X')) {
				cout << "Winner 'X'" << endl;
				return 'X';
			}
		} else {
			board[get_move() - 1] = '0';
			if (winer_g('0')) {
				cout << "Winner '0'" << endl;
				return '0';
			}
		}
		turn++;
		if (turn == 10) {
			cout << "Not Winner!" << endl;
		}
	}
}