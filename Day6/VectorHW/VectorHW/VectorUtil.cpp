/*
  Author: Daniel Kopta and ??
  July 2017
  
  CS 6010 Fall 2019
  Vector util library definitions
  Complete the functions defined in this file.
  Some basic tests for your library are provided in VectorTest.cpp.
  Compile the tests together with your library using the following command:
  clang++ -std=c++11 VectorTest.cpp VectorUtil.cpp
  Most of the provided tests will fail until you have provided correct 
  implementations for the VectorUtil library functions.
  You will need to provide more thorough tests.
*/

#include "VectorUtil.h"

/*
 * Determines whether or not a vector contains a certain item.
 *
 * Parameters:
 *   input -- The vector to search
 *   lookFor -- The item to look for
 *
 * Returns:
 *   Whether or not the item is contained in the vector
 */
bool Contains( vector<int> input, int lookFor )
{
 
    for (int i = 0; i < input.size(); i++){
        if (input[i] == lookFor){
            return true;
        }
    }
    
  return false;
}

/*
 * Determines the minimum value in a vector.
 *
 * Assumes the vector is non-empty.
 *
 * Parameters:
 *   input -- A vector of integers
 *
 * Returns:
 *   The smallest item in the vector
 */
int FindMin( vector<int> input )
{
    int minVal = input[0]; //creating minVal with the first element of the vector
    for (int i = 1; i <= input.size(); i++){
        if (input[i] < minVal){
            minVal = input[i]; //if there is a smaller number, it is set to the minVal
        }
    }
    return minVal; //new minVal returned
}

/*
 * Determines the maximum value in a vector.
 *
 * Assumes the vector is non-empty
 *
 * Parameters:
 *   input -- A vector of integers
 *
 * Returns:
 *   The largest item in the vector
 */
int FindMax( vector<int> input ){

    int maxVal = input[0]; //creating maxVal with the first element of the vector
    for (int i = 1; i < input.size(); i++){
        if (input[i] > maxVal){
            maxVal = input[i]; //if there is a larger number than inputi , it is set to maxVal
        }
    }
    return maxVal;
}

/*
 * Determines the average of all values in a vector
 *
 * Assumes the vector is non-empty
 *
 * Parameters:
 *   input -- A vector of integers
 *
 * Returns:
 *   The (integer) average of all values in the vector
 */
int Average( vector<int> input )
{
    //finds the sum by looping through each int in the input size and adds them together
    int sum = 0;
    for (int i = 0; i < input.size(); i++){
        sum += input[i];
    }
    //taking the sum and dividing it by the size of hte input vector
  int avg = sum/input.size();
    
  return avg;
}


/*
 * Determines whether or not the items in a vector are in non-descending order
 *
 * Non-descending order is similar to ascending order, except that it allows for 
 * duplicate items to appear next to each other.
 * i.e., no item appearing at a lower index than another item is greater than that
 * other item.
 * 
 * Examples:
 *  {1, 2, 2, 15, 70} is sorted true
 *  {2, 3, 0} is not sorted false
 *
 * Parameters:
 *   input -- A vector of integers
 *
 * Returns:
 *   True if the vector is sorted in non-descending order, false otherwise
 *   An empty vector is considered sorted, since there are no items out of order
 *   A single-item vector is considered sorted, since there are no items out of order
 */


bool IsSorted( vector<int> input ){
    //sorted
    //checking if 
    for (int i = 0; i < input.size() - 1; i++){
        if (input[i] > input[i + 1]){
            return false;
            
        }
    
    }
return true;
}
