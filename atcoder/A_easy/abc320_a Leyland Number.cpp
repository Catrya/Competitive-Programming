/*  
A - Leyland Number  / 
Time Limit: 2 sec / Memory Limit: 1024 MB

Score : 100 points

Problem Statement
You are given positive integers 
A and B.
Print the value A^B +B^A.

Constraints
2≤A≤B≤9
All input values are integers.

Input
The input is given from Standard Input in the following format:
A B
Output
Print the answer as an integer.

Sample Input 1
2 8
Sample Output 1
320

Sample Input 2
9 9
Sample Output 2
774840978

Sample Input 3
5 6
Sample Output 3
23401

*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b;

    c= pow(a,b) + pow(b,a);
    cout << c;

    return 0;
}

