/*  

A - The bottom of the ninth  / 
Time Limit: 2 sec / Memory Limit: 1024 MB

Score: 100 points

Problem Statement
Team Takahashi and Team Aoki are playing a baseball game, with Team Takahashi batting first.
Currently, the game has finished through the top of the ninth inning, and the bottom of the ninth is about to begin.

Team Takahashi scored Ai runs in the top of the i-th inning (1≤i≤9), and Team Aoki scored Bj runs in the bottom of the 
j-th inning (1≤j≤8).
At the end of the top of the ninth, Team Takahashi's score is not less than Team Aoki's score.
Determine the minimum number of runs Team Aoki needs to score in the bottom of the ninth to win the game.

Here, if the game is tied at the end of the bottom of the ninth, it results in a draw. Therefore, for Team Aoki to win, they must score strictly more runs than Team Takahashi by the end of the bottom of the ninth.
Team Takahashi's score at any point is the total runs scored in the tops of the innings up to that point, and Team Aoki's score is the total runs scored in the bottoms of the innings.

Constraints
0≤Ai,Bj≤99
A1+A2+A3+A4+A5+A6+A7+A8+A9 ≥ B1+B2+B3+B4+B5+B6+B7+B8
All input values are integers.

Input
The input is given from Standard Input in the following format:
A1+A2+A3+A4+A5+A6+A7+A8+A9
B1+B2+B3+B4+B5+B6+B7+B8

Output
Print the minimum number of runs Team Aoki needs to score in the bottom of the ninth inning to win.

Sample Input 1
0 1 0 1 2 2 0 0 1
1 1 0 0 0 0 1 0
Sample Output 1
5
At the end of the top of the ninth inning, Team Takahashi has scored seven runs, and Team Aoki has scored three runs.
Therefore, if Team Aoki scores five runs in the bottom of the ninth, the scores will be 7−8, allowing them to win.
Note that scoring four runs would result in a draw and not a victory.

Sample Input 2
0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0
Sample Output 2
1

*/

#include <bits/stdc++.h>

using namespace std;

const int maxna = 10;
int A[maxna];

const int maxnb = 9;
int B[maxnb];

int main()
{
    for(int i = 1; i< maxna; i++){
        cin >> A[i];
    }

    for(int i = 1; i< maxnb; i++){
        cin >> B[i];
    }

    int c=0;
    for(int i=0; i< maxna; i++){
        c+=A[i];
    }

    int d=0;
    for(int i=0; i< maxnb; i++){
        d+=B[i];
    }

    int f = c+1-d;

    cout << f;

    return 0;
}


