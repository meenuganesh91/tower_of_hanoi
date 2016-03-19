#include<iostream>
#include<cstdio>

using namespace std;

void hanoi(int m, char a, char b, char c){
    if (m == 1) {
        cout<<"Move disc "<<m<<" from "<<a<<" to "<<b<<endl;
    }
    else{
        hanoi(m-1, a, c, b);
        cout<<"Move disc "<<m<<" from "<<a<<" to "<<b<<endl;
        hanoi(m-1, c, b, a);
    }
}

int main(){
    int n;
    cout<<"Enter height of tower: "<<endl;
    cin>>n;
    hanoi(n,'A', 'B', 'C');
    return 0;
    getchar();
}