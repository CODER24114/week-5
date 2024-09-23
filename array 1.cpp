#include <iostream> 
using namespace std; 
int main() 
{ 
    int size = 5; 
    int array[size]; 
   
      for (int i = 0; i < size; i++) { 
        cout << "Enter an array: "; 
        cin >> array[i]; 
    } 
       cout << "The array elements are: "; 
          for (int i = 0; i < size; i++)
		   { 
             cout << array[i] << " "; 
    } 
  
    return 0; 
}
