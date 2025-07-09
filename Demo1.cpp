#include<bits/stdc++.h>
#include"BigInt.h"


using namespace std;

/*
  Program to print big factorial values.
*/

/*
   INPUT : n
   OUTPUT : factorial of all the numbers from 1 to n (each in new line)
*/


int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    BigInt fact, n, curr;

    fact = 1;
    curr = 1;

    cin >> n;
    n = n + 1;

    while(n > curr)
    {
        fact = fact * curr;
        curr = curr + 1;
        cout << fact << "\n";
    }

    return 0;
}