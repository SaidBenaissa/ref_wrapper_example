/*In this example, we create a reference wrapper to an integer variable called value. We then pass this reference wrapper to a function called print_int, which takes an int& argument. Inside the function, we print the value of the referenced integer variable.

After printing the initial value of value using the reference wrapper, we modify the value of value and then print it again using the same reference wrapper. The updated value of value is printed
correctly, since the reference wrapper maintains a reference to the same object throughout the program.*/

#include <iostream>
#include <functional> // needed for std::reference_wrapper

void print(int & i) {
    std::cout << " value = "<< i << std::endl;
}

int main(){
    int j = 20;
    std::reference_wrapper<int> ref(j);
    print(ref);
    j = 30;
    print(ref);

    return 0;
}