#include <stdio.h>
#define total_students 10
#define access_pass 24356879

       int main ()
{
    //password encrypted
      long int password;
      printf("\n--------enter the passsword to gain access:--------\n");
      scanf("%ld", &password);

      //checking if password is right/wrong
      if (password == access_pass)
    {

        printf("\n--------Access Granted--------\n");

        //timer for opening students records
            printf("\nOpening students records in:\n\n");

             for(int timer = 3; timer >= 0; timer--) 
        {
            printf("%d seconds\n", timer);
            printf("\n\n");
        }

        //template of records of a students.
          char students_name[total_students][100];
          int classes[total_students];
          char sections[total_students];
          int long phone_no[total_students];
          char fathers_name[total_students][100];
          char mothers_name[total_students][100];
          char home_addresses[total_students][100];

        //taking input of students records
          for (int i = 0; i < total_students; i++)
        {
            printf("\n---------enter the details of students:--------%\n",i + 1);

            printf("\nEnter student's name: ");
            scanf(" %[^\n]", students_name[i]);

            printf("Enter class: ");
            scanf("%d", &classes[i]);

            printf("Enter section: ");
            scanf(" %c", &sections[i]);  

            printf("Enter Phone no.: ");
            scanf("%ld", &phone_no[i]);

            printf("Enter Father's name: ");
            scanf(" %[^\n]", fathers_name[i]);

            printf("Enter Mother's name: ");
            scanf(" %[^\n]", mothers_name[i]);

            printf("Enter Home address: ");
            scanf(" %[^\n]", home_addresses[i]);

            getchar();
        }

          //for printing the records on the console
            int choice;
         do
        {
           printf("enter the numer from (1 to 10) to show the details about that student\n");
           scanf("%d",&choice);
           getchar();
        
             if (choice >= 1 && choice <= 10)
            {
              int serial_no = choice - 1;
              printf("\n---------Students Details---------\n%d",choice);

              printf("Students name: %[^\n]", students_name[serial_no]);
              printf("Class: %d", classes[serial_no]);
              printf("Section: %c", sections[serial_no]);
              printf("Student's Father name: %[^\n]", fathers_name[serial_no]);
              printf("Student's Mother name: %[^\n]", mothers_name[serial_no]);
              printf("Student's Home Address: %[^\n]", home_addresses[serial_no]);

            }     else
                {
                   printf("invalid choice,please try again");
                }

        } while (choice != 0);
    
          printf("\n---------Exiting thr program,Thank you---------\n");

    }      else
        {
            printf("\n\nWrong password\n");
            printf("\n--------Access Denied--------\n");
            printf("\nclosing the program in:\n\n");
            for (int closingtime = 3; closingtime >= 0; closingtime--)
            {
                printf("\n%d seconds\n\n", closingtime);
            }
        }

       return 0;
}