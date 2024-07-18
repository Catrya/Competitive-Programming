/*  
A - Who Ate the Cake?  / 
Time Limit: 2 sec / Memory Limit: 1024 MB

Score :100 points

Problem Statement
Takahashi's cake has been eaten by someone. There are three suspects: person 1, person 2, and person 3.

There are two witnesses, Ringo and Snuke. Ringo remembers that person A is not the culprit, and Snuke remembers that person 
B is not the culprit.

Determine if the culprit can be uniquely identified based on the memories of the two witnesses. If the culprit can be identified, print the person's number.

Constraints
1≤A,B≤3
All input values are integers.

Input
The input is given from Standard Input in the following format:
A B

Output
If the culprit can be uniquely identified based on the memories of the two witnesses, print the person's number; otherwise, print -1.

Sample Input 1
1 2
Sample Output 1
3
From the memories of the two witnesses, it can be determined that person 3 is the culprit.

Sample Input 2
1 1
Sample Output 2
-1
From the memories of the two witnesses, it cannot be determined whether person 2 or person 3 is the culprit. Therefore, print -1.

Sample Input 3
3 1
Sample Output 3
2
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;

    if (A==B){
    cout << -1;
    }

    if ((A==1 && B==2)|| (A==2 && B==1)){
        cout << 3;
    }

    if ((A==2 && B==3)|| (A==3 && B==2)){
        cout << 1;
    }

     if ((A==3 && B==1)|| (A==1 && B==3)){
        cout << 2;
    }
    return 0;
}


