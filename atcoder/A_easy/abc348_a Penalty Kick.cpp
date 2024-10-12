/*  
A - Penalty Kick  / 
Time Limit: 2 sec / Memory Limit: 1024 MB

Score: 100 points

Problem Statement
Takahashi will have N penalty kicks in a soccer match.

For the i-th penalty kick, he will fail if i is a multiple of 
3, and succeed otherwise. 
Print the results of his penalty kicks.

Constraints
1≤N≤100
All inputs are integers.

Input
The input is given from Standard Input in the following format:
N

Output
Print a string of length N representing the results of Takahashi's penalty kicks. The i-th character (1≤i≤N) should be o if Takahashi succeeds in the i-th penalty kick, and x if he fails.

Sample Input 1
7
Sample Output 1
ooxooxo
Takahashi fails the third and sixth penalty kicks, so the third and sixth characters will be x.

Sample Input 2
9
Sample Output 2
ooxooxoox

*/

#include <bits/stdc++.h>

using namespace std;

int N;

int main()
{
    cin >> N;
    for(int i=1; i<=N; i++){
       if (i%3 == 0){
       cout << "x";
       }
       else{
       cout << "o";
    }
    }
    return 0;
}

// Solution 2

#include <bits/stdc++.h>

using namespace std;

int main()
{
int N;
string a = "";

    cin >> N;
    for (int i = 1; i<=N; i++){
        if(i%3==0){
        a+="x";
        }

        else a+= "o";
    }

    cout << a;
    return 0;
}

