#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int mat1[3][3], mat2[3][3], sum[3][3];
    
    for(int i = 0; i < 3; i++){
        for(int j  = 0; j < 3; j++){
            cin>>mat1[i][j];
        }
    }
    
    for(int i = 0; i < 3; i++){
        for( int j = 0 ; j < 3; j++){
            cin>>mat2[i][j];
        }
    }
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            sum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
    return 0;
}
