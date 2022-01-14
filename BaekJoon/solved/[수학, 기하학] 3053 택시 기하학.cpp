#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    const double PI = 3.14159265359;

    int n;
    cin >> n;

    // printf("%.6f\n", n * n * PI);
    // printf("%.6f", (double)(n * n * 2));

    // 위와 같음
    cout << fixed << n * n * PI << "\n"
         << (double)(n * n * 2);
}