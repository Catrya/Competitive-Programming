/*  
A - Zero Sum Game  / 
Time Limit: 2 sec / Memory Limit: 1024 MB

Score: 100 points

Problem Statement
There are N people labeled 1 to N, who have played several one-on-one games without draws. Initially, each person started with 0 points. In each game, the winner's score increased by 
1 and the loser's score decreased by 1 (scores can become negative). Determine the final score of person N if the final score of person i (1≤i≤N−1) is Ai. It can be shown that the final score of person N is uniquely determined regardless of the sequence of games.

Constraints
2≤N≤100
−100≤Ai≤100
All input values are integers.

Input
The input is given from Standard Input in the following format:
N
A1 A2 ... AN-1

Output
Print the answer.

Sample Input 1
4
1 -2 -1
Sample Output 1
2
Here is one possible sequence of games where the final scores of persons 1,2,3 are 1,−2,−1, respectively.

Initially, persons 1,2,3,4 have 0,0,0,0 points, respectively.
Persons 1 and 2 play, and person 1 wins. The players now have 
1,−1,0,0 point(s). Persons 1 and 4 play, and person 4 wins. The players now have 0,−1,0,1 point(s). Persons 1 and 2 play, and person 1 wins. The players now have 1,−2,0,1 point(s). Persons 2 and 3 play, and person 2 wins. The players now have 
1,−1,−1,1 point(s). Persons 2 and  4 play, and person 4 wins. The players now have 1,−2,−1,2 point(s). In this case, the final score of person  4 is 2. Other possible sequences of games exist, but the score of person 4 will always be 2 regardless of the progression.

Sample Input 2
3
0 0
Sample Output 2
0

Sample Input 3
6
10 20 30 40 50
Sample Output 3
-150
*/

#include <bits/stdc++.h>

using namespace std;

const int maxn = 105;
int A[maxn];
int N;

int main()
{
    cin >> N;

    int a = 0;
    for (int i=0; i < N-1; i++){
    cin >> A[i];
    }

    for (int i=0; i<N; i++){
    a-= A[i];
    }
    cout << a;

    return 0;
}


