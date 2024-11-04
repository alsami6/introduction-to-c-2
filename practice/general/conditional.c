#include<stdio.h>
#include<stdbool.h>

int main()
{
    int tourDays = 5;

    if(tourDays == 2){
        bool isBoatAvailable = false;

        if(isBoatAvailable)
        {
            printf("gooing to tanguar haur\n");
        }
        else{
            printf("Going to Shrimangal\n");
        }
    }

    else if(tourDays == 4){
        bool isShipAvailable = false;

        if(isShipAvailable){
            printf("Going to Saint martin\n");
        }
        else{
            printf("going to cox Bazar\n");
        }
    }
    else{
        printf("Ghor e bose thako");
    }
    return 0;
}