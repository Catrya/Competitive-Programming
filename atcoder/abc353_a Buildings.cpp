/*  
A - Buildings  / 
Time Limit: 2 sec / Memory Limit: 1024 MB

Score: 100 points

Problem Statement
There are N buildings aligned in a row. The i-th building from the left has a height of Hi.

Determine if there is a building taller than the first one from the left. If such a building exists, find the position of the leftmost such building from the left.

Constraints
1≤N≤100
1≤Hi≤100
All input values are integers.

Input
The input is given from Standard Input in the following format:
N
H1 H2 ... HN

​Output
If no building is taller than the first one from the left, print -1.

If such a building exists, print the position (index) of the leftmost such building from the left.

Sample Input 1
4
3 2 5 2
Sample Output 1
3
The building taller than the first one from the left is the third one from the left.

Sample Input 2
3
4 3 2
Sample Output 2
-1
No building is taller than the first one from the left.

Sample Input 3
7
10 5 10 2 10 13 15
Sample Output 3
6
The buildings taller than the first one from the left are the sixth and seventh ones. Among them, the leftmost is the sixth one.
*/

#include <bits/stdc++.h>

using namespace std;

const int maxn = 105;
int A [maxn];

int main()
{
   int N;
   cin >> N;
   for (int i = 0; i<N ; i++){
        cin >> A[i];
   }

   int b;
   for (int i =1; i<= N; i++){
        if (A[i]<=A[0]){
        b= -1;
        }

        if (A[i]> A[0]){
        b= i+1;
        break;
        }
    }
    cout << b;
    return 0;
}

