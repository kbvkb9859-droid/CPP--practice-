Added Set Matrix Zeroes solution using row and column marker arrays
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the order of 2d matrix"<<endl;
    cin>>n;
    int arr[n][n];
    cout<<"enter the elemnts of array "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];

        }
    }
    cout<<endl;
    int row[n] ,column[n];
    for(int i=0;i<n;i++){
        row[i]=0;
        column[i]=0;
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]==0){
                row[i]=1;
                column[j]=1;
            }
        }
    }
   for(int i=0;i<n;i++){
    cout<<row[i]<<" ";
   }
   cout<<endl;
    for(int i=0;i<n;i++){
    cout<<column[i]<<" ";
   }
   cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(row[i]==1 || column[j]==1){
        arr[i][j]=0;
    }

        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    


    
   
    return 0;
    
}  
