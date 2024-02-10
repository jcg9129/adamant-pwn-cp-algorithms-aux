// @brief Range Reverse Range Sum
#define PROBLEM "https://judge.yosupo.jp/problem/range_reverse_range_sum"
#include "cp-algo/data_structures/treap/metas/reverse.hpp"
#include "cp-algo/data_structures/treap.hpp"
#include <bits/stdc++.h>

using namespace std;
using namespace cp_algo::data_structures::treap;

using metas::reverse_meta;
using node = treap_node<reverse_meta>;
using treap = node::treap;

void solve() {
    istream_iterator<int> input(cin);
    int n = *input++;
    int q = *input++;
    vector<treap> nodes(n);
    generate_n(begin(nodes), n, [&](){
        return new node(reverse_meta(*input++));
    });
    treap me = node::build(nodes);
    while(q--) {
        int t = *input++;
        int l = *input++;
        int r = *input++;
        if(t == 0) {
            node::exec_on_segment(me, l, r, [](treap &t) {
                _safe_meta(t, reverse = true);
            });
        } else {
            node::exec_on_segment(me, l, r, [](treap const& t) {
                cout << _safe_meta(t, sum) << "\n";
            });
        }
    }
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