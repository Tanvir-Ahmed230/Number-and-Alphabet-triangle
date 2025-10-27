# Number-and-Alphabet-triangle
Consecutive number and Alphabet will be there in the Triangle 
#include <iostream>
using namespace std;
int main() {
int i,j,row;
cout<<"Enter number of rows : ";
cin>>row;
for(i=1;i<=row;i++){
    int a=1;
    for(j=1;j<=i;j++){
      int  d=a+64;
        char ch=(char)d;
        if(i%2!=0){
            cout<<j<<" ";
        }
        else{
            cout<<ch<<" ";
        }
        a++;
    }
    cout<<endl;
}
    return 0;
}
