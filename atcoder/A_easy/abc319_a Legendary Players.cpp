/*  
A - Legendary Players  / 
Time Limit: 2 sec / Memory Limit: 1024 MB

Score : 100 points

Problem Statement
In AtCoder, the top 10 rated players' usernames are displayed with a gold crown, and the top-rated player's username is displayed with a platinum crown.

At the start of this contest, the usernames and ratings of the top 10 rated players in the algorithm category are as follows:

tourist 3858
ksun48 3679
Benq 3658
Um_nik 3648
apiad 3638
Stonefeang 3630
ecnerwala 3613
mnbvmar 3555
newbiedmy 3516
semiexp 3481

You are given the username S of one of these players. Print that player's rating.

Constraints
S is equal to one of the usernames of the top 10 rated players in the algorithm category.

Input
The input is given from Standard Input in the following format:
S
Output
Print the rating of the corresponding player in one line.

Sample Input 1
tourist
Sample Output 1
3858
At the start of this contest, the rating of  tourist in the algorithm category is 
3858.

Sample Input 2
semiexp
Sample Output 2
3481
At the start of this contest, the rating of  semiexp in the algorithm category is 3481.

*/

#include <iostream>

using namespace std;

int main()
{
    string N[10];
    int c[10];
    string S;
    int d;

    cin >> S;

    N[0]= "tourist";
    N[1]= "ksun48";
    N[2]= "Benq";
    N[3]= "Um_nik";
    N[4]= "apiad";
    N[5]= "Stonefeang";
    N[6]= "ecnerwala";
    N[7]= "mnbvmar";
    N[8]= "newbiedmy";
    N[9]= "semiexp";

    c[0]= 3858;
    c[1]= 3679;
    c[2]= 3658;
    c[3]= 3648;
    c[4]= 3638;
    c[5]= 3630;
    c[6]= 3613;
    c[7]= 3555;
    c[8]= 3516;
    c[9]= 3481;

    for (int i=0; i<=9; i++){
        if (S==N[i]){
        d= c[i];
        cout << d;
        }
    }

    return 0;
}

