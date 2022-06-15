//////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////                           ////////////////////////////////////////////////////
///////////////////      CLASS JUNE-30        //////////////////////////////////////////////////
///////////////////       PL LAB 17           /////////////////////////////////////////////////////
///////////////////                         /////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////// 
// EXERCISE 1
// SIN POINTER
//#include <stdio.h>
//int find_smallest(int a[], int n)
//{
//  int i, j=0, min;
//  min = a[0];
//  for ( i = 1; i < n; i++)
//    if (a[i] < min)
//	 {
//      min = a[i];
//      j = i;
//     }
//  return a[j];
//}
//int main(void)
//{
// int array[4]={34, 56, 7, 5}, size=4; 
// printf("The smallest element in array is: %d", find_smallest (array, size));
// return 0;
//}

//CON POINTER
//#include <stdio.h>
//int *find_smallest(int a[], int n)
//{
//  int i, j=0, min;
//  min = a[0];
//  for ( i = 1; i < n; i++)
//    if (a[i] < min)
//	 {
//      min = a[i];
//      j = i;
//     }
//  return &a[j];
//}
//int main(void)
//{
// int array[4]={34, 56, 7, 5}, size=4; // 5 is the smallest number
// printf("The smallest element in array is: %d", *find_smallest (array, size));
// return 0;
//}




// EXERCISE 2
//#include <stdio.h>
//int main()
//{
//  int value_variable = 2578, *pointer_variable;
//  *pointer_variable = &value_variable;
//  printf("Value of variable: %d\n", value_variable);
//  printf("Address in memory: %p", pointer_variable); 
//  return 0;
//}
//#include <stdio.h>
//int main()
//{
//  int value_variable = 2578, *pointer_variable = &value_variable;
//  printf("Value of variable: %d\n", value_variable);
//  printf("Address in memory: %p", pointer_variable); 
//  return 0;
//}

// EXERCISE 3
//#include <stdio.h>
//int check(int x, int y, int n)
//{
//  return (x >= 0 && x <= n-1 && y >= 0 && y <= n-1);        
//}
//int main(void)
//{
//  int x1, y1, n1;
//  printf("Enter value for x: ");
//  scanf("%d", &x1);
//  printf("Enter value for y: ");
//  scanf("%d", &y1);
//  printf("Enter value for n: ");
//  scanf("%d", &n1);
//  if(check(x1, y1, n1))
//  printf("Is inside");
//  else {
//  	printf("Is not inside"); 
//  }
//  return 0;
//}



// EXERCISE 4
//
//#include <stdio.h>
//void pb(int n);
//int main(void)
//{
//  int n;
//
//  printf("Enter a number: ");
//  scanf("%d", &n);
//  printf("Output of pb: ");
//  pb(n);
//  printf("\n");
//
//  return 0;
//}
//
//void pb(int n)
//{
//  if (n != 0) {
//    pb(n / 2);
//    putchar('0' + n % 2);
//  }
//}






