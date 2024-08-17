#include<iostream>
using namespace std;

int main(){
    float eng, sci, math, avg;

    cout<<"enter english marks : ";
    cin>>eng;

    cout<<"enter science marks : ";
    cin>>sci;

    cout<<"enter math marks : ";
    cin>>math;

    avg= (eng + sci + math) / 3.0;
    cout<<"avg marks = "<<avg<<endl;

    return 0;
}