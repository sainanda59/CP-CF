#include <iostream>
#define SIZE 5
using namespace std;
 
int main()
{
  int matrix[SIZE][SIZE];

  cout << "Enter elements into the matrix: \n";
  for(int i=0; i<SIZE ; i++){
    for(int j=0; j<SIZE; j++){
      cin >> matrix[i][j];
    }
  }
    
  cout << "Diaogonal : \n";
  for(int i=0; i<SIZE; i++){
    for(int j=0; j<SIZE; j++){
      if(i==j || i+j==SIZE-1)
        cout << matrix[i][j] << "\t";
      else
        cout << " " << "\t";
    }
    cout << "\n";
  }
 
  return 0;
}
