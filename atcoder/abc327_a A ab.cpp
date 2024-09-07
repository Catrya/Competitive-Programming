/*  
A - ab  / 
Time Limit: 2 sec / Memory Limit: 1024 MB

Score : 100 points

Problem Statement
You are given a string S of length N consisting of lowercase English letters.
If there are any adjacent occurrences of a and b in S, print Yes; otherwise, print No. (The order of a and b does not matter.)

Constraints
2≤N≤100
S is a string of length N consisting of lowercase English letters.
Input
The input is given from Standard Input in the following format:
N
S

Output
If there are any adjacent occurrences of a and b in S, print Yes; otherwise, print No.

Sample Input 1
3
abc
Sample Output 1
Yes
The string abc has a as the first character and b as the second character, which are adjacent. Thus, print Yes.

Sample Input 2
2
ba
Sample Output 2
Yes
The string ba has a as the second character and b as the first character, which are adjacent. (Note that the order of a and b does not matter.)

Sample Input 3
7
atcoder
Sample Output 3
No

*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string S;
    int N;

    cin >> N >> S;
    
    bool flag = true;

    for (int i=0; i<N; i++){
        if (((S[i]=='a') && (S[i+1]=='b')) || ((S[i]=='b') && (S[i+1]=='a'))){
            cout << "Yes";
            flag = false;                   
            break;
        }
    }
    if (flag == true){
        cout << "No";
    }

    return 0;
}

