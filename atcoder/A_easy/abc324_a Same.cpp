/*  
A - Same  / 
Time Limit: 2 sec / Memory Limit: 1024 MB

Score : 100 points

Problem Statement
You are given N integers A1, A2,…,AN.

If their values are all equal, print Yes; otherwise, print No.

Constraints
2≤N≤100
1≤Ai≤100 (1≤i≤N)
All input values are integers.

Input
The input is given from Standard Input in the following format:
N
A1, A2,…,AN.

Output
Print a single line containing Yes if the values of the given A1, A2,…,AN are all equal, and No otherwise.

Sample Input 1
3
3 2 4
Sample Output 1
No

Sample Input 2
4
3 3 3 3
Sample Output 2
Yes

Sample Input 3
10
73 8 55 26 97 48 37 47 35 55
Sample Output 3
No
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    const int maxn = 105;
    int A [maxn];
    int N;
    bool b = true;

    cin >> N;

    for (int i=0; i<N; i++){
        cin >> A[i];
    }

    for (int i=0; i<N-1; i++){
        if (A[i]!= A[i+1]){
        b= false;
        break;
        }
    }

    if (b== false) cout << "No";
    else cout << "Yes";

    return 0;
}

