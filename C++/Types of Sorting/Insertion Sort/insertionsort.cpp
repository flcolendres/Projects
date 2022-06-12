#include <iostream>

int main() 
{
   int current;
   int arr[10] = { 10, 105, 99, 41, 0, 9000, 812, 23, 1, 34 };
   for (int i = 0; i < 10; i++)
   {
      current = arr[i];
      for (int j = i; j > 0 && arr[j - 1] > arr[j]; j--)
      {
         arr[j] = arr[j - 1];
      }
      arr[i] = current;
   }
   return 0;
}