/*
Q-1 Write a function int maxNumber(int a, int b) that takes two integers as parameters and returns the larger one
#include <iostream>

int maxNumber(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int num1 = 10, num2 = 20;
    std::cout << "The larger number is: " << maxNumber(num1, num2) << std::endl;
    return 0;
}

Q-2 Write a function int factorial(int n) that takes a number as input and returns its factorial
#include <iostream>

int factorial(int n) {
    if (n == 0 || n == 1) 
        return 1;  
    return n * factorial(n - 1);
}

int main() {
    int num = 5;
    std::cout << "Factorial of " << num << " is: " << factorial(num) << std::endl;
    return 0;
}

Q-3 Write a function int reverseNumber(int n) that returns the reversed version of a given number
#include <iostream>

int reverseNumber(int n) {
    int reversed = 0;
    while (n != 0) {
        int digit = n % 10;   // Extract the last digit
        reversed = reversed * 10 + digit;  // Append digit to reversed number
        n /= 10;   // Remove last digit from original number
    }
    return reversed;
}

int main() {
    int num = 12345;
    std::cout << "Reversed number: " << reverseNumber(num) << std::endl;
    return 0;
}

Q-4 Write a function int sumOfDigits(int n) that calculates and returns the sum of digits of a given number.
#include <iostream>

int sumOfDigits(int n) {
    int sum = 0;
    while (n != 0) {
        sum += n % 10;  // Extract the last digit and add to sum
        n /= 10;        // Remove the last digit
    }
    return sum;
}

int main() {
    int num = 12345;
    std::cout << "Sum of digits: " << sumOfDigits(num) << std::endl;
    return 0;
}

Q-5 Write a function bool isPalindrome(int n) that checks if the given number is a palindrome.
#include <iostream>

int isPalindrome(int n) {
    int original = n, reversed = 0;
    while (n > 0) {
        reversed = reversed * 10 + n % 10;  // Reverse the number
        n /= 10;
    }
    return original == reversed ? 1 : 0;  // Return 1 if palindrome, else 0
}

int main() {
    int num = 121;
    if (isPalindrome(num))
        std::cout << "Palindrome" << std::endl;
    else
        std::cout << "Not a palindrome" << std::endl;

    return 0;
}

Q-6 Function to Find the nth Fibonacci Number
#include <iostream>

int fibonacci(int n) {
    if (n <= 1) 
        return n;  // Base case: F(0) = 0, F(1) = 1
    return fibonacci(n - 1) + fibonacci(n - 2);  // Recursive case
}

int main() {
    int n = 10; // Change this value to find a different Fibonacci number
    std::cout << "Fibonacci number at position " << n << " is: " << fibonacci(n) << std::endl;
    return 0;
}

Q-7 Write a function int gcd(int a, int b) that calculates the greatest common divisor of two numbers
#include <iostream>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;  // Remainder
        a = temp;
    }
    return a;
}

int main() {
    int num1 = 48, num2 = 18;
    std::cout << "GCD of " << num1 << " and " << num2 << " is: " << gcd(num1, num2) << std::endl;
    return 0;
}

Q-8 Create an overloaded print() function:
a. One takes a string as an argument
b. Another takes an integer
c. The third takes both a string and an integer

#include <iostream>

using namespace std;

int print(int num) {
    return num;
}

int print(char str[]) {
    cout << str;
    return 0;
}

int print(char str[], int num) {
    cout << str << " " << num;
    return 0;
}

int main() {
    print("Hello");
    cout << endl;
    cout << print(42) << endl;
    print("Age:", 25);
    cout << endl;
    return 0;
}

Q-9 Write a C++ program with a class Calculator that overloads a sum() function to add:
a. Two integers
b. Three doubles
c. One integer and one float

#include <iostream>

using namespace std;

class Calculator {
public:
    // Function to add two integers
    int sum(int a, int b) {
        return a + b;
    }

    // Function to add three doubles
    double sum(double a, double b, double c) {
        return a + b + c;
    }

    // Function to add one integer and one float
    float sum(int a, float b) {
        return a + b;
    }
};

int main() {
    Calculator calc;

    cout << "Sum of two integers: " << calc.sum(5, 10) << endl;
    cout << "Sum of three doubles: " << calc.sum(2.5, 3.1, 4.4) << endl;
    cout << "Sum of one integer and one float: " << calc.sum(7, 2.3f) << endl;

    return 0;
}

Q-10 Overload a function multiply()
d. One version takes two int values and returns their product.
e. Another takes one int and one double.
f. Another takes three float values.

#include <iostream>

using namespace std;

class Calculator {
public:
    // Multiply two integers
    int multiply(int a, int b) {
        return a * b;
    }

    // Multiply one integer and one double
    double multiply(int a, double b) {
        return a * b;
    }

    // Multiply three floats
    float multiply(float a, float b, float c) {
        return a * b * c;
    }
};

int main() {
    Calculator calc;

    cout << "Product of two integers: " << calc.multiply(5, 4) << endl;
    cout << "Product of one int and one double: " << calc.multiply(3, 2.5) << endl;
    cout << "Product of three floats: " << calc.multiply(1.2f, 2.3f, 3.4f) << endl;

    return 0;
}

Q-11 Create an overloaded function greet()
a. One version takes no parameters and prints "Hello!".
b. Another takes a string name and prints "Hello, [name]!".
c. Another takes a string name and an int age, printing "Hello, [name]! You are
[age] years old."

#include <iostream>

using namespace std;

class Greeter {
public:
    // Version 1: No parameters
    const char* greet() {
        return "Hello!";
    }

    // Version 2: Takes a character array (C-style string)
    const char* greet(const char* name) {
        return name;
    }

    // Version 3: Takes a character array and an integer
    int greet(const char* name, int age) {
        cout << "Hello, " << name << "! You are " << age << " years old." << endl;
        return age;
    }
};

int main() {
    Greeter g;

    cout << g.greet() << endl;               // Calls greet() with no parameters
    cout << "Hello, " << g.greet("Alice") << "!" << endl;  // Calls greet(const char*)
    g.greet("Bob", 25);                      // Calls greet(const char*, int)

    return 0;
}

Q-12 Overload a function area()
a. One version calculates the area of a square (takes one int).
b. Another calculates the area of a rectangle (takes two ints).
c. Another calculates the area of a circle (takes a double radius).

#include <iostream>

using namespace std;

class Shape {
public:
    // Area of a square (side * side)
    int area(int side) {
        return side * side;
    }

    // Area of a rectangle (length * width)
    int area(int length, int width) {
        return length * width;
    }

    // Area of a circle (π * radius^2)
    double area(double radius) {
        return 3.14159 * radius * radius;
    }
};

int main() {
    Shape shape;

    cout << "Area of square: " << shape.area(5) << endl;
    cout << "Area of rectangle: " << shape.area(4, 6) << endl;
    cout << "Area of circle: " << shape.area(3.5) << endl;

    return 0;
}

Q-13 Overload a function concat()
a. One version takes two strings and returns their concatenation.
b. Another takes an int and a string, converting the int to a string before concatenation.

#include <iostream>
#include <string>

using namespace std;

class Concatenator {
public:
    // Concatenates two strings
    string concat(string str1, string str2) {
        return str1 + str2;
    }

    // Concatenates an int and a string
    string concat(int num, string str) {
        return to_string(num) + str;
    }
};

int main() {
    Concatenator c;

    cout << "Concatenation of two strings: " << c.concat("Hello, ", "World!") << endl;
    cout << "Concatenation of int and string: " << c.concat(42, " is the answer.") << endl;

    return 0;
}

Q-14 Create an overloaded function power()
a. One version takes two int (base and exponent).
b. Another takes one double and one int.

#include <iostream>
#include <cmath>  // For pow() function

using namespace std;

class Calculator {
public:
    // Power function for two integers (base^exponent)
    int power(int base, int exponent) {
        return pow(base, exponent);
    }

    // Power function for a double base and an int exponent
    double power(double base, int exponent) {
        return pow(base, exponent);
    }
};

int main() {
    Calculator calc;

    cout << "2^3 = " << calc.power(2, 3) << endl;          // Integer base and exponent
    cout << "2.5^3 = " << calc.power(2.5, 3) << endl;      // Double base and int exponent

    return 0;
}

Q-15  Write a function int sum(int count, ...) that takes a variable number of integer 
arguments and returns their sum. The first argument count will specify how many
numbers are passed

#include <iostream>
#include <cstdarg>  // For variadic functions

using namespace std;

int sum(int count, ...) {
    va_list args;
    va_start(args, count);
    int total = 0;
    
    for (int i = 0; i < count; i++) {
        total += va_arg(args, int);
    }

    va_end(args);
    return total;
}

int main() {
    cout << "Sum: " << sum(4, 1, 2, 3, 4) << endl;  // Output: 10
    return 0;
}

Q-16  Write a function int findLargest(int count, ...) that takes a variable number of integer
arguments and returns the largest number among them. The first argument count will
specify how many numbers are passed

#include <iostream>
#include <cstdarg>

using namespace std;

int findLargest(int count, ...) {
    va_list args;
    va_start(args, count);
    int largest = va_arg(args, int);
    
    for (int i = 1; i < count; i++) {
        int num = va_arg(args, int);
        if (num > largest) {
            largest = num;
        }
    }

    va_end(args);
    return largest;
}

int main() {
    cout << "Largest: " << findLargest(5, 10, 25, 5, 50, 15) << endl;  // Output: 50
    return 0;
}

Q-17 Write a function void concatStrings(int count, ...) that takes a variable number of
string arguments and concatenates them into one single string. The first argument
count will specify how many strings are passed.


#include <iostream>
#include <cstdarg>
#include <string>

using namespace std;

void concatStrings(int count, ...) {
    va_list args;
    va_start(args, count);
    string result = "";
    
    for (int i = 0; i < count; i++) {
        result += va_arg(args, const char*);
    }

    va_end(args);
    cout << "Concatenated String: " << result << endl;
}

int main() {
    concatStrings(3, "Hello, ", "World", "!");  // Output: Hello, World!
    return 0;
}

Q-18 Write a function int gcd(int a, int b) that calculates the greatest common divisor of
two numbers using recursion.

#include <iostream>
using namespace std;

int gcd(int a, int b) {
    return (b == 0) ? a : gcd(b, a % b);
}

int main() {
    cout << "GCD: " << gcd(48, 18) << endl;  // Output: 6
    return 0;
}

Q-19 Write a function int factorial(int n) that takes a number as input and returns its
factorial.

#include <iostream>
using namespace std;

int factorial(int n) {
    return (n <= 1) ? 1 : n * factorial(n - 1);
}

int main() {
    cout << "Factorial: " << factorial(5) << endl;  // Output: 120
    return 0;
}

Q-20  Write a function int fibonacci(int n) that returns the nth Fibonacci number using
recursion.

#include <iostream>
using namespace std;

int fibonacci(int n) {
    return (n <= 1) ? n : fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    cout << "Fibonacci(6): " << fibonacci(6) << endl;  // Output: 8
    return 0;
}

Q-21 Write a recursive function string reverseString(string str) that returns the reverse of a
given string. For example, reverseString("hello") should return "olleh"

#include <iostream>
using namespace std;

string reverseString(string str) {
    return (str.length() == 0) ? "" : str.back() + reverseString(str.substr(0, str.length() - 1));
}

int main() {
    cout << "Reversed: " << reverseString("hello") << endl;  // Output: olleh
    return 0;
}

Q-22 Write a recursive function int sumOfNaturalNumbers(int n) that returns the sum of
the first n natural numbers. 

#include <iostream>
using namespace std;

int sumOfNaturalNumbers(int n) {
    return (n == 0) ? 0 : n + sumOfNaturalNumbers(n - 1);
}

int main() {
    cout << "Sum of first 5 numbers: " << sumOfNaturalNumbers(5) << endl;  // Output: 15
    return 0;
}

Q-23 Write a recursive function int power(int base, int exp) that returns base raised to the
power of exp.

#include <iostream>
using namespace std;

int power(int base, int exp) {
    return (exp == 0) ? 1 : base * power(base, exp - 1);
}

int main() {
    cout << "2^3 = " << power(2, 3) << endl;  // Output: 8
    return 0;
}

Q-24 Write a function void swapNumbers(int &a, int &b) that swaps two numbers using
pass-by-reference

#include <iostream>
using namespace std;

void swapNumbers(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5, y = 10;
    swapNumbers(x, y);
    cout << "Swapped: " << x << " " << y << endl;  // Output: 10 5
    return 0;
}

Q-25 Write a function that takes an array of integers and its size as arguments and returns
the sum of all elements in the array.
int sumArray(int arr[], int size);

#include <iostream>
using namespace std;

int sumArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) sum += arr[i];
    return sum;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    cout << "Sum: " << sumArray(arr, 5) << endl;  // Output: 15
    return 0;
}

Q-26  Write a function that takes an array and its size as arguments and returns the
maximum element.
int findMax(int arr[], int size);

#include <iostream>
using namespace std;

int findMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) if (arr[i] > max) max = arr[i];
    return max;
}

int main() {
    int arr[] = {3, 7, 2, 9, 5};
    cout << "Max: " << findMax(arr, 5) << endl;  // Output: 9
    return 0;
}

Q-27  Implement a function that takes an array and its size as arguments and returns the
second largest element using a reference parameter.
int findSecondLargest(int arr[], int size);

#include <iostream>
using namespace std;

int findSecondLargest(int arr[], int size) {
    int first = arr[0], second = -1;
    for (int i = 1; i < size; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }
    return second;
}

int main() {
    int arr[] = {10, 20, 5, 15, 30};
    cout << "Second Largest: " << findSecondLargest(arr, 5) << endl;  // Output: 20
    return 0;
}

Q-28 Implement a function that generates an array of n Fibonacci numbers and returns it
using dynamic memory allocation.
int* generateFibonacci(int n);

#include <iostream>
using namespace std;

int* generateFibonacci(int n) {
    int* fib = new int[n];
    fib[0] = 0;
    if (n > 1) fib[1] = 1;
    for (int i = 2; i < n; i++) fib[i] = fib[i - 1] + fib[i - 2];
    return fib;
}

int main() {
    int n = 7;
    int* fibSeries = generateFibonacci(n);
    
    cout << "Fibonacci Series: ";
    for (int i = 0; i < n; i++) cout << fibSeries[i] << " ";
    
    delete[] fibSeries;  // Free allocated memory
    return 0;
}

Q-29 Define a structure Student with fields name and marks. Pass an array of students to a
function that displays all student details.
struct Student {
string name;
int marks;
};
void displayStudents(Student arr[], int size);

#include <iostream>
using namespace std;

struct Student {
    string name;
    int marks;
};

void displayStudents(Student arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "Name: " << arr[i].name << ", Marks: " << arr[i].marks << endl;
    }
}

int main() {
    Student students[] = {{"Alice", 85}, {"Bob", 90}, {"Charlie", 78}};
    displayStudents(students, 3);
    return 0;
}

Q-30 Write a function that modifies all elements of an array by multiplying them by 2 using
pass-by-reference.
void doubleArray(int (&arr)[6]);

#include <iostream>
using namespace std;

void doubleArray(int (&arr)[6]) {
    for (int i = 0; i < 6; i++) arr[i] *= 2;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    
    doubleArray(arr);
    
    for (int i = 0; i < 6; i++) cout << arr[i] << " ";  // Output: 2 4 6 8 10 12
    return 0;
}

*/