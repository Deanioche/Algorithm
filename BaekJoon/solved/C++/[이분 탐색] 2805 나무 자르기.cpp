#include <iostream>
#include <algorithm>
using namespace std;

// 나무 갯수 ~100만, 높이 ~20억
int tree[1000010];
int N, M, start, res;

void BOJ_2805()
{
    cin >> N >> M;
    for (int i = 0; i < N; i++)
        cin >> tree[i];

    int end = *max_element(tree, tree+N);

    while (start <= end) {
        long long int t = 0;
        int mid = (start + end) / 2;
        for (int i = 0; i < N; i++)
            if (tree[i] > mid) t += tree[i] - mid;
        
        if(t < M)
            end = mid - 1;
        else{
            res = mid, start = mid + 1;
        }
    }
    cout << res;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    BOJ_2805();
}