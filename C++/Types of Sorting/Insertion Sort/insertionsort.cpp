#include <iostream>

int main() 
{
   int i, j;
   int current;
   int arr[10] = { 10, 105, 99, 41, 0, 9000, 812, 23, 1, 34 };
   for (i = 0; i < 10; i++)
   {
      current = arr[i];
      //for (j = i; j > 0 && arr[j - 1] > current; j--) //ascending
      for (j = i; j > 0 && arr[j - 1] < current; j--) //descending
      {
         arr[j] = arr[j - 1];
      }
      arr[j] = current;
   }
   for (int i = 0; i < 10; i++) std::cout << arr[i] << " ";
   return 0;
}