#include <iostream>
using namespace std;
//REMOVE COMMENTS TO USE VARIOUS FUNCTION CALLING METHODS
// function declaration
void swaper(int &, int &); // call  by reference
//void swaper(int *,int * );// call by address
//void swaper(int,int );//call by value

int main()
{
    // local variable declaration:
    int a = 100;
    int b = 200;
    /* calling a function to swap the values using variable reference.*/
    swaper(a, b); // call by reference
    //swaper(&a, &b); //call by address
    //swaper(a, b); // call by value
    cout << "After swap, value of a :" << a << endl;
    cout << "After swap, value of b :" << b << endl;

    return 0;
}

//CALL BY refernce DEFINATION
void swaper(int &x, int &y) // x and y are ref variable..ie they are other name for a and b
{
    int temp;
    temp = x; //save the value as x which is ref for a
    x = y;    // put y into x
    y = temp; // put x into y
}
//CALL BY ADD DEFINATION
/*void swaper(int *x, int *y) {
   int temp;
   temp = *x; //save the value at address x
   *x = *y;    // put y into x
   *y = temp; // put x into y
*/

// CALL BY VALUE DEFINATION
/* void swaper(int x, int y) {
   int temp;
   temp = x; // save the value of local x
   x = y;    // put local y into local x
   y = temp; //put local x into local y
*/