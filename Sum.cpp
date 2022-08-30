//Sum_two_numbers

#include <iostream>
using namespace std; 
int sum(int a, int b){
    return a+b;
}
int main() {
    int a, b;
    cout<<"Enter 1st number: ";
    cin>>a;
    cout<<"\nEnter 2nd number: ";
    cin>>b;
    cout<<"Sum of "<<a<<" and "<<b<<" is "<<sum(a,b);
    return 0;
}
