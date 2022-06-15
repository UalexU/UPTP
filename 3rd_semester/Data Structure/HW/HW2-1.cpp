#include <iostream>
using namespace std;
/*Prompt the user to enter two sparse matrices of the same size (validate the input), convert them into
triplet representation and print them out. Please implement triplets in the format a[m][3].*/
// int main(void)
// {

//     int i, j, k1 = 0, n, m, l = 0;
//     int zeros = 0, elements = 0;
//     int a[10][10], b[10][10], t1[10][3], t2[10][3];

//     // Enter values for the two matrices
//     cout << "Enter the rows of the first array" << endl;
//     cin >> n;
//     cout << "Enter the columns of the first array" << endl;
//     cin >> m;
//     cout << "Enter the values of the matrix" << endl;
//     // Input the elements of the first matrix
//     for (i = 0; i < n; i++)
//     {
//         for (j = 0; j < m; j++)
//         {
//             cin >> a[i][j];
//             elements++;
//             // Count the zeros in the matrix
//             if (a[i][j] == 0)
//             {
//                 zeros++;
//             }
//         }
//     }
//     // Triplet representation
//     for (i = 0; i < n; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             if (a[i][j] != 0)
//             {
//                 // Saves the row index, column index, and the value of the position in the triplet
//                 t1[k1 + 1][0] = i;
//                 t1[k1 + 1][1] = j;
//                 t1[k1 + 1][2] = a[i][j];
//                 // Adds one more row
//                 k1++;
//             }
//         }
//     }
//     t1[0][0] = n;
//     t1[0][1] = m;
//     t1[0][2] = k1;

//     cout << endl;
//     if (elements / 2 <= zeros)
//         cout << "This is a sparse matrix";
//     else
//     {
//         cout << "Please input a sparse matrix";
//         exit(EXIT_FAILURE);
//     }

//     cout << endl
//          << "The triplet representation is: " << endl
//          << "Row "
//          << "Column "
//          << "Value " << endl;
//     for (i = 0; i < k1; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             cout << t1[i][j] << '\t';
//         }
//         cout << endl;
//     }

//     ///////// 2nd matrix /////////////
//     elements = 0, k1 = 0, zeros = 0, l = 0;
//     cout << endl;
//     cout << "Enter the values of the second matrix" << endl;

//     for (i = 0; i < n; i++)
//     {
//         for (j = 0; j < m; j++)
//         {
//             cin >> b[i][j];
//             elements++;
//             if (b[i][j] == 0)
//             {
//                 zeros++;
//             }
//         }
//     }

//     for (i = 0; i < n; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             if (b[i][j] != 0)
//             {
//                 t2[k1 + 1][0] = i;
//                 t2[k1 + 1][1] = j;
//                 t2[k1 + 1][2] = b[i][j];
//                 k1++;
//             }
//         }
//     }
//     t1[0][0] = n;
//     t1[0][1] = m;
//     t1[0][2] = k1;
//     cout << endl;
//     if (elements / 2 <= zeros)
//         cout << "This is a sparse matrix";
//     else
//     {
//         cout << "Please input a sparse matrix";
//         exit(EXIT_FAILURE);
//     }

//     cout << endl
//          << "The triplet representation is: " << endl
//          << "Row "
//          << "Column "
//          << "Value " << endl;
//     for (i = 0; i < k1; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             cout << t2[i][j] << '\t';
//         }
//         cout << endl;
//     }

//     return 0;
// }
/*Then, please also sum the two sparse matrices that were input (using their triplet representation).
Please consider that:
a. If you are summing up triplets of different sizes, let’s say a[4][3] and b[3][3], your resulting triplet
should be of size c[7][3] in the worst case (when no elements are in the same position so they
cannot be summed up).
b. To sum the two triplets, you need to check if the elements are at the same position (row and
column). To do so, you may need to iterate and compare positions of elements in a and b using
two different countser (i for a and j for b).
c. To fill the resulting triplet (the one with the sum of elements) you need to compare:
i. If elements of a and b are in the same row position and then check if they are in same
column position too. If so, you can sum the non-zero values and fill c with the position
and the resulting value.
ii. If elements in a and b are in the same row, but in different columns, you need to check
which one is in a lower column position and then place the one with lower column
position in c.
iii. If none of the above conditions are met, you can fill the element with its positions in c*/

