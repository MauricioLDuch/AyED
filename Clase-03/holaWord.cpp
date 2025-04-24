#include <iostream> //  It is a header file library that lets us work with input and output objects, such as cout
using namespace std; // means that we can use names for objects and variables from the standard library

int main() { // Function
    
    int edad = 19; // type variableName = value

    cout << "Hello World!" << endl;   // endl is for clean the buffer. Always I have to use in the end of the line.
    
    cout << "Ingrese la edad porfavor: "; // This line show txt in the terminal  
    cin >> edad ; // On the other hand, this line waiting for join some text
    cout << "Su edad es: " << edad; // Here show the text + variable

    return 0;
}