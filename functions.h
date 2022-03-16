char reception_staff1[] = "reception1", reception_pass1[] = "password"; // sample username and password for reception staff
char doctor1[] = "doctor1", doctor_pass1[] = "password";                // sample username and password for doctor
char ipd_staff1[] = "ipd1", ipd_pass1[] = "password";                   // sample username and password for ipd staff
int user_type;
char password_imput[20];                            // username and password input by the user
/*--------------------------------------------------------------------------------------*/

struct new_patient
{
    char name[50];
    int age ;
    int height ; //in cm
    int weight ; // in kg
    char blood_group[10];
    char gender[10];
    char IBS[200];
    int Contact_no ;
    char Relation[50];
    char health_cond[20];
    char Previous_med_history[200];
};

/* ------------------------------------------------------------------------------------- */

/*  Ask user for his username and password to authenticate
the login and select which part of the software should
be accessible to the given user   */

int login()
{
    printf("Login as \n");
    printf("1. Doctor \n2. Reception\n3. IPD \nEnter the Sr. No for the login type:");
    scanf("%d", &user_type);
    printf("Password: ");
    scanf("%s", password_imput);
    switch (user_type)
    {
    case 1:
        printf("hello world");
        return 1;
        break;
    
    default:
        break;
    }
}


/* ------------------------------------------------------------------------------------- */

