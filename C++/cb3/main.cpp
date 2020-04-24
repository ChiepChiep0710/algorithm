#include <iostream>
#include <string.h>
using namespace std;
struct pos
{
    int x,y;
};
char a[2500][2500];
int n,m,q;
int a1[5], b1[5];
/*pos fa[25][25];*/
bool fr[2500][2500];
void read()
{
    cin >> n >> m;
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++) cin >> a[i][j];
    }
}

int inside(int x, int y)
{
    if (x>=0 && x<n && y>=0 && y<m) return 1;
    else return 0;
}

/*id dfs(int i, int j,int ii, int jj)
{
    int x,y;
    for (int k=1; k<=4; k++)
    {
        x=i+a1[k];
        y=j+b1[k];
        if (inside(x,y) && a[x][y]!='#' && free[x][y])
        {
            fa[x][y].x=ii;
            fa[x][y].y=jj;
            free[x][y]=0;
            dfs(x,y,ii,jj);
        }
    }
}*/

void solve()
{
    a1[1]=-1; a1[2]=1; a1[3]=0; a1[4]=0;
    b1[1]=0; b1[2]=0; b1[3]=-1; b1[4]=1;
    /*for (int i=0; i<n; i++)
        for (int j=0; j<m; j++) free[i][j]=1;*/

    /*for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
            if (a[i][j]!='#' && free[i][j])
            {
                free[i][j]=0;
                fa[i][j].x=i;
                fa[i][j].y=j;
                dfs(i,j,i,j);
            }
    }*/
    int x1,x2,y1,y2;
    cin >> q;
    while (q--)
    {
        cin >> x1 >> y1 >> x2 >> y2;
//        if (fa[x1][y1].x==fa[x2][y2].x && fa[x1][y1].y==fa[x2][y2].y) cout << "yes" << endl;
    }
}

int main()
{
    read();
    solve();
}
