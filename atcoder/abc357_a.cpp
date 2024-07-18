/*  
A - Sanitize Hands  / 
Time Limit: 2 sec / Memory Limit: 1024 MB

Score : 100 points

Problem Statement
There is a bottle of disinfectant that can disinfect exactly 
M hands.

N aliens come one by one to disinfect their hands.
The i-th alien (1≤i≤N) has Hi hands and wants to disinfect all of their hands once.

Determine how many aliens can disinfect all of their hands.
Here, even if there is not enough disinfectant left for an alien to disinfect all of their hands when they start, they will use up the remaining disinfectant.

Constraints
1≤N,M≤100
1≤Hi≤100
All input values are integers.

Input
The input is given from Standard Input in the following format:
N M
H1 H2 … HN
​
Output
Print the number of aliens who can disinfect all of their hands.
 
Sample Input 1
5 10
2 3 2 5 3
Sample Output 1
3

The aliens disinfect their hands in the following steps:

The first alien disinfects their two hands. The remaining disinfectant can disinfect 10−2=8 hands.
The second alien disinfects their three hands. The remaining disinfectant can disinfect 8−3=5 hands.
The third alien disinfects their two hands. The remaining disinfectant can disinfect 5−2=3 hands.
The fourth alien has five hands, but there is only enough disinfectant for three hands, so they use up the disinfectant without disinfecting all of their hands.
Thus, the first three aliens can disinfect all of their hands, so print 3.

Sample Input 2
5 10
2 3 2 3 5
Sample Output 2
4
Sample Input 3
1 5
1
Sample Output 3
1

*/

#include <bits/stdc++.h>

using namespace std;

const int maxn = 105;
int A[maxn];

int main()
{
    int n , M;


    cin >> n >> M;

    for (int i = 0; i < n; i++){
        cin >> A[i];
    }


    int p = 0;
    int c = 0;
    for (int i =0; i < n; i++){
        p += A[i];
        if(p > M){
            break;
        }
        c ++;
    }

cout << c;

    return 0;
}

