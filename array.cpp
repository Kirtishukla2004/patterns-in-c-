#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"enter total no. of digits ";
    cin>>n;
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        cout<<"enter value  "<<endl;
        cin>>arr[i];

    }
 
  for( int i = 1;i < n; ++i) {

    // Change < to > if you want to find the smallest element
    if(arr[0] < arr[i])
      arr[0] = arr[i];
  }

  cout << endl << "Largest element = " << arr[0];

  return 0;
}



 
    

