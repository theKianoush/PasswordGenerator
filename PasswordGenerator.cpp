#include <iostream>
#include <time.h>
using namespace std;





int main() {

     srand(time(0));     // seeding for rand()


     // all data
     string data = "abcdefghijklmnopqrstuvwxyz"
                    "ABCDEFHGIJKLMNOPQRSTUVWXYZ"
                    "1234567890"
                    "`~!@#$%^&*()_+-=[]{}|:;<>?,./";
     string pass = "0";

     int x = 0;

     bool loop = true;

     system("Color A");

     while (loop) {


          cout << "Enter Length of password: ";
          cin >> x;

          system("cls");

          for (int i = 1; i <= x; i++) {
               pass = pass + data[rand() % 93]; // getting generated char


          }

          cout << "\n";
          cout << "Your randomly generated password is : " << pass << "\n\n";


          string zero;
          cout << "\nEnter any key to generate another \nPress 0 to quit \n. . .\n\n";
          cin >> zero;
          if (zero == "0") {

               loop = false;
          }

          pass = " ";
          cout << "\n-------------------------------------------------------------------------------\n";
     }



     return 0;
}
