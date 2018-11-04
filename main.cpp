#include <iostream>
#include "AppendableArray.h"


using namespace std;




int main() {                                //  +------------------------------------------+
                                            //  | OUTPUT            |  EXPLANATION         |
    const int TESTSIZE = 4;                 //  +-------------------|----------------------+
    int test[TESTSIZE] = { 1,2,3,4 };       //                      |    normal int-array.
                                            //                      | 
    AppendableArray arr(test, TESTSIZE);    //                      |    create appendable arrays.
    AppendableArray arr2(test, TESTSIZE);   //                      |     
    arr.display();  //  ----------------------  array[ 1, 2, 3, 4 ] |    
    arr.append(40);                         //                      |    adds 40 to the back
    arr.display();  //  ----------------------  array[ 1, 2, 3, 4, 40 ]	
    arr.append(arr2);                       //                      |    Appends two appendable arrays
    arr.display();                          // array[ 1, 2, 3, 4, 40, 1, 2, 3, 4 ]
    arr.change(0, 1994);                    //                      |    change index 0 to 1994
    arr.display();                          // array[ 1994, 2, 3 ...]
    int len = arr.len();                    //                           Get length of array
                                            // 
    cout << "len = " << len << '\n';        // len = 9	
    
    for (int i = 0; i < len; i++)
        cout << "\nindex of "
        << i 
        << " = " 
        << arr.index(i) << '\n';            // index of 0 = 1... etc  |   get the index of appendable array
    
    
    return 0;

}
