//Create a program to perform division without using the / operator, implementing both integer and floating-point division manually
#include<iostream>
using namespace std;
    int main(){
       
    int a, b;
    
    cout << "Enter Two Numbers: " << endl;
    cin >> a >> b;

    if (b == 0) {
        cout << "Error: Division by zero is not allowed." << endl;
        return 1; 
    }

    int quotient = 0;
    
    while (a >= b) {  
        a -= b;
        quotient++;
    }

    cout << "Quotient: " << quotient << endl;

 return 0;
    }



