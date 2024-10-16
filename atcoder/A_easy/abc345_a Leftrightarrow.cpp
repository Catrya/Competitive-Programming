/*  
A - Leftrightarrow  / 
Time Limit: 2 sec / Memory Limit: 1024 MB

Scoring: 100 points

Problem Statement
You are given a string S consisting of <, =, and >.
Determine whether S is a bidirectional arrow string.
A string S is a bidirectional arrow string if and only if there is a positive integer k such that S is a concatenation of one <, k =s, and one >, in this order, with a length of 
(k+2).

Constraints
S is a string of length between 3 and 100, inclusive, consisting of <, =, and >.

Input
The input is given from Standard Input in the following format:
S

Output
If S is a bidirectional arrow string, print Yes; otherwise, print No.

Sample Input 1
<====>
Sample Output 1
Yes
<====> is a concatenation of one <, four =s, and one >, in this order, so it is a bidirectional arrow string.
Hence, print Yes.

Sample Input 2
==>
Sample Output 2
No
==> does not meet the condition for a bidirectional arrow string.
Hence, print No.

Sample Input 3
<>>
Sample Output 3
No

*/

#include <bits/stdc++.h>

using namespace std;

int main()
{

    string S;
    cin >> S;

    int b=0;
    int a=0;
    for (int i =1; i<= S.size()-2; i++){
        if (S[i]=='='){
            b+=1;
        }
        else
            a+=1;
    }


    int c =0;
    if ((S[0]== '<') && (S[S.size()-1]=='>')){
        c = 0;
    }
    else c = 1;

    if (a == 0 && c == 0){
        cout << "Yes";
    }
    else cout << "No";

    return 0;
}


