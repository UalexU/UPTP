//	DS - Jorge Cardozo - Information Engineering

#include <iostream>			//put the library iostream
using namespace std;		// give acces to the namespace (namespace) std, where the standard library is locked
// Exercise 1

int main()	{				//beginning of the main function
	//	Initialize variables, r and c are used to store the rows and columns for the matrices entered by the user.
	//	i, j as auxiliary for loops.	m and n are used to store the amount of nonzero elements.
	//	zeros is used to store the quantity of zero elements.
	int r, c, i, j, zeros=0, m=0, n=0;
    cout << "Enter rows and columns for the two sparse matrices: ";	// Prompts the user to enter the size of the sparce matrices
    cin >> r >> c;
    int a[r][c]={0}, b[r][c]={0};   		//	Initializing matrices with the rows and columns entered by the user
	 										//	a is for the sparse matrix 1 and b is for the sparse matrix 2	 										
    cout << "Enter Sparse Matrix 1" << endl;
    //	for loop used to store the elements entered by the user in the sparse matrix 1
	for (i = 0; i < r; ++i)
 		for (j = 0; j < c; ++j)
  		{
    		cout << "Enter element a" << i  << j << ": ";
   			cin >> a[i][j];
   			if(a[i][j]!=0)		// counting the quantity of zeros and nonzeros elements in sparse matrix 1
				m++;
			else
				zeros++;	
		}
	
	// while loop used in case the matrix is invalid, so the user have to introduce a new one.
	// to access the loop quantity of zeros in matrix must be less or equal	than the quantity of elements in matrix divided by 2
	while ( zeros <= (r*c)/2 )	{
		m=0, zeros=0;
		cout << "Not a sparse matrix. Try again" << endl;
		for (i = 0; i < r; ++i)				//	prompting the user to re-introduce the elements of sparse matrix 1
 			for (j = 0; j < c; ++j)
  			{
	    		cout << "Enter element a" << i  << j << ": ";
	   			cin >> a[i][j];
	   			if(a[i][j]!=0)
					m++;		// counting the quantity of zeros and nonzeros elements in sparse matrix 1
				else
					zeros++;
  			}
	}			

	zeros=0;  // assing value 0 to zeros, so it can be used again as a counter in the second matrix.	
	cout << endl << "Enter Sparse Matrix 2" << endl;
	for (i = 0; i < r; ++i)				// for loop used to introduce elements in the sparse matrix 2
 		for (j = 0; j < c; ++j)
  		{
    		cout << "Enter element b" << i  << j << ": ";
   			cin >> b[i][j];
   			if(b[i][j]!=0)
				n++;					// counting the quantity of zeros and nonzeros elements in sparse matrix 2
			else
				zeros++;
  		}
	
	// while loop used in case the matrix is invalid, so the user have to introduce a new one.
	// to access the loop quantity of zeros in matrix must be less or equal	than the quantity of elements in matrix divided by 2				
	while ( zeros <= (r*c)/2 )	{
		n=0, zeros=0;
		cout << "Not a sparse matrix. Try again" << endl;
		for (i = 0; i < r; ++i)
 			for (j = 0; j < c; ++j)		//	prompting the user to introduce the elements of sparse matrix 2
  		{
    		cout << "Enter element b" << i  << j << ": ";
   			cin >> b[i][j];
   			if(b[i][j]!=0)
				n++;				// counting the quantity of zeros and nonzeros elements in sparse matrix 2
			else
				zeros++;
  		}
	}
	
	// printing both sparse matrices
	cout << "Sparse Matrix 1";
	for(i=0; i<r; i++){
		cout <<endl;
		for(j=0; j<c; j++)
			cout << a[i][j] << " ";	}

	cout << "\nSparse Matrix 2";
	for(i=0; i<r; i++){
		cout <<endl;
		for(j=0; j<c; j++)
			cout << b[i][j] << " ";	}


// initializing matrices triplet1, triplet2 to 0, with m+1, n+1 rows (amount of nonzeros elements in each sparse matrix plus the 0th row) and 3 columns
// these matrices are used to store the triplet representation of the sparse matrices.
//	k, l, work as auxiliar variables for the assigning values process.
int triplet1[m+1][3]={0}, triplet2[n+1][3]={0}, k=1, l=1;
	//triplet 
	// assigning row, column and elements value to the position 00, 01, 02 of the first triplet matrix for the triplet representation structure.	
	triplet1[0][0] = r;
	triplet1[0][1] = c;
	triplet1[0][2] = m;	
//for loop used to iterate sparse matrix 1 searching non-zero values. Once found, charges value of row, column and element into the triplet matrix
	for(i=0; i<r; i++)
		for(j=0; j<c; j++)
			if(a[i][j]!=0){		            //if statement used to find the non-zero values
				triplet1[k][0] = i;
				triplet1[k][1] = j;
				triplet1[k][2] = a[i][j];
				k++;	
			}
			
	cout << "\nTriplet 1";	
	for(i=0; i<m+1; i++){	    //	for loop to print the Triplet Matrix 1
		cout <<endl;
		for(j=0; j<3; j++)
			cout << triplet1[i][j] << " ";	}

	//triplet 2
	// assigning row, column and elements value to the position 00, 01, 02 of the second triplet matrix for the triplet representation structure.	
	triplet2[0][0] = r;
	triplet2[0][1] = c;
	triplet2[0][2] = n;	
	for(i=0; i<r; i++)				//	for loop used to iterate sparse matrix 2 searching non-zero values. 
		for(j=0; j<c; j++)			//	Once found, charges value of row, column and element into the triplet matrix
			if(b[i][j]!=0){
				triplet2[l][0] = i;
				triplet2[l][1] = j;
				triplet2[l][2] = b[i][j];
				l++;	
			}
			
	cout << "\nTriplet 2";
	for(i=0; i<n+1; i++){			//	for loop to print the Triplet Matrix 2
		cout <<endl;
		for(j=0; j<3; j++)
			cout << triplet2[i][j] << " ";	}


// Exercise 2 - Triplet Addition
	//initializing variables, TA matrix is used to store the sum of triplet matrix 1 and triplet matrix 2, with m+n+1 rows, which is the maximum quantity of rows the sum of triplets can have, and 3 columns
	// s variable used as an auxiliar for the sum of triplet matrix
	int TA[m+n+1][3] = {0}, s=1;
	i=1; j=1;						// assigning 1 to i,j, so they can be used as auxiliars in the loop
	//	assigning r and c value to the position 00, 01 of the sum triplet matrix for a correct representation of the triplet structure
	TA[0][0] = r;					
	TA[0][1] = c;
	
	
	// while loop used for inserting the sum of triplets elements.		Condition of the loop:
	// while i is less than the total than the total number of rows of first triplet AND j is less than the total number of rows of second triplet
	// it continues iterating
	while(i<=m && j<=n){
		// if statement used for comparing values of elements in triplet1 and triplet2
		// if value of row in triplet1 and triplet2 in position i,j is the same, AND if value of columns in triplet1 and triplet2 in position i,j is the same
		// then assign row and columns value into the sum matrix, and sum values of elements of triplet1,triplet2. 
		if(triplet1[i][0]==triplet2[j][0] && triplet1[i][1]==triplet2[j][1])	{
			TA[s][0] = triplet1[i][0];
			TA[s][1] = triplet1[i][1];
			TA[s][2] = triplet1[i][2] + triplet2[j][2];
			i++;
			j++;
			s++;
		}
		//if previous condition didn't succeed, ask if value of row in triplet1 and triplet2 in position i, j is the same
		else if (triplet1[i][0]==triplet2[j][0])	{
			//if rows are the same, ask which value of column is less
            //if triplet1 has a minor column value, assign row, column and element value of triplet1 to the sum triplet matrix
			if(triplet1[i][1] < triplet2[i][1])	{
				TA[s][0] = triplet1[i][0];
				TA[s][1] = triplet1[i][1];
				TA[s][2] = triplet1[i][2];
				i++;
				s++;
			}
			else	{			            //if not, assign row, column and element value of triplet2 to the sum triplet matrix
				TA[s][0]=triplet2[j][0];
				TA[s][1]=triplet2[j][1];
				TA[s][2]=triplet2[j][2];
			}
		}
		//If previous condition didn't succeed, ask which triplet matrix has the smallest value of row
        //if trplet1 has a minor row value, assign row, column and element value of triplet1 to the sum triplet matrix
		else if (triplet1[i][0]<triplet2[j][0])	{
			TA[s][0] = triplet1[i][0];
			TA[s][1] = triplet1[i][1];
			TA[s][2] = triplet1[i][2];
			i++;
			s++;
		}	
			else	{					        //if not, assign row, column and element value of triplet2 to the sum triplet matrix
				TA[s][0]=triplet2[j][0];
				TA[s][1]=triplet2[j][1];
				TA[s][2]=triplet2[j][2];
				j++;
				s++;
			}
	}
	
	//While loops used to insert in the sum triplet matrix the remaining elements of triplet matrix with more non-zero elements
	while(i <= m)	{
		TA[s][0]=triplet1[i][0];
		TA[s][1]=triplet1[i][1];
		TA[s][2]=triplet1[i][2];
		i++;
		s++;
	}
	while(j <= n)	{
		TA[s][0]=triplet2[j][0];
		TA[s][1]=triplet2[j][1];
		TA[s][2]=triplet2[j][2];
		j++;
		s++;
	}
	
	TA[0][2] = s-1;			// assigning s-1 value to the position 02 of the sum triplet matrix for a correct representation of the triplet structure
	
    cout<<"\nSum of Triplets"<<endl; 
    for(i=0; i<s; i++){			// for loop used to print the sum of triplets matrix
        for(j=0; j<3; j++){
            cout<<TA[i][j]<<" ";
            if ((j+1)==3)		//if statement to jump to the next row while printing the matrix
                cout<<endl;
        }    
    }
    
// Exercise 3 - Triplet Transposition

//initialize matrix t of type integer, t matrix used to store elements of transposed triplet matrix 1, p is an auxiliar for t.
	int t[m+1][3] = {0}, p=1;
	t[0][0] = c;
	t[0][1] = r;		// assigning r, c and elements value to position 00, 01, 02 of the first triplet matrix for a correct representation of triplet structure
	t[0][2] = m;

//triplet representation matrix: for loop used to iterate through all possible values of columns, so they can be sorted from smallest to largest.	
	for(i=0; i<c; i++)	{
		//for loop used to iterate through all rows of triplet matrix, starting from row1
		for(j=1; j<=m; j++)	{
			if(triplet1[j][1] == i)	{	// if statement to ask if column value is equal to i (i being the pivot value, from which matrix values compare for sorting)
				t[p][0] = triplet1[j][1];
				t[p][1] = triplet1[j][0];
				t[p][2] = triplet1[j][2];
				p++;
			}
		}
	}
	cout << "Transposed Triplet 1" << endl;
	for(i=0; i<=m; i++)	{	// for loop used to print the Transposed Triplet 1 Matrix
		for(j=0; j<3; j++)	{
			cout << t[i][j] << " ";
			if( (j+1)==3)			// if statement to jump to the next line while printing transposed triplet 1 matrix
				cout << endl;
		}
	}
	return 0;			// return 0 that indicates the end of the program
}						// end of the main code
