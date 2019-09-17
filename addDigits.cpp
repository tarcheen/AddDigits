/*
 Developer: Hamed Mirlohi
 Date: 09/11/2019
 In this problem we are adding all the digit values of a number for example "123" should return value of 6
 */

#include <iostream>


int main()
{
   int number = 34;
    
    int result = 0;
    
    // as far as the remainder of the division is not zero
    while(number % 10 != 0)
    {
        // accumulate the remainder and divide by 10
        result += number % 10;
        number /= 10;
    }
    std::cout << result << std::endl;
}
