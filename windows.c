#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int digit,ascii,choose,number,counter=0;
    char decisions[5][25]={"->Special Characters","->Big Letters","->Small Letters","->Numbers"};
    char choosens[5][25]={};

    do{
        printf(" What do you want in your password?\n\n");
        printf("    Special Characters [1]\n");
        printf("    Big Letters        [2]    In password there will be:\n");
        for(int i=0;i<5;i++){
            if(counter==0)
                printf("    Small Letters      [3]   ");
            printf("%s   ",choosens[i]);
            counter++;
            if (i==4){
                printf("\n");
                counter=0;
            }
        }
        printf("    Numbers            [4]\n");
        printf("    Enough             [0]\n\n");
        printf("        Decision: ");
        scanf("%d",&choose);
        if (choose>4){
            printf("Please choose one by one!");
            sleep(1);
            goto again;
        }
        strcpy(choosens[choose],decisions[choose-1]);
        again:
        system("cls");
    }while(choose!=0);

    printf("\n  How many digit you want in the pass?\n    ");
    scanf("%d",&digit);
    system("cls");

    for(int i=0;i<30;i++){
        for(int i=0;i<15;i++){
            if(i==0){
                printf(" Generating...\n    ");
                printf("[");
            }
            printf("%c",rand()%125+33);
            if(i==14)
                printf("]");
        }
        sleep(0.50);
        system("cls");
    }

    printf(" Generated!!\n");
    printf("\n   ");

    if(choosens[1][0]==45 && choosens[2][0]==45 && choosens[3][0]==45 && choosens[4][0]==45){
        for(int i=0;i<digit;i++){
            printf("%c",rand()%93+33);
        }
    }
    else if(choosens[1][0]==45 && choosens[2][0]==45 && choosens[3][0]==45){
        for(int i=0;i<digit;i++){
            do{
                ascii=rand()%93+33;
            }while(ascii<58 && ascii>47);
            printf("%c",ascii);
        }
    }
    else if(choosens[1][0]==45 && choosens[2][0]==45 && choosens[4][0]==45){
        for(int i=0;i<digit;i++){
            do{
                ascii=rand()%93+33;
            }while(ascii<123 && ascii>96);
            printf("%c",ascii);
        }
    }
    else if(choosens[1][0]==45 && choosens[3][0]==45 && choosens[4][0]==45){
        for(int i=0;i<digit;i++){
            do{
                ascii=rand()%93+33;
            }while(ascii<91 && ascii>64);
            printf("%c",ascii);
        }
    }
    else if(choosens[2][0]==45 && choosens[3][0]==45 && choosens[4][0]==45){
        for(int i=0;i<digit;i++){
            do{
                ascii=rand()%93+33;
            }while(ascii<48 && ascii>32 || ascii<65 && ascii>57 || ascii<97 && ascii>90 || ascii<127 && ascii>122);
            printf("%c",ascii);
        }
    }
    else if(choosens[1][0]==45 && choosens[2][0]==45){
        for(int i=0;i<digit;i++){
            do{
                ascii=rand()%93+33;
            }while(ascii<123 && ascii>96 || ascii<58 && ascii>47);
            printf("%c",ascii);
        }
    }
    else if(choosens[1][0]==45 && choosens[3][0]==45){
        for(int i=0;i<digit;i++){
            do{
                ascii=rand()%93+33;
            }while(ascii<91 && ascii>64 || ascii<58 && ascii>47);
            printf("%c",ascii);
        }
    }
    else if(choosens[1][0]==45 && choosens[4][0]==45){
        for(int i=0;i<digit;i++){
            do{
                ascii=rand()%93+33;
            }while(ascii<91 && ascii>64 || ascii<123 && ascii>96);
            printf("%c",ascii);
        }
    }
    else if(choosens[2][0]==45 && choosens[3][0]==45){
        for(int i=0;i<digit;i++){
            do{
                ascii=rand()%93+33;
            }while(ascii<48 && ascii>32 || ascii<65 && ascii>57 || ascii<97 && ascii>90 || ascii<127 && ascii>122 || ascii<58 && ascii>47);
            printf("%c",ascii);
        }
    }
    else if(choosens[2][0]==45 && choosens[4][0]==45){
        for(int i=0;i<digit;i++){
            do{
                ascii=rand()%93+33;
            }while(ascii<48 && ascii>32 || ascii<65 && ascii>57 || ascii<97 && ascii>90 || ascii<127 && ascii>122 || ascii<123 && ascii>96);
            printf("%c",ascii);
        }
    }
    else if(choosens[1][0]==45){
        for(int i=0;i<digit;i++){
            do{
                ascii=rand()%93+33;
            }while(ascii<91 && ascii>64 || ascii<123 && ascii>96 || ascii<58 && ascii>47);
            printf("%c",ascii);
        }
    }
    else if(choosens[2][0]==45){
        for(int i=0;i<digit;i++){
            printf("%c",rand()%26+65);
        }
    }
    else if(choosens[3][0]==45){
        for(int i=0;i<digit;i++){
            printf("%c",rand()%26+97);
        }
    }
    else if(choosens[4][0]==45){
        for(int i=0;i<digit;i++){
            printf("%c",rand()%10+48);
        }
    }

    printf("\n\nFor copy, scan the pass with cursor and press Ctrl+C.\n");
    printf(" Program will be shutted down in 10 secs...");
    sleep(9);

    return 0;
}
