/*  
A - Christmas Present  / 
Time Limit: 2 sec / Memory Limit: 1024 MB

Score : 100 points

Problem Statement
Takahashi, a young baseball enthusiast, has been a very good boy this year, so Santa has decided to give him a bat or a glove, whichever is more expensive.

If a bat costs B yen and a glove costs G yen (B!=G), which one will Santa give to Takahashi?

Constraints
B and G are different integers between 1 and 1000, inclusive.

Input
The input is given from Standard Input in the following format:
B G
Output
If Santa gives Takahashi a bat, print Bat; if Santa gives him a glove, print Glove.

Sample Input 1
300 100
Sample Output 1
Bat
The bat is more expensive than the glove, so Santa will give Takahashi the bat.

Sample Input 2
334 343
Sample Output 2
Glove
The glove is more expensive than the bat, so Santa will give Takahashi the glove.
*/

#include <iostream>

using namespace std;

int main()
{
    int B, G;
    cin >> B >> G;

    if (B > G){
        cout << "Bat";
    }

    else cout << "Glove";

    return 0;
}