int main(void)
{
    int i, j, v1, v2;
    int l = 0, a;
    int k1 = 0, k2 = 0, k3 = 0, n1, m1, n2, m2;
    int zeros = 0, elements = 0;
    int a[10][10], b[10][10], c[10][10], t1[100][3], t2[100][3], t3[v1 + v2 + 1][3];
    cout << "SUM OF MATRIX" << endl;
    // Enter values for the two matrices
    cout << "Enter the rows of the first matrix" << endl;
    cin >> n1;
    cout << "Enter the columns of the first matrix" << endl;
    cin >> m1;
    cout << "Enter the values of the matrix" << endl;
    // Input the elements of the first matrix
    for (i = 0; i < n1; i++)
    {
        for (j = 0; j < m1; j++)
        {
            cin >> a[i][j];
            elements++;
            // Count the zeros in the matrix
            if (a[i][j] == 0)
            {
                zeros++;
            }
            else
                v1++;
        }
    }
    // Triplet representation
    for (i = 0; i < n1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (a[i][j] != 0)
            {
                // Saves the row index, column index, and the value of the position in the triplet
                t1[k1 + 1][0] = i;
                t1[k1 + 1][1] = j;
                t1[k1 + 1][2] = a[i][j];
                // Adds one more row
                k1++;
            }
        }
    }
    t1[0][0] = n1;
    t1[0][1] = m1;
    t1[0][2] = k1;

    cout << endl;
    if (elements / 2 <= zeros)
        cout << "This is a sparse matrix";
    else
    {
        cout << "Please input a sparse matrix";
        exit(EXIT_FAILURE);
    }

    cout << endl
         << "The triplet representation is: " << endl
         << "Row "
         << "Column "
         << "Value " << endl;
    for (i = 0; i < k1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << t1[i][j] << '\t';
        }
        cout << endl;
    }

    ///////// 2nd matrix /////////////
    elements = 0, k1 = 0, zeros = 0, l = 0;
    cout << "Enter the rows of the second matrix" << endl;
    cin >> n2;
    cout << "Enter the columns of the second matrix" << endl;
    cin >> m2;
    cout << endl;
    cout << "Enter the values of the second matrix" << endl;

    for (i = 0; i < n2; i++)
    {
        for (j = 0; j < m2; j++)
        {
            cin >> b[i][j];
            elements++;
            if (b[i][j] == 0)
            {
                zeros++;
            }
            else
                v1++;
        }
    }

    for (i = 0; i < n2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (b[i][j] != 0)
            {
                t2[k2 + 1][0] = i;
                t2[k2 + 1][1] = j;
                t2[k2 + 1][2] = b[i][j];
                k2++;
            }
        }
    }
    t2[0][0] = n2;
    t2[0][1] = m2;
    t2[0][2] = k2;
    cout << endl;
    if (elements / 2 <= zeros)
        cout << "This is a sparse matrix";
    else
    {
        cout << "Please input a sparse matrix";
        exit(EXIT_FAILURE);
    }

    cout << endl
         << "The triplet representation is: " << endl
         << "Row "
         << "Column "
         << "Value " << endl;
    for (i = 0; i < k2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << t2[i][j] << '\t';
        }
        cout << endl;
    }

    // THE SUM OF THE TRIPLETS
    cout << endl
         << "The triplet representation of my resulting matrix is: " << endl
         << "Row "
         << "Column "
         << "Value " << endl;

    // t3[0][0] = ;
    // t3[0][1] = ;
    // t3[0][2] = ; // Add

    return 0;
}

/*Use one of the two triplets the user has input and transpose it. Please print the matrix before and after
transposition.
Please consider that:
1. You can exchange columns and rows, but then you should order the resulting matrix. Another
strategy is to iterate over the column of the original triplet and according to its value, fill the resulting
matrix.*/