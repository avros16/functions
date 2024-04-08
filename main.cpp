#include <iostream>
#include <cmath> 

using namespace std; 
//delcare a function but define under main VV
// -- void  welcome_message();

//defining a function. void cauuse it doesnt give anything. no input no output function
void welcome_message(){
  
  cout <<"welcome to csci 271";
  
}


//input, no output
void add_func(int num1, int num2) {
  
int sum{0};
sum = num1 + num2;
  cout <<"The value of their sum is " << sum;
  
}




 int main() {


   //call function 
   welcome_message(); // semicolon
   int num1 =5;
   int num2 =3;
   //call function
   add_func(num1,num2);
   
 
}