/*  
A - Not Too Hard  / 
Time Limit: 2 sec / Memory Limit: 1024 MB

Score : 100 points

Problem Statement
There is a programming contest with N problems. For each i=1,2,…,N, the score for the i-th problem is Si.

Print the total score for all problems with a score of X or less.

Constraints
All input values are integers.
4≤N≤8
100≤Si≤675
100≤X≤675

Input
The input is given from Standard Input in the following format:
N  X
S1 S2 ... SN
​
Output
Print the answer.

Sample Input 1
6 200
100 675 201 200 199 328
Sample Output 1
499
Three problems have a score of 200 or less: the first, fourth, and fifth, for a total score of S1 +S4 +S5 =100+200+199=499.

Sample Input 2
8 675
675 675 675 675 675 675 675 675
Sample Output 2
5400

Sample Input 3
8 674
675 675 675 675 675 675 675 675
Sample Output 3
0
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    const int maxn = 10;
    int N, X;
    int S [maxn];
    int a=0;
    cin >> N >> X;

    for (int i=0; i<N; i++){
        cin >> S[i];
    }

    for(int i=0; i<N; i++){
        if (S[i]<=X){
            a+= S[i];
        }
    }

    cout << a;

    return 0;
}

