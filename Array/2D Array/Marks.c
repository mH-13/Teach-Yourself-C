//data type array name[number of row][number of columlns];
//int marks[4][10]
//1st row - marks[0], 2nd row - marks[1]
//marks[0][0] - 1st row 1st column
//marks[2][1] - 3rd row 2nd column
//int marks[4][10] = {{0...9},{0....9},{0....9},{0....9}}

#include <stdio.h>
int main(){
    //int marks[4][5] = {{80,85,90,65,72},{80,85,90,65,72},{80,85,90,65,72},{80,85,90,65,72}};
    int marks[4][5];
    int i,j;
    for(i=0; i<4;i++){
        for(j=0; j<5; j++){
            scanf("%d", &marks[i][j]);
        }
    }
    int col;
    for(col=0; col<5;col++){
        marks[3][col] = marks[0][col]/ 4.0 + marks[1][col] /4.0 + marks[2][col]/ 2.0;
        printf("Roll No: %d Total Marks: %d\n", col +1, marks[3][col]);
    }
    return 0;
}
