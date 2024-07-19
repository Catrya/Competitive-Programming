/*  

A - Adjacent Product  / 
Time Limit: 2 sec / Memory Limit: 1024 MB

Score: 100 points

Problem Statement
You are given N integers A1, A2, ... , AN. Also, define Bi=Ai ×Ai+1(1≤i≤N−1).

Print B1, B2, ... , BN-1 in this order, separated by spaces.

Constraints
2≤N≤100
1≤Ai≤100
All input values are integers.

Input
The input is given from Standard Input in the following format:
N
A1 A2 ... AN
 
Output
Print 
B1, B2, ..., BN-1 in this order, separated by spaces.

Sample Input 1
3
3 4 6
Sample Output 1
12 24
We have B1=A1×A2=12, B2=A2×A3=24.

Sample Input 2
5
22 75 26 45 72
Sample Output 2
1650 1950 1170 3240

*/

#include <bits/stdc++.h>

using namespace std;

const int maxn = 105;
int A[maxn];
int N;
int a=0;

int main()
{
    cin >> N;
    for (int i = 0; i<N; i++){
        cin>> A[i];

    }

    for (int i=1; i<N; i++){
        a= A[i]* A[i-1];

        if (i==N-1){
            cout << a; 
            break; // Para que no muestre espacio después del último número 
        }

        else cout << a << " ";
    }


    return 0;
}

