#include<iostream>
using namespace std;

int main(){
    float num1,num2;
    char opN ;

    cout<<"Enter Frist Number : ";
    cin>> num1;
    cout<<"Enter Second Number : ";
    cin>> num2;

    // cout<<"Operations are : +, -, *, / "<<endl;
    cout<<"Enter the operation to perform(+,-,*,/)"<<endl;
    cin>>opN;

    switch(opN){
        case '+':
            cout<<num1<<" + "<<num2<<" = "<<num1 + num2;
            break;
        case '-':
            cout<<num1<<" - "<<num2<<" = "<<num1 - num2;
            break;
        case '*':
            cout<<num1<<" * "<<num2<<" = "<<num1 * num2;
            break;
        case '/':
            if(num2 != 0){
                cout<<num1<<" / "<<num2<<" = "<<num1 / num2;
            }else{
                cout<<"Zero can not be a denominator value for any division"<<endl;
            }
            break;
        default:
            cout << "Invalid ! Enter a write choice" << endl;
            break;
    }
    return 0;
}