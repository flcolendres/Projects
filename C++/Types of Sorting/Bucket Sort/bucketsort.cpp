#include <iostream>

void insertionSort(float bucket[]);
int main()
{
   const int n = 10;
   float bucket[n] = {0};
   float arr[n] = { 0.25f, 0.33f, 0.0f, 0.1f, 0.99f, 0.98f, 0.2, 0.7f, 0.32f, 0.98f };
   for (int i = 0; i < n; i++)
   {
      bucket[int(n * arr[i])] = arr[i];
   }
   for (int i = 0; i < n; i++)
   {
      insertionSort(&bucket[i]);
   }
   for (int i = 0; i < n; i++) std::cout << bucket[i] << " ";
}

void insertionSort(float bucket[])
{
   int i, j;
   float current;
   for (i = 0; i < 10; i++)
   {
      current = bucket[i];
      //for (j = i; j > 0 && arr[j - 1] > current; j--) //ascending
      for (j = i; j > 0 && bucket[j - 1] < current; j--) //descending
      {
         bucket[j] = bucket[j - 1];
      }
      bucket[j] = current;
   }
   for (int i = 0; i < 10; i++) std::cout << bucket[i] << " ";
}

// pseudocode from freecodecamp.org
/*void bucketSort(float[] a, int n)
{

   for (each floating integer 'x' in n)

   {
      insert x into bucket[n * x];
   }

   for (each bucket)

   {
      sort(bucket);
   }

}
*/ 