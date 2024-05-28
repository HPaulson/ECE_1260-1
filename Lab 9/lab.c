/*
Hunter Paulson
ECE 1261 - Lab 9
The learning objectives for this lab are:
1. learn how to work with 1-D and 2-D arrays using single and nested loops
2. learn how to pass arrays to functions, and the concept of “pass-by-reference” (for arrays). 3. to introduce the student to C strings.
*/
#include <printf.h>
#include <string.h>

void scalarXply(double scalar, int cols, int rows, double matrix[cols][rows], double result[cols][rows])
{
    for (int c = 0; c < cols; c++)
    {
        for (int r = 0; r < rows; r++)
        {
            result[c][r] = matrix[c][r] * scalar;
        }
    }
}

void matrixPrint(int cols, int rows, double arr[cols][rows])
{
    for (int r = 0; r < rows; r++)
    {
        for (int c = 0; c < cols; c++)
        {
            if (c == 0)
                // Indent beginning of matrix, just looks nicer
                printf("    ");

            printf("%g", arr[c][r]);

            if (c != cols - 1)
                printf(", ");
        }
        printf("\n");
    }
}

int checkPal(int size, char word1[size], char word2[size])
{

    for (int i = 0; i < size; i++)
    {
        if (word1[i] != word2[size - (i + 1)])
        {
            return 0;
        }

        if (i == size - 1 && word1[size - 1] == word2[0])
        {
            return 1;
        }
    }
    return 0;
}

int main(void)
{
    double scalar = -3;
    const int cols = 2;
    const int rows = 3;

    double matrix[cols][rows] = {{5, 7, 4}, {1, -4, 1}};
    double result[cols][rows];

    scalarXply(scalar, cols, rows, matrix, result);
    printf("Original Matrix:\n");
    matrixPrint(cols, rows, matrix);
    printf("Resultant Matrix:\n");
    matrixPrint(cols, rows, result);

    char word1[] = "test";
    char word2[] = "tset";
    int size = strlen(word1);

    int isPal = checkPal(size, word1, word2);

    if (isPal)
        printf("%s and %s are palindromes\n", word1, word2);
    else if (!isPal)
        printf("%s and %s are not palindromes\n", word1, word2);

    return 0;
}