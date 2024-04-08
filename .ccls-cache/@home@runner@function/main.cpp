#include <iostream>
#include <cmath> 

using namespace std; 

int gettingprice(int tickets) {
int price{0}; 
int age{0};
int counter{1};

while (counter <= tickets) {
     
     cout << "What is the age for ticket number " << counter << " "; 
     cin >> age;
 counter ++;
     if (age > 5) {
       price += 5;
     } else if (age <5) {
       price += 2;
     }
   }
 
   return price;
}


 int main() {

   

int tickets{0};
int final_price{0};
   


   cout << "Hello, how many tickets would you like? ";
   cin >> tickets; 
   
   final_price = gettingprice(tickets);
   cout << "Final price is: " << final_price;


   
 
}