#include <iostream>
using namespace std;

long long nCrfun(int n, int r) {
    if (r > n) return 0;
    
    if (r > n - r) { 
        r = n - r; 
    }

    long long sol = 1;
    for (int i = 1; i <= r; i++) {
        sol *= (n - i + 1); 
        sol /= i;           
    }
    return sol;
}

int main() {
    int r, n;
    cout << "Enter the value of n : ";
    cin >> n;
    cout << "Enter the value of r : ";
    cin >> r;

    int ans = nCrfun(n, r);
    cout << "The final answer : " << ans << endl;

    return 0;
}
