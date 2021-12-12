#include<iostream>
using namespace std;

long gcd(long a, long b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

long lcm(long a, long b) {
    return (a * b) / gcd(a, b);
}

int main() {
    long a, b, c, d;
    cin >> a >> b >> c >> d;

    long lcm_n = lcm(b, d);
    long r_1 = (a * lcm_n / b) + (c * lcm_n / d);
    long r_2 = lcm_n;

    long gcd_n = gcd(r_1, r_2);

    cout << r_1/gcd_n << " " << r_2 / gcd_n << endl;


	return 0;
}
