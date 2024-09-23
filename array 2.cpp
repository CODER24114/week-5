#include <iostream> 
using namespace std; 
int main() 
{ 
    int size = 5 , sum ;
    int array[size]; 
   cout << "Enter an array: ";
      for (int i = 0; i < size; i++) 
	  {    
        cin >> array[i]; 
      }
       cout<<"the sum of array : ";
         for(int i=0;i<size;i++)
         {
         	sum = sum + array[i];
		 }
		 cout<<"sum: "<<sum;
      return 0 ;
	  
		 }   
