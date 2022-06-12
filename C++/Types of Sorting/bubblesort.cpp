#include <iostream>
int main()
{

   int num[6] = { 2, 1, 90, 0, 55, 33 };
   for (int i = 0; i < 6; i++)
   {
      for (int j = 0; j < 6 - 1; j++)
      {
         //if (num[j] < num[j + 1])    // descending order
         if (num[j] > num[j + 1])    // ascending order
         {
            int tmp;
            tmp = num[j];
            num[j] = num[j + 1];
            num[j + 1] = tmp;
         }
      }
   }
   for (int i = 0; i < 6; i++) std::cout << num[i] << " ";
   return 0;
}