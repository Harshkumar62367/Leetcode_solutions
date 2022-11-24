class Solution {
public:

	bool sol(vector<vector<char>>& board, string word, int i, int j) {

		if (word.length() == 1 && board[i][j] == word[0]) {
			return true;
		}

		if (board[i][j] != word[0]) return false;

		bool result = false;

		if(i > 0) {                
			board[i][j] = '0';
			result = sol(
				board, word.substr(1, word.size() - 1), i - 1, j);
			board[i][j] = word[0];
		}

		if (j > 0 && !result) {
			board[i][j] = '0';
			result = sol(board, word.substr(1, word.size() - 1), i, j - 1);
			board[i][j] = word[0];
		}

		if (i < board.size() - 1 && !result) {
			board[i][j] = '0';
			result = sol(board, word.substr(1, word.size() - 1), i + 1, j);
			board[i][j] = word[0];
		}

		if (j < board[0].size() - 1 && !result) {
			board[i][j] = '0';
			result = sol(
				board, word.substr(1, word.size() - 1), i, j + 1);
			board[i][j] = word[0];
		}

		return result;
	}

	bool exist(vector<vector<char>>& board, string word) {
		char start_char = word[0];
		for (int i = 0; i < board.size(); i++) {
			for (int j = 0; j < board[0].size(); j++) {
				if (board[i][j] == start_char) {
					if(sol(board, word, i, j)) {
						return true;
					};
				}
			}
		}

		return false;
	}
};