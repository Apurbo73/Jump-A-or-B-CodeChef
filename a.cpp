#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        long long N, M, A, B;
        cin >> N >> M >> A >> B;

        long long num = M - N * B;
        long long den = A - B;

        if (den == 0)
        {
            cout << (N * A == M ? "Yes" : "No") << endl;
            continue;
        }

        if (num % den != 0)
        {
            cout << "No" << endl;
            continue;
        }

        long long x = num / den;
        cout << (x >= 0 && x <= N ? "Yes" : "No") << endl;
    }

    return 0;
}