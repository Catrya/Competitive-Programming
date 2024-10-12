/*  
A - Subsegment Reverse  / 
Time Limit: 2 sec / Memory Limit: 1024 MB

Score : 100 points

Problem Statement
You are given positive integers N, L, and R.
For a sequence A=(1,2,…,N) of length N, an operation of reversing the L-th through R-th elements was performed once.
Print the sequence after this operation.

Constraints
All input values are integers.
1≤L≤R≤N≤100

Input
The input is given from Standard Input in the following format:
N L R

Output
Let A′ =(A1′,A2′,…,AN′) be the sequence after the operation. Print it in the following format:
A1′,A2′,…,AN′

Sample Input 1
5 2 3
Sample Output 1
1 3 2 4 5
Initially, A=(1,2,3,4,5).
After reversing the second through third elements, the sequence becomes (1,3,2,4,5), which should be printed.

Sample Input 2
7 1 1
Sample Output 2
1 2 3 4 5 6 7
It is possible that L=R.

Sample Input 3
10 1 10
Sample Output 3
10 9 8 7 6 5 4 3 2 1
It is possible that L=1 or R=N.
*/

#include <bits/stdc++.h>

using namespace std;

const int maxn = 105;
int A [maxn];

int main()
{

    int N, L, R;
    cin >> N >> L >> R;

    for (int i = 1; i <= N; i++){
        A[i]=i;
    }

    for (int i = L, j = R; i <= j; i++, j--){
        int a = A[j];
        A[j] = A[i];
        A[i] = a;
    }

    for (int i = 1; i <= N; i++){
        if (i != 1){
            cout << " ";
        }

        cout << A[i];
    }
    return 0;
}

