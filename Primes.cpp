#include <iostream>
#include <string>


int main()
{
    std::cout << "This program documents all the primes you enter. \n";
    int i, n;
    bool done = false;
   
    do{
        std::cout << "Enter a positive integer: ";
        unsigned value;
        std::cin >> value;
       
        while (value <= 0)
        {
            //while value is negative
            while(value <= 0) {
                std::cout << "Enter a positive integer: ";
                std::cin >> value;
            }
           
            if(!std::cin)
            {std::cout << "Invalid input.";
                std::cin.clear();
            }
        }
       
       
       
        std::cout << "Enter more values? y/n: ";
        char choice;
        std::cin >> choice;
        done = (choice == 'n');
    }while(not done);
    
  return 0;  
}  
