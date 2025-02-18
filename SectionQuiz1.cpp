#include <iostream>
using namespace std;

int main()
{
   int numberr;


   std::cout <<"Type your favorite number between 1 and 100: ";

   std::cin >> numberr;


   while (numberr <= 0  || numberr > 100)
   {
    std::cout <<"Your number is not between 1 and 100, please type again: " << std::endl;
    std::cin >> numberr;
   }
   if(numberr > 0 && numberr < 101){


    std::cout <<"Amazing, that's my favorite number too! " << std::endl;
    std::cout <<"No, really!!! " << numberr << " is my favorite number!" << std::endl;
   }
   system("pause");
   return 0;
   }