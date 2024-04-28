// @brief Matrix Determinant
#define PROBLEM "https://judge.yosupo.jp/problem/matrix_det"
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#include "cp-algo/algebra/matrix.hpp"
#include <bits/stdc++.h>

using namespace std;
using namespace cp_algo::algebra;

const int mod = 998244353;

void solve() {
    int n;
    cin >> n;
    matrix<modular<mod>> a(n, n);
    a.read();
    cout << a.det() << "\n";
}

signed main() {
    //freopen("input.txt", "r", stdin);
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    while(t--) {
        solve();
    }
}