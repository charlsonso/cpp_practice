/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    
    bool expression;
    int* one = nullptr;
    int* two = nullptr;
    
    //expression = one && two;
    expression = one == nullptr && two == nullptr;
    expression = one != nullptr && two != nullptr;
    expression = one != nullptr || two != nullptr;
    expression = one != nullptr || two != nullptr;
    
    if (expression) printf("true\n");
    if (!expression) printf("false\n");
    return 0;
}

