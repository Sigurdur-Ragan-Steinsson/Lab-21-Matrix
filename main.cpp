#include <iostream>

using namespace std;

int main() {
  
  double matrix[][4] = {  
  {1, 2, 3, 4},
  {2, 2, 3, 1},
  {3, 4, 3, 2},
  {4, 1, 2, 4}  };

  // double matrix2[][4] = {  
  // {1, 2, 3, 4},
  // {2, 1, 3, 1},
  // {3, 3, 1, 2},
  // {4, 1, 2, 1}  };

  int side = (sizeof(matrix[0]) / sizeof(matrix[0][0]));
  bool isSymmetric = true;

  // failed attempt
  // for(int row = 0, col = 1; row < 4; row ++, col++){
  //   if(matrix2[row][col] != matrix2[col][row]){
  //     isSymmetric = false;
  //   }
  // }

  for(int row = 0; row < 4; row++){
    for(int col = 0; col < 4; col++){
      if(matrix[row][col] != matrix[col][row]){
        isSymmetric = false;
      }
    }
  }

  if(isSymmetric)
    cout << "The matrix is symmetric" << endl;
  else
    cout << "The matrix is not symmetric" << endl;

  return 0;
} 