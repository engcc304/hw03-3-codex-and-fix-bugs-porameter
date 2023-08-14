#include <stdio.h>
//The code provided is a program that receives two matrix data (Matrix1 and Matrix2) from the user and performs various operations on these matrices.

int main() {
    int Matrix1[5][5], Matrix2[5][5], Matrix3[5][5], Matrix4[5][5] ;
    int rows1, cols1, rows2, cols2, rows3, cols3, rows4, cols4 ;
    int i, j, k ; //Declare a variable
 
    printf( "Enter Matrix1 : \n") ;//Receiving Data Matrix1: The program prompts the user to enter the number of rows and columns of Matrix1 and then retrieve the data at each position of Matrix1 matrix and store it in Matrix1 array.
    printf( "Enter number rows and columns : ") ;
    scanf( "%d %d", &rows1, &cols1) ;
    for(i = 0; i < rows1; i++) { //Use a for loop to display information at each location of Matrix1 and Matrix2.
        for(j = 0; j < cols1; j++) {
            printf( "Enter [%d %d] value : ", i, j) ;
            scanf( "%d", &Matrix1[i][j]) ;
        }
    }
 
    printf( "\nEnter Matrix2 : \n") ;//Receiving Matrix2 Data: Same as step 5, program receive Matrix2 data from user and store in Matrix2 array.
    printf( "Enter number rows and columns : ") ;
    scanf( "%d %d", &rows2, &cols2) ;
    for(i = 0; i < rows2; i++) {
        for(j = 0; j < cols2; j++) {
            printf( "Enter [%d %d] value : ", i, j) ;
            scanf( "%d", &Matrix2[i][j]) ;
        }
    }
 
    printf( "\nMatrix1 : \n") ;
    for(i = 0; i < rows1; i++) {
        for(j = 0; j < cols1; j++) {
            printf( "%d ", Matrix1[i][j]) ;
        }
        printf( "\n") ;
    }
 
    printf( "\nMatrix2 : \n") ;
    for(i = 0; i < rows2; i++) {
        for(j = 0; j < cols2; j++) {
            printf( "%d ", Matrix2[i][j]) ;
        }
        printf( "\n") ;
    }

    rows3 = cols1 ; //Calculates and generates Matrix3 as Matrix1 trans (by alternating rows and columns) and then outputs Matrix3.
    cols3 = rows1 ;
    for(i = 0; i < rows3; i++) {
        for(j = 0; j < cols3; j++) {
            Matrix3[i][j] = Matrix1[j][i] ;//Checks whether Matrix1 and Matrix2 can be multiplied.
        }
    }
    printf( "\nTranspose of Matrix1 is : \n") ;
    for(i = 0; i < rows3; i++) {
        for(j = 0; j < cols3; j++) {
            printf( "%d ", Matrix3[i][j]) ;
        }
        printf( "\n") ;
    }
    
    if(cols1 != rows2) {
        printf( "\nMatrix1 and Matrix2 cannot multiply\n") ;
    } else {   
        rows4 = rows1 ;
        cols4 = cols2 ;
        for(i = 0; i < rows4; i++) {
            for(j = 0; j < cols4; j++) {
                Matrix4[i][j] = 0;
                for(k = 0; k < cols1; k++) {
                    Matrix4[i][j] += Matrix1[i][k] * Matrix2[k][j] ;
                }
            }
        }
        printf( "\nMatrix1 x Matrix2 is : \n") ;
        for(i = 0; i < rows4; i++) {
            for(j = 0; j < cols4; j++) {
                printf( "%d ", Matrix4[i][j]) ;
            }
            printf( "\n") ;
        }
    }
    
    return 0 ;
}
