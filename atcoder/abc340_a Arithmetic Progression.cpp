/*  
Arithmetic Progression  / 
Time Limit: 2 sec / Memory Limit: 1024 MB

Score: 100 points

Problem Statement
Print an arithmetic sequence with first term A, last term B, and common difference D.

You are only given inputs for which such an arithmetic sequence exists.

Constraints
1≤A≤B≤100
1≤D≤100
There is an arithmetic sequence with first term A, last term B, and common difference D.
All input values are integers.

Input
The input is given from Standard Input in the following format:
A B D
Output
Print the terms of the arithmetic sequence with first term A, last term B, and common difference D, in order, separated by spaces.

Sample Input 1
3 9 2
Sample Output 1
3 5 7 9
The arithmetic sequence with first term 3, last term 9, and common difference 2 is (3,5,7,9).

Sample Input 2
10 10 1
Sample Output 2
10

*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int A, B, D;
    cin >> A >> B >> D;

    for (int i=A; i<=B; i+=D){
        cout << i;
        if(i<B){
            cout << " ";
        }
    }

    return 0;
}

