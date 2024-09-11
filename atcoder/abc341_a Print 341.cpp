/*  
A - Print 341  / 
Time Limit: 2 sec / Memory Limit: 1024 MB

Score: 100 points

Problem Statement
Given a positive integer N, print a string of N zeros and N+1 ones where 0 and 1 alternate.

Constraints
N is an integer.
1≤N≤100

Input
The input is given from Standard Input in the following format:
N
Output
Print the answer.

Sample Input 1
4
Sample Output 1
101010101
A string of four zeros and five ones where 0 and 1 alternate is 101010101.

Sample Input 2
1
Sample Output 2
101

Sample Input 3
10
Sample Output 3
101010101010101010101

*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin >> N;

    for (int i=0; i<N; i++){
        cout << 10;
        if(i==N-1){
            cout << 1;
        }
    }

    return 0;
}

