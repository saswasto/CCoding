// question:
// From a list of numbers, move zero to the end of the list using c programming
#include <stdio.h>
void reorder(int A[], int n)
{
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        if (A[i] != 0) {
            A[k++] = A[i];
        }
    }
    for (int i = k; i < n; i++) {
        A[i] = 0;
    }
}
int main(void)
{
    int A[] = { 6, 0, 8, 2, 3, 0, 4, 0, 1 };
    int n = sizeof(A) / sizeof(A[0]);

    reorder(A, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }

    return 0;
}
