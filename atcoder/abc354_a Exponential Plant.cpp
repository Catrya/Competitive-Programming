/*  
A - Exponential Plant  / 
Time Limit: 2 sec / Memory Limit: 1024 MB

Score : 100 points

Problem Statement
Takahashi is growing a plant. Its height at the time of germination is 0cm. Considering the day of germination as day 
0, its height increases by 2^i cm day i's night (0≤i).

Takahashi's height is H cm.

Every morning, Takahashi measures his height against this plant. Find the first day such that the plant's height is strictly greater than Takahashi's height in the morning.

Constraints
1≤H≤10^9
 
All input values are integers.

Input
The input is given from Standard Input in the following format:
H

Output
Print an integer representing the first day such that the plant's height is greater than Takahashi's height in the morning.

Sample Input 1
54
Sample Output 1
6
The plant's height in the mornings of days 
1,2,3,4,5,6 will be 1cm,3cm,7cm,15cm,31cm,63cm, respectively. The plant becomes taller than Takahashi in the morning day 
6, so print 6.

Sample Input 2
7
Sample Output 2
4
The plant's height will be 7cm in the morning of day 
3 and 15cm in the morning day 4. The plant becomes taller than Takahashi in the morning of day 
4, so print 4. Note that, in the morning of day 3, the plant is as tall as Takahashi, but not taller.

Sample Input 3
262144
Sample Output 3
19
*/

#include <iostream>

using namespace std;

int main()
{
   int H;
   cin >> H;
   int a = 0;
   for (int i=0; i <=H; i=2*i+1){
        a++;
   }
    cout << a;
    return 0;
}

