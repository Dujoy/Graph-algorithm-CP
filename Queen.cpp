#include<bits/stdc++.h>
using namespace std;

vector <vector <int >> a;
vector <int> v , t;

void dfs(int x) {
    int cnt = 0;
    cout <<"Array"<<" "<< x <<"\n";
    for(int i = 0; i < a[x].size(); i++) {
        int xt = a[x][i];
        cout << xt <<" ";
        cout <<"first\n";
        dfs(xt);
        cout <<"2nd\n";
        cnt += v[xt];
    }
   /* if(cnt == a[x].size() && v[x] == 1) {
        t.push_back(x);
    }
    */
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    a.resize(n);
    v.resize(n);
    int root = 0;
    for(int i = 0; i < n; i++) {
        int u;
        cin >> u >> v[i];
        if(u == -1) {
           root = i;
        }
        else {
            a[u - 1].push_back(i);
        }
    }
    dfs(root);
    exit(0);
    sort(t.begin() , t.end());
    if(t.size() == 0) {
        cout <<"-1\n";
    }
    else {
        for(auto&it : t) {
            cout << it + 1 <<" ";
        }
        cout <<"\n";
    }
    return 0;
}
