#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>


int main(){
    int marks;
    scanf("%d", &marks);

    if(marks >= 33 && marks <= 100){
        printf("You have passed.\n");
        
        if(marks >= 80 && marks <= 100){
            printf("You got A+\n");

            if(marks >= 90 && marks <= 100){
                printf("You got scholarship");
            }
        }
        else if(marks >= 70 && marks <= 79){
            printf("You got A grade");
        }
        else if(marks >= 60 && marks <= 69){
            printf("You got A- grade");
        }
        else if(marks >= 50 && marks <= 59){
            printf("You got B grade");
        }
        else if(marks >= 40 && marks <= 49){
            printf("You got C grade");
        }
        else if(marks >= 30 && marks <= 39){
            printf("You got D grade");
        }


    }else if(marks >= 0 && marks <= 32){
        printf("You have failed, Try again.");
    }

    return 0;
}