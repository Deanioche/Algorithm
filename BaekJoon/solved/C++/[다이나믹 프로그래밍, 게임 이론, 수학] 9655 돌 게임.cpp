#include <iostream>
using namespace std;

void BOJ_9655()
{
    int N;
    cin >> N;
    cout << (N % 2 ? "SK" : "CY");
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    BOJ_9655();
}