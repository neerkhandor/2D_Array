#include <iostream>
using namespace std;
int main() {
  //in memory 2d array is actually 1 d arraey only
 int arr[3][3];   //arr[row][col]
  //in memory this is an array of size 9 it is linearly stored
  //the value will be mapped as noOfCol*ith(row) +jth(col)
          //col0  col1  col2
  //row 0    1       2      3
  //row 1    4       5      6
  //row 2    7       8      9

//   cout<<"Enter elements : ";
//   //takiing input of 2d array
//   for(int i=0;i<3;i++){
//     for(int j=0;j<3;j++){
//       cin>>arr[i][j];
//     }
//   }
//   //printing 2d array
//   for(int row=0;row<3;row++){
//      //cout<<"|-----"<<endl;
//     for(int col=0;col<3;col++){
//       cout<<arr[row][col]<<" ";
//     }
//     //cout<<"|";
//     cout<<endl;
//   }
// //accessing 2d array
//   cout<<arr[0][2]<<endl;

  //creating 2d array
  //intialization + declaration
  //hardcoding the input
  int arr1[][3]={10,20,30,40,50,60,70,80,90};
  int arr2[][3]={{11,12,13},{14,15,16},{17,18,19}};
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      cout<<arr1[i][j]<<" ";
    }
    cout<<endl;
  }

cout<<endl<<endl;
  
  //   for(int i=0;i<3;i++){
  //   for(int j=0;j<3;j++){
  //     cout<<arr2[i][j]<<" ";
  //   }
  //   cout<<endl;
  // }
//column wise access
  //printing 0th col first and then 1st col and then 2nd col
  for(int col=0;col<3;col++){
    for(int row=0;row<3;row++){
      cout<<arr1[row][col]<<" ";
    }
    cout<<endl;
  }

//column wise print
cout<<endl<<endl;
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      cout<<arr1[j][i]<<" ";
    }
    cout<<endl;
  }
  
}
