#include <iostream>
#include <time.h>
using namespace std;

int main(){

    srand(time(0));

    int a=rand()%101;
    cout<<"Try to guess the random number between 0-100"<<endl;
    int x;
    int i;
    for(i=7;i>0;i--){
    cin>>x;
   
    if(x==a){
      cout<<x<<" is the correct guess!!";
      break;
    }
    else if(x>a){
        cout<<"Your guess is too high."<<endl;
    }

    else {
        cout<<"Your guess is too Low."<<endl;
     }
cout<<"Remaining Chances: "<<i-1<<endl;
} 
if(i==0){
    cout<<"No chances left!! Better luck next time"<<endl;
}
    
    return 0;
}