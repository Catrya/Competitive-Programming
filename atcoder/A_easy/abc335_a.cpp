/*  
https://atcoder.jp/contests/abc335/tasks/abc335_a

A - 202<s>3</s>  / 
Time Limit: 2 sec / Memory Limit: 1024 MB

Score : 100 points

Problem Statement
You are given a string S consisting of lowercase English letters and digits. S is guaranteed to end with 2023.Change the last character of S to 4 and print the modified string.

Constraints
S is a string of length between 4 and 100, inclusive, consisting of lowercase English letters and digits.
S ends with 2023. 
Input
The input is given from Standard Input in the following format:

S
Output
Print the answer.

Sample Input 1
hello2023
Sample Output 1
hello2024
Changing the last character of hello2023 to 4 yields hello2024.

Sample Input 2
worldtourfinals2023
Sample Output 2
worldtourfinals2024

Sample Input 3
2023
Sample Output 3
2024
S is guaranteed to end with 2023, possibly being 2023 itself.

Sample Input 4
20232023
Sample Output 4
20232024

*/

#include <bits/stdc++.h>

using namespace std;

string S, a;

int main()
{
    cin >> S;

    a = "";
    for( int i=0; i < S.length()-1; i++){
        a+=S[i];
    }

    cout << a + "4";

    return 0;
}
