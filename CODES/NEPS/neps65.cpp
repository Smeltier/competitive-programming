//    Mina - Neps 65(by Smeltier)
//    https://neps.academy/br/exercise/65

#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(),x.end()
#define srt(x) sort(all(x))
#define endl "\n"

typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;

const int maxn = 1e5+10;
const int INF = 1e9 + 10;

int n;
vector<vector<int>> mina;
vector<vector<int>> dist;

int disX[] = {0, 1, 0, -1},
    disY[] = {1, 0, -1, 0};

void dijkstra(){
    dist.assign(n+2, vector<int>(n+2, INF));

    deque<pii> fila;
    dist[0][0] = 0;
    fila.push_front({0, 0});

    while(!fila.empty()){
        auto [x, y] = fila.front();
        fila.pop_front();
        
        for(int i = 0; i < 4; i++){
            int dx = x + disX[i],
                dy = y + disY[i];
            if(dx >= 0 && dx < n && dy >= 0 && dy < n){
                int custo = mina[dx][dy];
                if(dist[x][y] + custo < dist[dx][dy]){
                    dist[dx][dy] = dist[x][y] + custo;
                    if(!custo)
                        fila.push_front({dx, dy});
                    else
                        fila.push_back({dx, dy});
                }
            }
        }
    }
}


int main(){

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    cin >> n;

    mina.resize(n, vector<int>(n));
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> mina[i][j];

    dijkstra();

    cout << dist[n - 1][n - 1] << endl;

    return 0;
}