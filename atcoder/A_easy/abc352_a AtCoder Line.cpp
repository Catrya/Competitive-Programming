/*  
A - AtCoder Line  / 
Time Limit: 2 sec / Memory Limit: 1024 MB

Score: 100 points

Problem Statement
The AtCoder railway line has N stations, numbered 1,2,…,N.

On this line, there are inbound trains that start at station 
1 and stop at the stations 2,3,…,N in order, and outbound trains that start at station N and stop at the stations N−1,N−2,…,1 in order.

Takahashi is about to travel from station X to station Y using only one of the inbound and outbound trains.

Determine whether the train stops at station Z during this travel.

Constraints
3≤N≤100
1≤X,Y,Z≤N
X, Y, and Z are distinct.
All input values are integers.

Input
The input is given from Standard Input in the following format:
N X Y Z

Output
If the train stops at station Z during the travel from station 
X to station Y, print Yes; otherwise, print No.

Sample Input 1
7 6 1 3
Sample Output 1
Yes
To travel from station 6 to station 1, Takahashi will take an outbound train.

After departing from station 6, the train stops at stations 
5,4,3,2,1 in order, which include station 3, so you should print Yes.

Sample Input 2
10 3 2 9
Sample Output 2
No

Sample Input 3
100 23 67 45
Sample Output 3
Yes

*/

#include <iostream>

using namespace std;

int N, X, Y, Z;

int main()
{
  cin >> N >> X >> Y >> Z;

  if ((X < Z && Z < Y) || (X > Z && Z > Y)){
        cout << "Yes";

  }
   else {
    cout << "No";
   }

    return 0;
}

