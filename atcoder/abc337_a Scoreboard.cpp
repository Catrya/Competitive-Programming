/*  
https://atcoder.jp/contests/abc337/tasks/abc337_a
A - Scoreboard  / 
Time Limit: 2 sec / Memory Limit: 1024 MB

Score: 100 points

Problem Statement Team Takahashi and Team Aoki played N matches. In the i-th match (1≤i≤N), Team Takahashi scored Xi points, and Team Aoki scored Yi points.

The team with the higher total score from the N matches wins.

Print the winner. If the two teams have the same total score, it is a draw.

Constraints
1≤N≤100
0≤Xi≤100 (1≤i≤N)
0≤Yi≤100 (1≤i≤N)
All input values are integers.

Input
The input is given from Standard Input in the following format:
N 
X1 Y1
​X2 Y2
⋮
Xn Yn
​
Output
If Team Takahashi wins, print Takahashi; if Team Aoki wins, print Aoki; if it is a draw, print Draw.

Sample Input 1
4
10 2
10 1
10 2
3 2
Sample Output 1
Takahashi
In four matches, Team Takahashi scored 33 points, and Team Aoki scored 7 points. Team Takahashi wins, so print Takahashi.

Sample Input 2
6
5 4
4 5
2 4
1 6
7 1
3 2
Sample Output 2
Draw
Both teams scored 22 points. It is a draw, so print Draw.

Sample Input 3
4
0 0
10 10
50 50
0 100
Sample Output 3
Aoki
One or both teams may score no points in a match.

*/

#include <bits/stdc++.h>

using namespace std;

const int maxn = 105;
int X[maxn];
int Y[maxn];

int main()
{
    int N;
    int a=0;
    int b=0;
    cin >> N;

    for (int i=0; i<N; i++){
        cin >> X[i] >> Y[i];
    }

    for (int i=0; i<N; i++){
        a+=X[i];
        b+=Y[i];
    }

    if (a > b){
        cout << "Takahashi";
    }

    else if (a < b){
        cout << "Aoki";
    }

    else cout << "Draw";

    return 0;
}

