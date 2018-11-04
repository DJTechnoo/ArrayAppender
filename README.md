# ArrayAppender

## The Idea

With this small library you can append `int` values to an `int array`.
You can even append a whole `array` to another array!

## Example Usage

### Ways to declare an `AppendableArray`

Using the class `AppendableArray` we create an object:
````
  AppendableArray arr1;     // the array is: [ 0 ]
  AppendableArray arr2(2);  // the array is: [ 0, 0 ]
  
  int intArray[3] = {1,2,3};          // create a real int array
  AppendableArray arr3(intArray, 3);  // the array is [ 1, 2, 3 ]
````

### Functions

With the functions we can do various things. The most important one is `append`.
Let's see how it works using what we have from the example above:

````
  arr2.append(3);     // appends value 3 so it becomes: [ 0, 0, 3 ]
  arr2.append(arr3);  // appends the entire array of arr3 so it becomes [ 0, 0, 3, 1, 2, 3]
````
We can also get the length, display the array, and access indeces of arrays:
````
  int len = arr3.len();   // len = 6
  arr3.display();         // output is: arr[ 0, 0, 3, 1, 2, 3 ]
  arr3[0] = 10;           // array is now: [ 10, 0, 3, 1, 2, 3]
  arr3[2] += arr3[0];     // array is now: [10, 0, 13, 1, 2, 3] 
````

## Installation
Copy the `AppendableArray.h` and the `AppendableArray.cpp` files into your working folder.
