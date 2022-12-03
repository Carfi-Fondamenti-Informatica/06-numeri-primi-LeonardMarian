#include <iostream>
#include "lib.h"

using namespace std;

void EvaluatePrimeNumbers(){
    int n = 0;
    cin >> n;

    bool isPrime = is_prime_recorsive(n, n, 0);
    if(isPrime)
        cout << "numero primo";
    else
        cout << "numero non primo";
}
