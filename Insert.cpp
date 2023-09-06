#include <iostream>

int* insertValue (int* originalArray, int positionToInsertAt, int ValueToInsert, int sizeOfOriginalArray)
{
  int* newArray = new int[sizeOfOriginalArray + 1];

  
  for (int i=0; i<=sizeOfOriginalArray; ++i)
  {
    if (i < positionToInsertAt)  
    {
       newArray[i] = originalArray[i];
    }
  
    if (i == positionToInsertAt)  
    {
      newArray[i] = ValueToInsert;
    }
 
    if (i > positionToInsertAt)  
    {
      newArray[i] = originalArray[i-1];
    }
  }
return newArray;
}

int main()
{
  int numbers[10]={1,2,3,4,5,6,7,8,9,10};
  for (int y=0;y<10;y++)
    std::cout << numbers[y] << " ";
  std::cout << std::endl;
   int* z = insertValue(numbers,2,19,11);
   for (int y=0;y<11;y++)
    std::cout << z[y] << " ";
  delete[] z;
  return 0;

}
