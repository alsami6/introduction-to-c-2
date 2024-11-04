#include<stdio.h>
#include<stdbool.h>

int main(){
    int tourDays = 5;

    if(tourDays == 2){
        bool isBoatAvailable = true;
        if(isBoatAvailable){
            printf("Going To Tanguar Haur\n");
        }
        else{
            printf("Going to Srimangal\n");
        }
    }
    else if(tourDays == 4){
        bool isShipAvailable = true;
        if(isShipAvailable){
             printf("Going to Saint martin\n");
        }
        else{
            printf("Going to Cox Bazar\n");
        }
    }
    else{
        printf("Ghor e bose thako\n");
    }
    return 0;
}