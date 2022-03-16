char reception_staff1[] = "reception1", reception_pass1[] = "password"; // sample username and password for reception staff
char doctor1[] = "doctor1", doctor_pass1[] = "password";                // sample username and password for doctor
char ipd_staff1[] = "ipd1", ipd_pass1[] = "password";                   // sample username and password for ipd staff
char username_input[20], password_imput[20];                            // username and password input by the user

/* ------------------------------------------------------------------------------------- */

/*  Ask user for his username and password to authenticate
the login and select which part of the software should
be accessible to the given user   */

int login()
{
    printf("Username: ");
    scanf("%s", username_input);
    printf("Password: ");
    scanf("%s", password_imput);
    if ( reception_staff1 == username_input && reception_pass1 == password_imput)
    {
        return 1;
    }
    else if (username_input == doctor1 && password_imput == doctor_pass1)
    {
        return 2;
    }
    else if (username_input == ipd_staff1 && password_imput == ipd_pass1)
    {
        return 3;
    }
}

/* ------------------------------------------------------------------------------------- */

int 