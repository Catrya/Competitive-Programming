/*  
A - Past ABCs  / 
Time Limit: 2 sec / Memory Limit: 1024 MB

Score: 100 points

Problem Statement
You are given a string S of length 6. It is guaranteed that the first three characters of S are ABC and the last three characters are digits.

Determine if S is the abbreviation of a contest held and concluded on AtCoder before the start of this contest.

Here, a string T is "the abbreviation of a contest held and concluded on AtCoder before the start of this contest" if and only if it equals one of the following 348 strings:

ABC001, ABC002, …, ABC314, ABC315, ABC317, ABC318, …, ABC348, ABC349.

Note that ABC316 is not included.

Constraints
S is a string of length 6 where the first three characters are ABC and the last three characters are digits.

Input
The input is given from Standard Input in the following format:
S

Output
If S is the abbreviation of a contest held and concluded on AtCoder before the start of this contest, print Yes; otherwise, print No.

Sample Input 1
ABC349
Sample Output 1
Yes
ABC349 is the abbreviation of a contest held and concluded on AtCoder last week.

Sample Input 2
ABC350
Sample Output 2
No
ABC350 is this contest, which has not concluded yet.

Sample Input 3
ABC316
Sample Output 3
No
*/

#include <bits/stdc++.h>

using namespace std;

string S;

int main()
{
   cin >> S;

   if ((S != "ABC000" && S < "ABC316") || ((S >= "ABC317") && (S <= "ABC349"))){
        cout << "Yes";
   }

   else {
    cout << "No";
   }

    return 0;
}


