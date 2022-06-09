#include <iostream>
#include <time.h>
using namespace std;





int main() {

     srand(time(0));     // seeding for rand()
     

     // all data
     string data = "abcdefghijklmnopqrstuvwxyzABCDEFHGIJKLMNOPQRSTUVWXYZ";
     string pass;

     int x ;

     bool loop = true;

     while (loop) {


          cout << "Enter Length of password: ";
          cin >> x;



          for (int i = 1; i < x; i++) {
               pass = pass + data[rand() % 93]; // getting generated char


          }

          cout << "\n";
          cout << "Your randomly generated password is : " << pass << "\n\n";


          string zero; 
          cout << "\nPress any key to generate another \nPress 0 to quit \n. . .\n\n";
          cin >> zero;
          if (zero == "0") {
          
               loop = false;
          }

          cout << "\n-------------------------------------------------------------------------------\n";
     }
           
          

     return 0;
}