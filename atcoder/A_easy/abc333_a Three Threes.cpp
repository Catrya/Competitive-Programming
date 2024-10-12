/*  
A - Three Threes  / 
Time Limit: 2 sec / Memory Limit: 1024 MB

Score : 100 points

Problem Statement
You are given an integer N between 1 and 9, inclusive, as input. Concatenate N copies of the digit N and print the resulting string.

Constraints
N is an integer between 1 and 9, inclusive.

Input
The input is given from Standard Input in the following format:
N
Output
Print the answer.

Sample Input 1
3
Sample Output 1
333
Concatenate three copies of the digit 3 to yield the string 333.

Sample Input 2
9
Sample Output 2
999999999
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin >> N;

    for (int i=0; i<N; i++){
        cout << N;    
    }

    return 0;
}
