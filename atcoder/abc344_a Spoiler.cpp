/*  
A - Spoiler  / 
Time Limit: 2 sec / Memory Limit: 1024 MB

Score: 150 points

Problem Statement
You are given a string S consisting of lowercase English letters and |. S is guaranteed to contain exactly two |s.

Remove the characters between the two |s, including the |s themselves, and print the resulting string.

Constraints
S is a string of length between 2 and 
100, inclusive, consisting of lowercase English letters and |.
S contains exactly two |s.

Input
The input is given from Standard Input in the following format:
S

Output
Print the answer.

Sample Input 1
atcoder|beginner|contest
Sample Output 1
atcodercontest
Remove all the characters between the two |s and print the result.

Sample Input 2
|spoiler|
Sample Output 2
It is possible that all characters are removed.

Sample Input 3
||xyz
Sample Output 3
xyz

*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a=0;
    int b=0;
    string S;
    string P=" ";
    cin >> S;

    for (int i=0; i< S.size(); i++){
        if (S[i] == '|'){
        a=i;
        break;
    }
    }

    for (int i = S.size(); i>=0; i--){
        if (S[i]== '|'){
        b=i;
        break;
        }
    }

    for (int i=0; i<S.size(); i++){
        if(i<a || i>b){
            P+=S[i];}
        }
    cout << P;

   return 0;
}

