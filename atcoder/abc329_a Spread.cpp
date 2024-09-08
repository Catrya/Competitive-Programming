/*  
A - Spread  / 
Time Limit: 2 sec / Memory Limit: 1024 MB

Score : 100 points

Problem Statement
You are given a string S consisting of uppercase English letters. Separate each character of S with a space and print them one by one in order.

Constraints
S is a string consisting of uppercase English letters with a length between 2 and 100, inclusive.
Input
The input is given from Standard Input in the following format:
S
Output
Separate each character of S with a space and print them one by one.

Sample Input 1
ABC
Sample Output 1
A B C
Separate A, B, and C with spaces and print them one by one.
There is no need to print a space after C.

Sample Input 2
ZZZZZZZ
Sample Output 2
Z Z Z Z Z Z Z

Sample Input 3
OOXXOO
Sample Output 3
O O X X O O
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string S, B;
    string a = " ";
    cin >> S;
    B= S[0];

    for (int i=1; i<S.length(); i++){
        B += a + S[i];
    }

   cout << B;
    return 0;
}

