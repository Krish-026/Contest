#include <iostream>
using namespace std;

int main() {
    long long A, X, M;
    cin >> A >> X >> M;

    long long result = 0;
    long long power = 1;
    for (long long i = 0; i < X; i++) {
        result = (result + power * (A % M)) % M;
        power = (power * A) % M;
    }

    cout << result << endl;

    return 0;
}
