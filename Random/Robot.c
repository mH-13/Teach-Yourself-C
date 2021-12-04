#include <stdio.h>
int main(){
    int x,y;
    char c;
    printf("Please enter the iniial position: \n");
    scanf("%d %d", &x, &y);
    while(1){
        //printf("Command the damn direction: ");
        scanf("%c", &c);
        if(c =='S'){
            break;
        }
        else if(c == 'U'){
            x--;
        }
        else if(c == 'D'){
            x++;
        }
        else if(c == 'L'){
            y--;
        }
        else if (c == 'R'){
             y++;
        } 

    }
    printf("Final position of the robot is: %d %d\n", x,y);
    return 0;
}
