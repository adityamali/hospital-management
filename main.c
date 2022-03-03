#include<stdio.h>
#include"functions.h"


#define int account;


int main()
{
    printf("\n*********************************************************\n\n");
    printf("Welcome to Hospital Management System \n \n");
    printf("*********************************************************\n\n");
    printf("Log In to access the system. \n\n");
    account = login();
    printf(account);
    return 0;
}
