//The PRIMARY OBJECTIVE OF THIS CODEBASE IS TO
//LEARN TO USE GIT AND GITHUB AND SEND PULL REQUESTS
#include <stdio.h>
#include <string.h>

int main()
{
    printf("      CodeClub CU      \n\n");
    printf("List of Members/Contributers:\n\n");
/*
JUST ADD YOUR NAME IN THE ARRAY BELOW AS A STRING AND INCREASE THE ARRAY SIZE BY 1(make syre the code works as it should)
AND COMMIT THE CHANGES USING GIT TO YOUR REPOSITORY AND
THEN SEND A PULL REQUEST
AND GET YOUR FIRST PULL REQUEST MERGED
*/
    char NameArray[2][100] = {"CodeClub CU", "Ankan Halder"};
    int size = *(&NameArray + 1) - NameArray;
    for(int i = 0; i < size; i++)
    {
        printf("%d) %s\n", i+1, NameArray[i]);
    }

}