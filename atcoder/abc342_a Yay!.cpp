/*  
Yay!  / 
Time Limit: 2 sec / Memory Limit: 1024 MB

Score: 150 points

Problem Statement
You are given a string S consisting of lowercase English letters. The length of S is between 3 and 100, inclusive.

All characters but one of S are the same.

Find x such that the x-th character of S differs from all other characters.

Constraints
S is a string of length between 3 and 100, inclusive, consisting of two different lowercase English letters.
All characters but one of S are the same.

Input
The input is given from Standard Input in the following format:
S
Output
Print the answer.

Sample Input 1
yay
Sample Output 1
2
The second character of yay differs from the first and third characters.

Sample Input 2
egg
Sample Output 2
1

Sample Input 3
zzzzzwz
Sample Output 3
6
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{

    //freopen(".in", "r", stdin);

    string S;
    cin >> S;

    for (int i=0, j=S.length()-1; i < S.length()-1 && j>0; i++ , j--){
        if ((i==j) && (S[i] == S[j])){
            cout << i +1;
            break;
        }

        if (S[i] != S[j]){
            if ((S[i]==S[i+1]) && (S[i]==S[j-1])){
                cout << j+1;
            }
            else if ((S[i]==S[i-1]) && (S[i]==S[j+1])){
                cout << j+1;
            }
            else cout << i+1;
            break;
        }
    }
    return 0;
}

