#include<bits/stdc++.h>
using namespace std;

int main(){

    int rows;
    // Getting the number of rows.
    cout << "Enter the Number of rows - ";
    cin >> rows;

    cout << "Triangle of " << rows << " using integers -\n";

    // Main logic to print triangle. 
    for( int i = 0; i < rows; i++ ) {
        for( int j = 0; j <= i; j++ ){
            cout << i + 1 << " ";
        }
        cout<<endl;
    }

    return 0;
}
/*
Enter the Number of rows - 6
Triangle of 6 using * -
1 
2 2 
3 3 3 
4 4 4 4 
5 5 5 5 5 
6 6 6 6 6 6 
