#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,n;
    cout << "Enter the number of rows : "  ;
    cin >> m;
    cout << "Enter the number of columns : "  ;
    cin >> n;
    vector<vector<int>> arr(m,vector<int>(n));
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    cout << "ORIGINAL MATRIX : " << endl;
    vector<vector<int>> arr1(m,vector<int>(n));
    int col = 0,row;
    for(int i = 0; i < m; i++){
        row = 0;
        for(int j = 0; j < n; j++){
            cout << arr[i][j]<< " ";
            arr1[row][col]= arr[i][j] ;
            row++;
        }
        col++;
        cout << endl;
    }
    cout << "TRANPOSE MATRIX : " << endl;

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout <<  arr1[i][j]<< " ";
        }
        cout << endl;
    }

}
