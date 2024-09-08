#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(){
    int n, e; //n is number of node; e is number of edge
    cin>>n>>e;
    int adjMat[n][n];
    memset(adjMat, 0, sizeof(adjMat));//to assign zero(0) in all index of 2D array
    while(e--){
        int a, b;
        cin>>a>>b;
        adjMat[a][b]=1;
        adjMat[b][a]=1;//for undirected graph
    }

    //to print the matrix
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n; j++)
    //         cout<<adjMat[i][j]<<' ';
    //     cout<<endl;
    // }

    //to check conection have or don't have
    if(adjMat[3][4]==1)
        cout<<"Connection ache"<<endl;
    else cout<<"Connection nai"<<endl;
    return 0;
}