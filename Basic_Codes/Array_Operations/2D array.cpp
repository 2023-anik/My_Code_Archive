#include<bits/stdc++.h>
using namespace std;

int main(){
    int array2D[3][5]={
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15}
    };
    cout<<"Representation like a 3x5 matrix:\n";
    for(int i=0; i<3; i++){
    for(int j=0; j<5; j++){
        cout<<setw(2)<<setfill(' ')<<array2D[i][j];
        if(j<5){
            cout<<' ';
        }
    }cout<<endl;
    }
    cout<<"\n\n\nIn a line: \n";
    for(int i=0; i<3; i++){
        for(int j=0; j<5; j++){
            cout<<array2D[i][j]<<' ';
        }
    }
    cout<<"\n\nIn more details: \n";
    for(int i=0; i<3; i++){
        for(int j=0; j<5; j++){
            cout<<"Element ["<<i<<"]["<<j<<"] = "<<setw(2)<<setfill(' ')<<array2D[i][j]<<endl;
        }
    }
    return 0;
}
