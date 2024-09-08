/*  
A - Online Shopping  / 
Time Limit: 2 sec / Memory Limit: 1024 MB

Score : 100 points

Problem Statement
AtCoder Inc. sells merchandise through its online shop.

Takahashi has decided to purchase N types of products from there. For each integer i from 1 to N, the i-th type of product has a price of Pi ​yen each, and he will buy Qi of this.

Additionally, he must pay a shipping fee. The shipping fee is 0 yen if the total price of the products purchased is S yen or above, and K yen otherwise. 
He will pay the total price of the products purchased plus the shipping fee. Calculate the amount he will pay.

Constraints
1≤N≤100
1≤S≤10000
1≤K≤10000
1≤Pi≤10000
1≤Qi≤100
All input values are integers.

Input
The input is given from Standard Input in the following format:
N S K
P1 Q1
P2 Q2
⋮
PN QN
 
Output
Print the amount Takahashi will pay for online shopping.

Sample Input 1
2 2000 500
1000 1
100 6
Sample Output 1
2100
Takahashi buys one product for 1000 yen and six products for 100 yen each. Thus, the total price of the products is 1000×1+100×6=1600 yen. Since the total amount for the products is less than 2000 yen, the shipping fee will be 500 yen.
Therefore, the amount Takahashi will pay is 1600+500=2100 yen.

Sample Input 2
3 2000 500
1000 1
100 6
5000 1
Sample Output 2
6600
The total price of the products is 1000×1+100×6+5000×1=6600 yen. Since the total amount for the products is not less than 
2000 yen, the shipping fee will be 0 yen. Therefore, the amount Takahashi will pay is 6600+0=6600 yen.

Sample Input 3
2 2000 500
1000 1
1000 1
Sample Output 3
2000
There may be multiple products with the same price per item.
*/

#include <bits/stdc++.h>

using namespace std;

const int maxn = 105;
int P[maxn];
int Q[maxn];

int main()
{
    int N, S, K;
    int a = 0;
    cin >> N >> S >> K;

    for (int i=0; i < N; i++){
        cin >> P[i] >> Q[i];
    }

    for (int i=0; i < N; i++){
        a += P[i] * Q[i];
    }

    if (a < S){
        cout << a + K;
    }

    else cout << a;

    return 0;
}
