#include <stdio.h>
int maxArea(int* height, int heightSize) {
   int i = 0, k = 0;
   int j = heightSize - 1;
   int max_area = 0;

   while (i < j) {
       if (height[i] <= height[j]) {
           if (height[i] * (j - i) > max_area) {
               max_area = height[i] * (j - i);
           }
           i++;
       } else {
           if (height[j] * (j - i) > max_area) {
               max_area = height[j] * (j - i);
           }
           j--;
       }
   }

   return max_area;
}

int main () {
    // test1
    {
        int height[] = { 1, 8, 6, 2, 5, 4, 8, 3, 7 };
        int height_length = 9;
        int max_area = maxArea(height, height_length);
        printf("TEST1\n");
        printf("expected = %d\n", 49);
        printf("output = %d\n", max_area);
    }
    // test2
    {
        int height[] = { 1, 1 };
        int height_length = 2;
        int max_area = maxArea(height, height_length);
        printf("TEST2\n");
        printf("expected = %d\n", 1);
        printf("output = %d\n", max_area);
    }
    return 0;
}
