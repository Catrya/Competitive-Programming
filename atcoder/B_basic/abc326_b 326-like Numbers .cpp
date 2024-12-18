/*  
B - 326-like Numbers  / Time Limit: 2 sec / Memory Limit: 1024 MB

Score : 200 points

Problem Statement
A 326-like number is a three-digit positive integer where the product of the hundreds and tens digits equals the ones digit.

For example,326,400,144 are 326-like numbers, while 623,777,429 are not.

Given an integer N, find the smallest 326-like number greater than or equal to N. It always exists under the constraints.

Constraints
100≤N≤919
N is an integer.
Input
The input is given from Standard Input in the following format:

N
Output
Print the answer.

Sample Input 1
320
Sample Output 1
326
320,321,322,323,324,325 are not 326-like numbers, while 326 is a 326-like number.

Sample Input 2
144
Sample Output 2
144
144 is a 326-like number.

Sample Input 3
516
Sample Output 3
600
*/

#include <bits/stdc++.h>

using namespace std;

int N, a, b, c;

bool N326 (int x){
    a=x/100;
    b=x/10%10;
    c=x%10;
    if (a * b ==c){
        return true;
    }
    else return false;
}

int main()
{
    cin >> N;

    for (int i = N; i<=999; i++){
        if (N326 (i)){
            cout << i;
            break;
        }
    }

    return 0;
}
