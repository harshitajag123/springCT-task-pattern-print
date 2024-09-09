#include <iostream>

using namespace std;
//no of rows

int n ;

int main(){
  cin>>n;
  // check if input is less than or equal to 5
  if(n <= 5){
    // for iterating no of rows
    for (int i = 1; i <= n; i++)
    {
      // for iterating no of columns

      // for printing spaces
      for (int j = 1; j <= n - i; j++)
      {
        cout << " ";
      }

      for (int j = 1; j <= i; j++)
      {
        cout << j + i - 1;
      }

      for (int j = i - 1; j >= 1; j--)
      {
        cout << j + i - 1;
      }
      cout << endl;
    }
  }else{
    cout<<" input is not valid, input should be less than or equal to 5";
  }
  
}

/*
       1 -- i=1
      232  
     34543
    4567654
   567898765
  67890123456
*/