#include<vector>
#include<queue>
using namespace std;

#define X first
#define Y second

int solution(vector<vector<int> > maps)
{
    int answer = 0;
    int dx[4] = {1,0,-1,0};
    int dy[4] = {0,1,0,-1};
    int n = maps.size();
    int m = maps[0].size();
    vector<vector<int>> dist(n,vector<int>(m, -1));
    queue<pair<int,int>> Q;
    
    Q.push({0,0});
    dist[0][0] = 1;
    
    while(!Q.empty())
    {
        pair<int,int> cur = Q.front();
        Q.pop();
        for(int dir = 0; dir < 4; dir++)
        {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            
            if(nx < 0 || nx >= n || ny < 0 || ny >= m)
                continue;
            if(dist[nx][ny] > 0 || maps[nx][ny] == 0)
                continue;
           
            dist[nx][ny] = dist[cur.X][cur.Y] + 1;                      
            Q.push({nx,ny});
        }
    }
    
    answer = dist[n-1][m-1];
    
    return answer;
}