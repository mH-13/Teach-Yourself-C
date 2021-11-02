//variable dependent
// need to declare how many element will be there
// counts from 0
// sample: int ara[10]; - will contain 10 element which will be 0-9
// lenth will be 10. ara[9]= 10th element, ara[0]= 1st element.
#include <stdio.h>
int main()
{
    int frist_term[7] = {80, 85, 74, 63, 90, 60, 70};
    int second_term[7] = {47, 78, 80, 70, 82, 80, 75};
    int final_exam[7] = {85, 80, 75, 82, 85, 75, 83};
    int i;
    double total_marks[7]; //new array to contain total marks after calculation.

    for (i = 0; i < 7; i++)
    {
        total_marks[i] = frist_term[i] / 4.0 + second_term[i] / 4.0 + final_exam[i] / 2.0;

        //25% of 1st & 2nd term and 50% of final.
    }
    for (i = 1; i <= 7; i++)
    {
        printf("Roll no: %d\tTotal Marks: %0.0lf\n", i, total_marks[i - 1]);

        // 0 does not contain any roll.So start from 1 and put value i-1
        // \t prints extra 4 space or a tab.
    }

    //print marks count
    (int)total_marks[7];

    int marks_count[101];
    for (i = 0; i < 100; i++)
    {
        marks_count[i] = 0;
    }
    for (i = 0; i < 7; i++)
    {
        marks_count[(int)total_marks[i]]++;
    }
    for (i = 50; i <= 100; i++)
    {
        printf("Marks: %d Count: %d\n", i, marks_count[i]);
    }

    return 0;
}
