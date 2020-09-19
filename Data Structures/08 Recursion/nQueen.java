// Given a chess board of size NxN and N number of queens, print possible combinations
//  of placing all the queens, such that no queen can kill another.
// A queen can move in all the eight possible directions.
// Input format : a number n
// Ouput format: safe configuration of queens
// Constraints : 1<=n<=10
// >>==>> Sample Input: 4
// >>==>> Sample Output: 
// 0-1, 1-3, 2-0, 3-2, .
// 0-2, 1-0, 2-3, 3-1, .

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

public class nqueen {
    // >>==>> I have taken input from the console using BufferedReader,
    //        you can skip this part, and directly provide arguments to the driver function
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

    public static void main(String[] args) throws IOException {
        String[] line1 = br.readLine().trim().split("\\s+");

        int n = Integer.parseInt(line1[0]);
        int[][] board = new int[n][n];

        driver(board, 0, 0, n, "");

    }
    // this function checks if a queen can be placed at the given position on the board
    public static boolean isSafe(int[][] board, int r, int c) {

        if (r >= 0 && c >= 0 && r < board.length && c < board[0].length && board[r][c] != 1) {

            // >>==>> row check to make sure a queen is already not present on the board.
            for (int i = c - 1; i >= 0; i--) {
                if (board[r][i] == 1)
                    return false;
            }
            // >>==>> col check to make sure a queen is already not present on the board.
            for (int i = r - 1; i >= 0; i--) {
                if (board[i][c] == 1)
                    return false;
            }
            // >>==>> diagonal check to make sure a queen is already not present on the board.
            for (int i = r - 1, j = c - 1; i >= 0 && j >= 0; i--, j--) {
                if (board[i][j] == 1)
                    return false;
            }
            // >>==>> anti diagonal check to make sure a queen is already not present on the board.
            for (int i = r - 1, j = c + 1; i >= 0 && j < board[0].length; i--, j++) {
                if (board[i][j] == 1)
                    return false;
            }
            return true;
        }
        return false;
    }
    // qspf: queen placed so far
    // tnq: totatl number of queens to be placed, which is n in our case
    // ans: String in which we will display the output.
    public static void driver(int[][] board, int row, int qpsf, int tnq, String ans) {
        if (qpsf == tnq) { // when qpsf = tnq, it means all the queens have been placed correctly, and we should print the answer.
            System.out.println(ans + ".");
            return;
        }
        for (int j = 0 ; j < board[0].length;j++){
            if (isSafe(board,row,j)){
                board[row][j] = 1;  // block the position on the board to signify a queen is placed
                driver(board,row+1,qpsf+1,tnq,ans + row + "-" + j + ",");
                board[row][j] = 0; // unblock the position that was marked earlier when backtracking
            }
        }
    }
}