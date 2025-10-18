#include<bits/stdc++.h>
using namespace std;
class Cell {
private:
    int row;
    int col;

public:
    Cell(int r = 0, int c = 0) : row(r), col(c) {}

    int getRow()  { return row; }
    int getCol()  { return col; }
};
class player{
	private:
		string symbol;
	public:	
	string getsymbol() { return symbol; }
	
};
class move{
	private:
	cell cell;
	player player;
public:
    Move(Cell c, Player p) : cell(c), player(p) {}

    Cell getCell() const { return cell; }
    Player getPlayer() const { return player; }
};
class gameresults{
	bool over;
	string winner;
	public:
		gameresults(bool o,string w){
			over = o;
			winner-w;
		}
};
class board{
	public:
		virtual void move()=0
		virtual board* copy()=0;
		virtual string getcell(int r,int c)=0
};

//-----------------TIC-TAC-TOE-BOARD------------------
class tictactoe:public Board{
	tictactoeboard(){
		for(int i=0;i<3;i++){
			for (int j=0;j<3;j++){
				board[i][j]='';
			}
		}
	}
	void setcell(cell c, string symbol){
		board[c.getrow()][c.getcol()]=symbol;
	}
	string getcell(int r, int c){
		return board[r][c];
	}
	void move(Move &m) override{
		setcell(m.getcell(),m.getplayer().getsymbol());
		
	}
	board *copy() override{
	tictactoeboard *newboard =new
	board* copy() override{
	for intj=0;j<3;j++}{
	newboard->board[i][j]=maths}
	}
};
	
