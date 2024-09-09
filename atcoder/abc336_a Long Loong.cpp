/*  
https://atcoder.jp/contests/abc336/tasks/abc336_a
A - Long Loong  / 
Time Limit: 2 sec / Memory Limit: 1024 MB

Score: 100 points

Problem Statement
For a positive integer X, the Dragon String of level X is a string of length (X+3) formed by one L, X occurrences of o, one n, and one g arranged in this order.

You are given a positive integer N. Print the Dragon String of level N. Note that uppercase and lowercase letters are distinguished.

Constraints
1≤N≤2024
N is an integer.

Input
The input is given from Standard Input in the following format:
N
Output
Print the Dragon String of level 
N.

Sample Input 1
3
Sample Output 1
Looong
Arranging one L, three os, one n, and one g in this order yields Looong.

Sample Input 2
1
Sample Output 2
Long

*/

#include <iostream>

using namespace std;

int main()
{
   int N;
   string d= "";
   cin >> N;

   for ( int i=0; i<N; i++){
        d+="o";
   }

   cout << "L" + d + "ng";


   return 0;
}

