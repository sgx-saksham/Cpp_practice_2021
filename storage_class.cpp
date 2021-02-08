// storage class declaration
// local global and static local
#include <iostream>
using namespace std;

// Global variable declaration
int global_Variable = 12;

void test()
{
    // var is a static variable
    static int var = 0;
    ++var;
    cout << "static local variable : " << var << endl;

    // global variable is being used
    ++global_Variable;
    // Outputs 14
    cout << "global variable : " << global_Variable << endl;

    // local variable to test()
    int var1;
    var1 = 6;
    // illegal: var2 not declared inside test() so we have to used the same thing what we declared
    cout << "local variable of test : " << var1 << endl;
}

int main()
{
    // local variable is used here
    int var2 = 5;
    cout << "local variable of main : " << var2 << endl;
    // global variable is used here
    ++global_Variable;
    // Outputs 13 on global variable
    cout << "global variable : " << global_Variable << endl;
    test();
    //once again for static variable and global variable to get increment and to prove that local wont be accessible neither will it increse
    test();

    return 0;
}
// output :
// local variable of main : 5   ::: As compiler goes to main() first thing comes the local variable
// global variable : 13         ::: The second thing comes is the global variable which is incremented and became 13 and it will happen globally
// static local variable : 1    ::: Now we goto the test () first thing comes is static local variable
// global variable : 14         ::: As we moved forward in test() we get the global variable once again and it is incremented and saved globally
// local variable of test : 6   ::: The test function had its own local variable so it was printed
//                              ::: We came back to main() and we again move towards the test()
// static local variable : 2    ::: In test() we have the first thing that is static local variable which is again incremented
// global variable : 15         ::: As we moved forward in test() we get the global variable once again and it is incremented and saved globally
// local variable : 6           ::: Local variable remains the same as defined so no changes