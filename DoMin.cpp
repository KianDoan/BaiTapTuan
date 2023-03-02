#include<iostream>
#include<ctime>
#include<random>

using namespace std;

void init(int m,int n, int k, int** gameMap,int** bombMap)
{
    gameMap = new int*[m];
    bombMap = new int*[m];
    for(int i=0;i<m;i++)
    {
        gameMap[i]=new int[n];
        bombMap[i]=new int[n];
        for(int j=1;j<=n;j++)
        {
            gameMap[i][j-1]=0;
            bombMap[i][j-1]=0;
        }
    }
    srand(time(NULL));
    for(int i=0;i<k;i++)
    {
        int x,y;
        x=rand()%m +1;
        y=rand()%n +1;
        bombMap[x][y]=1;
    }
}

int main()
{
    cout<<"Nhap vao so dong, so cot, so luong min: ";
    int row,col,bomb;
    cin>>row>>col>>bomb;
    int** gameMap;
    int** bombMap;
    init(row,col,bomb,gameMap,bombMap);
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
            cout<<bombMap[i][j]<<" ";
        cout<<endl;
    }

    return 0;
}
