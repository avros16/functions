#include <iostream>
#include <cmath> 

using namespace std; 

// add return type of the function. int, float, string etc. Does not return anything, return void. this will not print
void message () {
   cout << "this is a test message" << endl;
}


int main() {

  int count{0};
  
  while (count <= 5 ) {
  message ();
    count++;
  }


  
// functions always have parenthasis. Paramteres go inside the (). 
  // floor(5.2) = 5
  // ceil(5.2) = 6
  // have to include lib cmath
  // cout << pow(5,4) (this is the exponoents to 5 to the power of 4)
  // cout <<log10(10) 
  





  
}