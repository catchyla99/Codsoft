#include <iostream>
using namespace std;

void calculate(int x, int y){
    cout<<"Choose the operation"<<endl;
    cout<<"1-> Addition"<<endl;
    cout<<"2-> Subtraction"<<endl;
    cout<<"3-> Multiplication"<<endl;
    cout<<"4-> Division"<<endl;
    int v;
    cin>>v;

    switch (v)
    {
    case 1:
        cout<<x+y;
        break;

        case 2:
        cout<<x-y;
        break;

        case 3:
        cout<<x*y;
        break;

        case 4:
        cout<<x/y<<endl;
        cout<<"Remainder: "<<x%y;
        break;

    
    default:
    cout<<"Invalid Operation";
        break;
    }
}

int main(){
    int x,y;
    cout<<"Enter first number"<<endl;
    cin>>x;
    cout<<"Enter second number"<<endl;
    cin>>y;

    calculate(x,y);
    return 0;

}