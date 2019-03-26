/*
 *        File: random.cc
 *      Author: Tomas Sanchez
 *        Date: March 25, 2019
 * Description: Program to generate a random array the size of 20 integers.
 *              Uses a sequential search loop in a void function to find the 
 *              position of a target number input by the user
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

//function prototypes
void seqSearch(int random[], size_t size, int target); //void function containing the sequential search algorithm

int main(int argc, char const *argv[]) {

    int random[21];                                    //sets the size of array "random" to 21 places
    int target;                                        //initializes the "target" variable
    size_t size = 21;
    int randomInteger;                                 //intializes the "randomIntegar" variable
    srand(time(NULL));                                 //creates a random number based on the number of seconds counted from January 1st, 1970
        for(size_t i = 0; i < size; i++)               //loop for as long as 'i' is less than size
     {
        randomInteger = rand();                        //sets a randomInteger to a random integer
        random[i] = randomInteger;                     //places the random integer in a position respective to what interation the loop is on
        cout << random[i] << endl;                     //displays the number
     }
    cout << "Enter a target number: ";                 //prompts the user to enter a number
    cin >> target;                                     //sets the entered value to variable "target"
    cout << "Target number " << target << " is in position "; //displays the target number 
    seqSearch(random, size, target);                          //void function call
    
    return 0;                                                 //exit program
}

void seqSearch(int random[], size_t size, int target){
    for(size_t i = 0; i < size; i++){                   //loop as long as i is less than size
        if(target == random[i]){                        //if the target number is found in the array
            cout << i;                                  //display the array position
            exit(1);                                    //end the program
        }
    }
    for(size_t i = 0; i < size; i++){                   //loop as long as "i" is less than size
        if(target != random[i]){                        //if target isn't found in the array
            cout << -1;                                 //display "-1"
            exit(1);                                    //exit program
        }
    }

}
// main

/* Extra credit: Due Tuesday 3/26/2019 (11:59 PM)
 * - Write a program that creates 20 random integers and stores them into
 *   an array of integers.
 * - Write the sequential random function.
 * - In your main program, output all the elements of the array. Ask the user for
 *   a target number and call the random function to find and locations of the target
 *   in the array. Output the location.
 *
 * Create a public repository on GitHub, push your code to the repository and
 * tag me (@nasseef) in the final commit message. Please make sure your program works
 * before you tag me.
 * Do not email me your program. (How often has this happened that you had to make a note of it?)
 */
