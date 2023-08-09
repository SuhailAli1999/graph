#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
#define endl "\n"
#define F first
#define S second

void fast(){
    ios_base::sync_with_stdio(false), ios::sync_with_stdio(false);
    cin.sync_with_stdio(false), cout.sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
}

const int N = 200005;
vector<int> adj[N];
int vis[N] = {0};

// Undirected graph
// if cyclic return true else return false

bool isCyclic(int node, int p){
    vis[node] = 1;
    for(auto ch : adj[node]){
        if(vis[ch] == 0 && ch != p){
            return true;
        }
        else if(!vis[ch]){
            if(isCyclic(ch, node)) return true;
        }
    }
    return false;
}

// Directed graph
// if cyclic return true else return false
bool isCyclic(int node){
    vis[node] = 2;
    for(auto ch : adj[node]){
        if(vis[ch] == 0){
            if(isCyclic(ch) == true) return true;
        }
        if(vis[ch] == 2){
            return true;
        }
    }
    vis[node] = 1;
    return false;
}

//////////////////////////////////////////////////////
// think of  brute force, greedy, equation, frequency, prefix, sorting (two pointers) and binary search
// think of applying operations on greatest/smallest element till works (multiset/heap)
//const int N = 200005;
//ll frq[130];
//const ll mod = 1e9+7;


void solve(){
    
}

int main(){
    //freopen("consecutive_cuts_chapter_1_validation_input.txt", "r", stdin);
    //freopen("second_friend_output.txt", "w", stdout);
    fast();
    int t = 1;
    cin >> t ;
     while(t--){
        solve();
    }
    return 0;
}
