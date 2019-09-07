/*
 * CSc103 Project 2: prime numbers.
 * See readme.html for details.
 * Please list all references you made use of in order to complete the
 * assignment: your classmates, websites, etc.  Aside from the lecture notes
 * and the book, please list everything.  And remember- citing a source does
 * NOT mean it is okay to COPY THAT SOURCE.  What you submit here **MUST BE
 * YOUR OWN WORK**.
 * References:
 *
 */

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <cmath>
int main()
{
 int number; //sets an integer for the inputted number.
 while (cin >> number){ //sets a loop in which the input is going to be in.
 int notprime=0; //sets an integer for notprime for later use.
  if (number > 0) //runs the if statement of the inputted number, making sure the inputted number is above 0.
   for (int x=number-1; x > 1; x--) //setting the integer of x, which is number-1. x will decrease everytime it runs the loop until x reaches 1.
     if (number%x==0){ //sets another if statement which will determine if number is divisible by x as the loop runs.
      notprime++; //if it is divisible, then the notprime integer from before would increase by 1.
     break;} //it breaks out of the loop once notprime increases by 1.
  if(notprime>0 || number==1) //another if statement is made for the notprime integer.
   cout<<"0\n"; //if the notprime integer is above 0 then it would output 0 which is not prime.
  else //an else statement in case the notprime integer is otherwise not above zero.
   cout<<"1\n"; //it would output 1, which is prime.
 }
  return 0;
  }