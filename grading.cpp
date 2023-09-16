#include <iostream>
#include <string.h>
using namespace std;


int highestindex(int a[],string b[],int x){
    for(int i=0;i<x-1;i++){
        if(a[i]>a[i+1]){
            swap(a[i],a[i+1]);
            swap(b[i],b[i+1]);
        }
        else continue;
    };
    return 0;
}


void studentgrade(int x){
    string subject[x];
    int marks[x];
    char stuName[100];
    cout<<"Enter the student's name: ";
    cin>>stuName;
    int total=0;
    for(int i=0;i<x;i++){
        cout<<"Enter Subject name: ";
        cin>>subject[i];
        cout<<"Enter the marks out of 100: ";
        cin>>marks[i];
        total=total+marks[i];
    }

    float avg=float(total)/(x);

  
   cout<<"Student Name: "<<stuName<<endl;
   cout<<"Average Score: "<<avg<<endl;
   highestindex(marks,subject,x);
   cout<<"Scored highest in "<<subject[x-1]<<" with "<<marks[x-1]<<" marks"<<endl;
   
}

int main(){
    int a;
    cout<<"Enter the number of subjects: ";
    cin>>a;

    studentgrade(a);
}

