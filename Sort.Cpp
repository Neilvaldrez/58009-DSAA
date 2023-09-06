#include <iostream>

void disp(int arr1[], int num)
{
    for (int i = 0; i < num; i++)
    {
        std::cout << arr1[i] << " ";
    }
    std::cout << std::endl;
}

void reverse(int arr1[], int num)
{
    int left = 0;
    int right = num - 1;
    while (left < right)
    {
        int temp = arr1[left];
        arr1[left] = arr1[right];
        arr1[right] = temp;
        left++;
        right--;
    }
}

int main()
{
    int arr1[] = {5, 4, 3, 2, 1};
    int num = sizeof(arr1) / sizeof(arr1[0]);

    reverse(arr1, num);
    disp(arr1, num);

    return 0;
}

