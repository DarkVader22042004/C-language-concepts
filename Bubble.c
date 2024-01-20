#include <stdio.h>
int main()
{

    int size, temp;
    printf("Enter the size of the array:\n");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("The elements after the sort :\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}
/*Different sorting algorithms have different strengths and weaknesses, and the choice of which algorithm to use depends on various factors such as the size of the data set, the nature of the data, and the desired time or space complexity. Here's a brief overview of some common sorting algorithms and their typical use cases:

1. **Bubble Sort:**
   - Not commonly used for large datasets.
   - Simple and easy to understand.
   - Used for educational purposes or small datasets with minimal computational cost.

2. **Selection Sort:**
   - Similar to bubble sort, not efficient for large datasets.
   - Used for educational purposes or small datasets with minimal computational cost.

3. **Insertion Sort:**
   - Efficient for small datasets or nearly sorted datasets.
   - Adaptive and stable.
   - Simple and has low overhead.

4. **Merge Sort:**
   - Efficient for large datasets.
   - Stable and predictable performance.
   - Suitable for linked lists as well as arrays.
   - Consistent performance, O(n log n) time complexity.

5. **Quick Sort:**
   - Efficient for large datasets.
   - In-place sorting and typically faster than merge sort in practice.
   - Unstable but can be modified to be stable.
   - Average time complexity O(n log n), worst-case O(n^2) (rare).

6. **Heap Sort:**
   - Efficient for large datasets.
   - In-place sorting with a small constant factor.
   - Not as cache-friendly as quicksort.
   - Average time complexity O(n log n).

7. **Radix Sort:**
   - Efficient for sorting integers or strings with fixed-size keys.
   - Linear time complexity, but may have a high constant factor.
   - Requires additional space.

8. **Bucket Sort:**
   - Efficient for uniformly distributed data.
   - Often used when the input is uniformly distributed over a range.
   - Requires extra space for buckets.

Here are the average and worst-case time complexities for the mentioned sorting algorithms:

Bubble Sort:

Average Case: O(n^2)
Worst Case: O(n^2)

Selection Sort:

Average Case: O(n^2)
Worst Case: O(n^2)

Insertion Sort:

Average Case: O(n^2)
Worst Case: O(n^2)

Merge Sort:

Average Case: O(n log n)
Worst Case: O(n log n)

Quick Sort:

Average Case: O(n log n)
Worst Case: O(n^2) [rare, depends on pivot selection]

Heap Sort:

Average Case: O(n log n)
Worst Case: O(n log n)

Radix Sort:

Average Case: O(d * (n + k)), where d is the number of digits, n is the number of elements, and k is the radix (base) of the numbers.
Worst Case: O(d * (n + k))

Bucket Sort:

Average Case: O(n + k), where n is the number of elements and k is the number of buckets.
Worst Case: O(n^2) if each element goes to the same bucket.

It's important to note that these complexities are expressed in terms of the number of comparisons and swaps made during the sorting process. The actual performance may vary depending on factors like implementation details, hardware architecture, and the characteristics of the input data.
The choice of sorting algorithm often depends on the specific characteristics of the data you're working with and the requirements of your application. It's important to consider factors such as time complexity, space complexity, stability, and whether the data is already partially sorted. In practice, many programming languages and libraries provide built-in sorting functions that are optimized for common use cases.*/