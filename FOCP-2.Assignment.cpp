#include<iostream>
#include<cmath>
using namespace std;
int main(){
 //q1->
 
  /*string name,age;
   cout<<"enter your name and age"<<endl;
   cin >> name >> age;
   cout<<"your name = " << name <<" your are "<< age << " years old ";*/
   
   //q2->
  
  /* int a,b;
   cout<<"enter a  2 no"<<endl;
   cin>>a>>b;
   int sum;
   sum = a+b;
   cout<<sum;*/
   
   //q3->
   
   /*int a,b;
   cout<<"enter 2 no's: "<<endl;
   cin>>a>>b;
   char opr;
   cout<<"enter opr"<<endl;
   cin>>opr;
   switch(opr){
    case '+':
    cout<<a+b<<endl;
    break;
    
    case '/':
    cout<<a/b<<endl;
    break;
    
    case '*':
    cout<<a*b<<endl;
    break;
    
    case '-':
    cout<<a-b<<endl;
    break;
    
    default:
    cout<<"incorrect operator"<<endl;

   }*/

  //q4->
  
  /* float a,b;
   cout<<"Enter Two Number: "<<endl;
   cin>>a>>b;
   double  division;
   division =a/b;
   cout<< division;*/


   //q5->
   
   /* const double RATE_CONVERSION = 100.0; 

    
    double principal, rate, time, totalAmount, compoundInterest;
    int compoundingFrequency;

    
    cout << "Enter the principal amount: ";
    cin >> principal;

    cout << "Enter the annual interest rate (in %): ";
    cin >> rate;

    cout << "Enter the time period in years: ";
    cin >> time;

    cout << "Enter the number of times interest i.e compounded per year: ";
    cin >> compoundingFrequency;

    
    rate = rate / RATE_CONVERSION;

    
    totalAmount = principal * pow((1 + rate / compoundingFrequency), compoundingFrequency * time);

    
    compoundInterest = totalAmount - principal;

    
    cout << "\nCompound Interest: " << compoundInterest << endl;
    cout << "Total Amount: " << totalAmount << endl;*/

    
  //q6->
  
  /*int width,length;
  cout<<"Enter length: "<<endl;
  cin>>length;
  cout<<"Enter width: "<<endl;
  cin>>width;
  int area,parameter;
  area=length*width;
  parameter=2*(length + width);
  cout<<"Area: "<<area<<endl<<"parameter: "<<parameter<<endl;*/


  //q7->

 /* int a,b,c;

  //cout<<"Before Swapping ->"<<endl;

  cout<<"ENTER NO A: "<<endl;
  cin>>a;
  
  cout<<"ENTER NO B: "<<endl;
  cin>>b;
  
  c=a;
  a=b;
  b=c;

  cout<<"After Swapping ->"<<endl;

  cout<<"A: "<<a<<endl;
  cout<<"B: "<<b<<endl;

  //Without using temporary variable

  a=a+b;
  b=a-b;
  a=a-b;
  cout<<"A: "<<a<<endl<<"B: "<<b<<endl;*/


  //q8->
  
  
  /*string name;
  int age;
  
  cout<<"Enter your Name-> "<<endl;
  cin>>name; 

  cout<<"Enter your Age-> "<<endl;
  cin>>age;
  
  cout<<"Hello "<<name<<" you lived "<<age*365<<" days "<<endl;*/


  //q9->


  /*char a;
  cout<<"Enter a Character-> "<<endl;
  cin>> a;

  int b;
  cout<<"Enter a Integer-> "<<endl;
  cin>>b;

  float c;
  cout<<"Enter a Floating point no-> "<<endl;
  cin>>c;
  
  cout<<"CHAR               -----> "<<a<<endl<<"INTEGER            -----> "<<b<<endl<<"FLOATING_POINT_NO  -----> "<<c<<endl; */
  
 
  //q10->

   /*int num1, num2;
   
   cout << "Enter the first integer: ";
    cin >> num1;

    cout << "Enter the second integer: ";
    cin >> num2;

    
    if (num2 != 0) {
        
        if (num1 % num2 == 0) {
            cout << num1 << " is a multiple of " << num2 << "." << endl;
        } else {
            cout << num1 << " is not a multiple of " << num2 << "." << endl;
        }
    } else {
        cout << "Division by zero is not allowed." << endl;
    }*/

   
   //q11->


    /*  int num, count = 0;

    cout << "Enter an integer: ";
    cin >> num;


    while (num != 0) {
        
        count += (num & 1);
        
        num >>= 1;
    }


    cout << "The number of 1 bits is: " << count << endl;*/


    //q12->

   /* double a, b, c;

    
    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;

    
    if (a == 0) {
        if (b != 0) {        
            
            double root = -c / b;
            cout << "This is a linear equation. The root is: " << root << endl;
        } else {
            if (c == 0) {
                cout << "This is not an equation (0 = 0)." << endl;
            } else {
                cout << "No solution exists." << endl;
            }
        }
    } else {
        
        double discriminant = b * b - 4 * a * c;

        if (discriminant > 0) {
            
            double root1 = (-b + sqrt(discriminant)) / (2 * a);
            double root2 = (-b - sqrt(discriminant)) / (2 * a);
            cout << "The equation has real and distinct roots: " << root1 << " and " << root2 << endl;
        } else if (discriminant == 0) {
          
            double root = -b / (2 * a);
            cout << "The equation has real and equal roots: " << root << endl;
        } else {
            
            double realPart = -b / (2 * a);
            double imaginaryPart = sqrt(-discriminant) / (2 * a);
            cout << "The equation has complex roots: ";
            cout << realPart << " + " << imaginaryPart << "i and ";
            cout << realPart << " - " << imaginaryPart << "i" << endl;
        }
    }*/

   //q13->

   /* double balance = 1000.00; 
    int choice;
    double amount;

    do {
        
        cout << "\n=== ATM MENU ===" << endl;
        cout << "1. Withdraw" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Balance Inquiry" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: 
                cout << "Enter amount to withdraw: ";
                cin >> amount;

                if (amount > balance) {
                    cout << "Error: Insufficient balance!" << endl;
                } else if (amount <= 0) {
                    cout << "Error: Invalid amount!" << endl;
                } else {
                    balance -= amount;
                    cout << "Withdrawal successful. Remaining balance: " << balance << endl;
                }
                break;

            case 2: 
                cout << "Enter amount to deposit: ";
                cin >> amount;

                if (amount <= 0) {
                    cout << "Error: Invalid amount!" << endl;
                } else {
                    balance += amount;
                    cout << "Deposit successful. New balance: " << balance << endl;
                }
                break;

            case 3: 
                cout << "Your current balance is: " << balance << endl;
                break;

            case 4: 
                cout << "Thank you for using the ATM. Goodbye!" << endl;
                break;

            default: 
                cout << "Error: Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);*/


    //Q14->

    /*double side1, side2, side3;

    
    cout << "Enter the lengths of the three sides of the triangle: ";
    cin >> side1 >> side2 >> side3;

    
    if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) {
        cout << "The triangle is valid." << endl;

      
        if (side1 == side2 && side2 == side3) {
            cout << "The triangle is Equilateral (all sides are equal)." << endl;
        } else {
            if (side1 == side2 || side1 == side3 || side2 == side3) {
                cout << "The triangle is Isosceles (two sides are equal)." << endl;
            } else {
                cout << "The triangle is Scalene (all sides are different)." << endl;
            }

        
            if ((side1 * side1 + side2 * side2 == side3 * side3) ||
                (side1 * side1 + side3 * side3 == side2 * side2) ||
                (side2 * side2 + side3 * side3 == side1 * side1)) {
                cout << "The triangle is also a Right Triangle." << endl;
            }
        }
    } else {
        cout << "The triangle is not valid." << endl;
    }*/


   //q15->
   int a, b, c, d;

    
    cout << "Enter values for a, b, c, and d: ";
    cin >> a >> b >> c >> d;


    int result = pow(a, b) + (c & d);

    
    cout << "The result of (a^b + c&d) is: " << result << endl;

    


    


    


    





    



  
  
  





  
   return 0;
}

  


   





