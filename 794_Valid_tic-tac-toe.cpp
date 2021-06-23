class Solution {
public:
     bool validTicTacToe(vector<string>& board) {
        int count_o=0, count_x=0;
        for(auto c : board){
            for(int i=0;i<3;i++){
                if(c[i]=='X') count_x++;
                else if(c[i]=='O') count_o++;
            }
        }
       // cout << count_x << "   " << count_o;
        if(count_o > count_x || count_x-count_o>1) {
          ///  cout<<1;
            return false;
        }
        
        // x-win
        bool xwin=false, owin=false;
        
        if(board[0]=="XXX" || board[1]=="XXX" || board[2]=="XXX") xwin=true;
        for(int i=0;i<3;i++){
            if(board[0][i]=='X' && board[1][i]=='X' && board[2][i]=='X') xwin=true;
            if(board[0][i]=='O' && board[1][i]=='O' && board[2][i]=='O') owin=true;
        }
        
        if(board[0][0]=='X' && board[1][1]=='X' && board[2][2]=='X') xwin=true;
        if(board[0][0]=='O' && board[1][1]=='O' && board[2][2]=='O') owin=true;
        if(board[0][2]=='X' && board[1][1]=='X' && board[2][0]=='X') xwin=true;
        if(board[0][2]=='O' && board[1][1]=='O' && board[2][0]=='O') owin=true;
        
        
        // o-win
        if(board[0]=="OOO" || board[1]=="OOO" || board[2]=="OOO") owin=true;
        
        if(xwin && owin){
          //  cout << 2;
            return false;
        }
        
        // if x-win
        if(xwin){
            if(count_x != count_o+1) {
          //      cout << 3;
                return false;
            }
        }
        
        
        if(owin){
            if(count_x != count_o) return false;
        }
      //  cout << 5;
        return true;
    }
};
