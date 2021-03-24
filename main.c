#include <stdio.h>
#include <string.h>

//CREATING FUNCTION:
//void user_information();
void introduction();
void seatplan();
void coach();
void press();
void details_of_booking_ticket_khulna();
void details_of_booking_ticket_khulna_back();
void details_of_booking_ticket_Rajshahi();
void details_of_booking_ticket_Rajshahi_back();
void details_of_booking_ticket_Comilla();
void details_of_booking_ticket_Comilla_back();
void details_of_booking_ticket_Chittagong();
void details_of_booking_ticket_Chittagong_back();
void payment();


//MAIN FUNCTION:
int main()
{
    int start;
    //rough :
   // printf("\n\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n");
    /*printf("\n\t\t\t                      =-=-=-=-=-=-=-=                ");
    printf("\n\t\t\t                     ||   WELCOME  ||                ");
    printf("\n\t\t\t                     ||     TO     ||                ");
    printf("\n\t\t\t                     ||    AKAND   ||                ");
    printf("\n\t\t\t                     || ENTERPRIZE ||                ");
   // printf("\n\t\t\t        =                 SYSTEM                    =");
    printf("\n\t\t\t                      =-=-=-=-=-=-=-=                ");    //printf("\n\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n");*/

    //done
    printf("[Welcome to AKANDA ENTERPRIZE]\n");
    printf("\nEnter 1 to Start or 0 to Exit = ");
    scanf("%d",&start);
    getchar();
    while(start!=1 && start!=0)
    {
        printf("\nError!!! Invalid Key!!!\n");
        printf("\nEnter 1 to Start or 0 to Exit = ");
        scanf("%d",&start);
        getchar();
    }

    if(start==1)
    {
        char user_name[30], phone_number[30];
        printf("\nEnter your name = ");
        gets(user_name);
        //scanf("%s",user_name);
        printf("Enter your phone number = ");
        gets(phone_number);
        //scanf("%s",phone_number);
        printf("\nDear %s, welcome to AKANDA ENTERPRIZE!!!",user_name);

        introduction();

        int destination;
        printf("\nEnter mentioned key from above to select your destination = ");
        scanf("%d",&destination);
        while(destination!=1 && destination!=2 && destination!=3 && destination!=4 && destination!=5 && destination!=6 && destination!=7 && destination!=8)
        {
            printf("\nError!!! Invalid Key!!!\n");
            printf("\nEnter mentioned key from above to select your destination = ");
            scanf("%d",&destination);
        }

        if(destination==1)
        {
            printf("\nThank you!!! You have selected DHAKA TO KHULNA route and here is the Bus schedule for Dhaka to Khulna - \n\n");

            details_of_booking_ticket_khulna();

            printf("Passenger Name : %s\n",user_name);
            printf("Phone Number : %s\n",phone_number);

            payment();

        }

        else if(destination==2)
        {
            printf("\nThank you!!! You have selected DHAKA TO RAJSHAHI route and here is the Bus schedule for Dhaka to Rajshahi - \n\n");

            details_of_booking_ticket_Rajshahi();

            printf("Passenger Name : %s\n",user_name);
            printf("Phone Number : %s\n",phone_number);

            payment();

        }

        else if(destination==3)
        {
            printf("\nThank you!!! You have selected DHAKA TO COMILLA route and here is the Bus schedule for Dhaka to Comilla - \n\n");

            details_of_booking_ticket_Comilla();

            printf("Passenger Name : %s\n",user_name);
            printf("Phone Number : %s\n",phone_number);

            payment();

        }

        else if(destination==4)
        {
            printf("\nThank you!!! You have selected DHAKA TO CHITTAGONG route and here is the Bus schedule for Dhaka to Chittagong - \n\n");

            details_of_booking_ticket_Chittagong();

            printf("Passenger Name : %s\n",user_name);
            printf("Phone Number : %s\n",phone_number);

            payment();

        }

        else if(destination==5)
        {
            printf("\nThank you!!! You have selected KHULNA TO DHAKA route and here is the Bus schedule for Khulna to Dhaka - \n\n");

            details_of_booking_ticket_khulna_back();

            printf("Passenger Name : %s\n",user_name);
            printf("Phone Number : %s\n",phone_number);

            payment();

        }

        else if(destination==6)
        {
            printf("\nThank you!!! You have selected RAJSHAHI TO DHAKA route and here is the Bus schedule for Rajshahi to Dhaka - \n\n");

            details_of_booking_ticket_Rajshahi_back();

            printf("Passenger Name : %s\n",user_name);
            printf("Phone Number : %s\n",phone_number);

            payment();

        }

        else if(destination==7)
        {
            printf("\nThank you!!! You have selected COMILLA TO DHAKA route and here is the Bus schedule for Comilla to Dhaka - \n\n");

            details_of_booking_ticket_Comilla_back();

            printf("Passenger Name : %s\n",user_name);
            printf("Phone Number : %s\n",phone_number);

            payment();

        }

        else
        {
            printf("\nThank you!!! You have selected CHITTAGONG TO DHAKA route and here is the Bus schedule for Chittagong to Dhaka - \n\n");

            details_of_booking_ticket_Chittagong_back();

            printf("Passenger Name : %s\n",user_name);
            printf("Phone Number : %s\n",phone_number);

            payment();

        }
    }

    else
        printf("\nThank you and Exit...");

    return 0;
}


//USER DEFINED FUNCTION:
//FUNCTION FOR INTRODUCTION:
void introduction()
{
    printf("\nWe are happy to announce that here-\nyou can book your ticket as per your desire &\nbe part of our enjoyable journey...");
    printf("\nSo here is our destination - \n");
    printf("\nDhaka to Khulna = enter 1");
    printf("\nDhaka to Rajshahi = enter 2");
    printf("\nDhaka to Comilla = enter 3");
    printf("\nDhaka to Chittagong = enter 4");
    printf("\nKhulna to Dhaka = enter 5");
    printf("\nRajshahi to Dhaka = enter 6");
    printf("\nComilla to Dhaka = enter 7");
    printf("\nChittagong to Dhaka = enter 8\n");
}


//FUNCTION FOR SEATPLAN:
void seatplan()
{
    printf("\nSeat Plan - \n\n");
    printf("\n---       (^_^)\n");
    printf("---          \n");
    int seat_row,seat_column;
        for(seat_row=1; seat_row<=8; seat_row++)
        {
            for(seat_column=1; seat_column<=5; seat_column++)
            {
                if(seat_row==1 && seat_column==1)
                {
                    printf("A1 ");
                }
                if(seat_row==1 && seat_column==2)
                {
                    printf("A2 ");
                }
                if(seat_row==1 && seat_column==3)
                {
                    printf("  ");
                }
                if(seat_row==1 && seat_column==4)
                {
                    printf(" A3 ");
                }
                if(seat_row==1 && seat_column==5)
                {
                    printf(" A4\n\n");
                }
                if(seat_row==2 && seat_column==1)
                {
                    printf("B1 ");
                }
                if(seat_row==2 && seat_column==2)
                {
                    printf("B2 ");
                }
                if(seat_row==2 && seat_column==3)
                {
                    printf("  ");
                }
                if(seat_row==2 && seat_column==4)
                {
                    printf(" B3 ");
                }
                if(seat_row==2 && seat_column==5)
                {
                    printf(" B4\n\n");
                }
                if(seat_row==3 && seat_column==1)
                {
                    printf("C1 ");
                }
                if(seat_row==3 && seat_column==2)
                {
                    printf("C2 ");
                }
                if(seat_row==3 && seat_column==3)
                {
                    printf("  ");
                }
                if(seat_row==3 && seat_column==4)
                {
                    printf(" C3 ");
                }
                if(seat_row==3 && seat_column==5)
                {
                    printf(" C4\n\n");
                }
                if(seat_row==4 && seat_column==1)
                {
                    printf("D1 ");
                }
                if(seat_row==4 && seat_column==2)
                {
                    printf("D2 ");
                }
                if(seat_row==4 && seat_column==3)
                {
                    printf("  ");
                }
                if(seat_row==4 && seat_column==4)
                {
                    printf(" D3 ");
                }
                if(seat_row==4 && seat_column==5)
                {
                    printf(" D4\n\n");
                }
                if(seat_row==5 && seat_column==1)
                {
                    printf("E1 ");
                }
                if(seat_row==5 && seat_column==2)
                {
                    printf("E2 ");
                }
                if(seat_row==5 && seat_column==3)
                {
                    printf("  ");
                }
                if(seat_row==5 && seat_column==4)
                {
                    printf(" E3 ");
                }
                if(seat_row==5 && seat_column==5)
                {
                    printf(" E4\n\n");
                }
                if(seat_row==6 && seat_column==1)
                {
                    printf("F1 ");
                }
                if(seat_row==6 && seat_column==2)
                {
                    printf("F2 ");
                }
                if(seat_row==6 && seat_column==3)
                {
                    printf("  ");
                }
                if(seat_row==6 && seat_column==4)
                {
                    printf(" F3 ");
                }
                if(seat_row==6 && seat_column==5)
                {
                    printf(" F4\n\n");
                }
                if(seat_row==7 && seat_column==1)
                {
                    printf("G1 ");
                }
                if(seat_row==7 && seat_column==2)
                {
                    printf("G2 ");
                }
                if(seat_row==7 && seat_column==3)
                {
                    printf("  ");
                }
                if(seat_row==7 && seat_column==4)
                {
                    printf(" G3 ");
                }
                if(seat_row==7 && seat_column==5)
                {
                    printf(" G4\n\n");
                }
                if(seat_row==8 && seat_column==1)
                {
                    printf("H1 ");
                }
                if(seat_row==8 && seat_column==2)
                {
                    printf("H2 ");
                }
                if(seat_row==8 && seat_column==3)
                {
                    printf("H3");
                }
                if(seat_row==8 && seat_column==4)
                {
                    printf(" H4 ");
                }
                if(seat_row==8 && seat_column==5)
                {
                    printf(" H5\n\n");
                }
            }
        }
}


//FUNCTION FOR COACH TIMING:
void coach()
{
    int row,column;
    for(row=1; row<=2; row++)
    {
        for(column=1; column<=4; column++)
        {
            if(row==1 && column==1)
            {
                printf("Morning Coach\t");
            }
            if(row==1 && column==2)
            {
                printf("Day Coach\t");
            }
            if(row==1 && column==3)
            {
                printf("Night Coach\t");
            }
            if(row==1 && column==4)
            {
                printf("VIP Coach\n");
            }
            if(row==2 && column==1)
            {
                printf(" (7:00 am)\t");
            }
            if(row==2 && column==2)
            {
                printf("(12:00 pm)\t");
            }
            if(row==2 && column==3)
            {
                printf("(6:00 pm)\t");
            }
            if(row==2 && column==4)
            {
                printf("(11:00 am)\n");
            }
        }
    }
}


//FUNCTION FOR PRESSING COACH TIMING:
void press()
{
    printf("\nFor MORNING coach (ticket cost : 350 taka only) = enter 1");
    printf("\nFor DAY coach (ticket cost : 350 taka only) = enter 2");
    printf("\nFor NIGHT coach (ticket cost : 350 taka only) = enter 3");
    printf("\nFor VIP coach (ticket cost : 700 taka only) = enter 4 (including hostage,AC & Television service and snacks)\n");
    printf("\nEnter mentioned key from above to select your coach = ");
}


//FUNCTION FOR DHAKA TO KHULNA ROUTE:
void details_of_booking_ticket_khulna()
{
    coach();

    int coach_for_Khulna;

    press();

    scanf("%d",&coach_for_Khulna);
    while(coach_for_Khulna!=1 && coach_for_Khulna!=2 && coach_for_Khulna!=3 && coach_for_Khulna!=4)
    {
        printf("\nError!!! Invalid Key!!!\n");
        printf("\nEnter mentioned key from above to select your coach = ");
        scanf("%d",&coach_for_Khulna);
    }

    if(coach_for_Khulna==1)
    {
        printf("\nBus Number: Dhaka Metro-HA,32-37-81\n");

        seatplan();

        char seat_number[30][30];
        int amount_Of_Seat;
        int i,j,k,value;
        printf("\nHow many seat you need to book : ");
        scanf("%d",&amount_Of_Seat);
        getchar();

        FILE* Dhaka_to_Khulna_output_write = fopen("Output Dhaka to Khulna.txt", "a");
        FILE* Dhaka_to_Khulna_output_read = fopen("Input Dhaka to Khulna.txt", "r");

        if(Dhaka_to_Khulna_output_write==NULL || Dhaka_to_Khulna_output_read==NULL)
        {
            printf("\nSorry!!!The file does not exist!!!");
        }
        else
        {
            for(i=0,j=1; i<amount_Of_Seat; i++,j++)
            {
                printf("\n\nEnter seat %d : ",j);
                gets(seat_number[i]);
                if(i==0)
                {
                    printf("\nBooked seat %d : ",j);
                    puts(seat_number[i]);
                    fputs(seat_number[i],Dhaka_to_Khulna_output_write);
                    fclose(Dhaka_to_Khulna_output_read);
                    Dhaka_to_Khulna_output_read = fopen("Input Dhaka to Khulna.txt", "a");
                    k = i;
                    fputs(seat_number[k],Dhaka_to_Khulna_output_read);
                    fclose(Dhaka_to_Khulna_output_read);
                    Dhaka_to_Khulna_output_read = fopen("Input Dhaka to Khulna.txt", "r");
                }
                else
                {
                    for(k=0; !feof(Dhaka_to_Khulna_output_read); k++)
                    {
                        fgets(seat_number[k],30,Dhaka_to_Khulna_output_read);
                        value = strcmp(seat_number[i],seat_number[k]);
                        while(value == 0)
                        {
                            printf("\n\nSorry!\nThis is reserved seat!!\nChoose another one!!!");
                            printf("\n\nEnter seat %d : ",j);
                            gets(seat_number[i]);
                            value = strcmp(seat_number[i],seat_number[k]);
                        }
                    }
                    printf("\nBooked seat %d : ",j);
                    puts(seat_number[i]);
                    fputs(seat_number[i],Dhaka_to_Khulna_output_write);
                    fputs("\n",Dhaka_to_Khulna_output_write);
                    fclose(Dhaka_to_Khulna_output_read);
                    Dhaka_to_Khulna_output_read = fopen("Input Dhaka to Khulna.txt", "a");
                    k=i;
                    fputs(seat_number[k],Dhaka_to_Khulna_output_read);
                    fputs("\n",Dhaka_to_Khulna_output_read);
                    fclose(Dhaka_to_Khulna_output_read);
                    Dhaka_to_Khulna_output_read = fopen("Input Dhaka to Khulna.txt", "r");
                }
            }
        }
        fclose(Dhaka_to_Khulna_output_read);
        fclose(Dhaka_to_Khulna_output_write);

        printf("\nThis is the soft copy of your ticket - \n");
        printf("\nSeat Number : ");

        for(i=0; i<amount_Of_Seat; i++)
        {
            printf("%s  ",seat_number[i]);
        }

        printf("\nDestination : DHAKA to KHULNA\n");
        printf("Departure Time : 7:00 am");
        printf("\nBus Number: Dhaka Metro-HA,32-37-81");
        printf("\nSupervisor Name : Tarek Hossain");
        printf("\nSupervisor Phone Number : 01646731824\n");
    }

    else if(coach_for_Khulna==2)
    {
        printf("\nBus Number: Dhaka Metro-LA,42-47-91\n");

        seatplan();

        char seat_number[10];
        printf("\nEnter your desired seat : ");
        scanf("%s",seat_number);
        printf("\nThis is the soft copy of your ticket - \n");
        printf("\nSeat Number : %s",seat_number);
        printf("\nDestination : DHAKA to KHULNA\n");
        printf("Departure Time : 12:00 pm");
        printf("\nBus Number: Dhaka Metro-LA,42-47-91");
        printf("\nSupervisor Name : Sazedul Islam Suman");
        printf("\nSupervisor Phone Number : 01646731824\n");
    }

    else if(coach_for_Khulna==3)
    {
        printf("\nBus Number: Dhaka Metro-HA,52-57-71\n");

        seatplan();

        char seat_number[10];
        printf("\nEnter your desired seat : ");
        scanf("%s",seat_number);
        printf("\nThis is the soft copy of your ticket - \n");
        printf("\nSeat Number : %s",seat_number);
        printf("\nDestination : DHAKA to KHULNA\n");
        printf("Departure Time : 6:00 pm");
        printf("\nBus Number: Dhaka Metro-HA,52-57-71");
        printf("\nSupervisor Name : Shohag");
        printf("\nSupervisor Phone Number : 01646731824\n");
    }

    else
    {
        printf("\nBus Number: Dhaka Metro-HA,55-55-55\n");

        seatplan();

        char seat_number[10];
        printf("\nEnter your desired seat : ");
        scanf("%s",seat_number);
        printf("\nThis is the soft copy of your ticket - \n");
        printf("\nSeat Number : %s",seat_number);
        printf("\nDestination : DHAKA to KHULNA");
        printf("\nDeparture Time : 11:00 am");
        printf("\nBus Number: Dhaka Metro-HA,55-55-55");
        printf("\nSupervisor Name : Sanjida Akter");
        printf("\nSupervisor Phone Number : 01646731824\n");
    }
}


//FUNCTION FOR KHULNA TO DHAKA ROUTE:
void details_of_booking_ticket_khulna_back()
{

    coach();

    int coach_for_Khulna;

    press();

    scanf("%d",&coach_for_Khulna);
    while(coach_for_Khulna!=1 && coach_for_Khulna!=2 && coach_for_Khulna!=3 && coach_for_Khulna!=4)
    {
        printf("\nError!!! Invalid Key!!!\n");
        printf("\nEnter mentioned key from above to select your coach = ");
        scanf("%d",&coach_for_Khulna);
    }

    if(coach_for_Khulna==1)
    {
        printf("\nBus Number: Dhaka Metro-HA,32-37-81\n");

        seatplan();

        char seat_number[10];
        printf("\nEnter your desired seat : ");
        scanf("%s",seat_number);
        printf("\nThis is the soft copy of your ticket - \n");
        printf("\nSeat Number : %s",seat_number);
        printf("\nDestination : KHULNA to Dhaka");
        printf("\nDeparture Time : 7:00 am");
        printf("\nBus Number: Dhaka Metro-HA,32-37-81");
        printf("\nSupervisor Name : Shohag");
        printf("\nSupervisor Phone Number : 01646731824\n");
    }

    else if(coach_for_Khulna==2)
    {
        printf("\nBus Number: Dhaka Metro-LA,42-47-91\n");

        seatplan();

        char seat_number[10];
        printf("\nEnter your desired seat : ");
        scanf("%s",seat_number);
        printf("\nThis is the soft copy of your ticket - \n");
        printf("\nSeat Number : %s",seat_number);
        printf("\nDestination : KHULNA to Dhaka");
        printf("\nDeparture Time : 12:00 pm");
        printf("\nBus Number: Dhaka Metro-LA,42-47-91");
        printf("\nSupervisor Name : Tarek Hossain");
        printf("\nSupervisor Phone Number : 01646731824\n");
    }

    else if(coach_for_Khulna==3)
    {
        printf("\nBus Number: Dhaka Metro-HA,52-57-71\n");

        seatplan();

        char seat_number[10];
        printf("\nEnter your desired seat : ");
        scanf("%s",seat_number);
        printf("\nThis is the soft copy of your ticket - \n");
        printf("\nSeat Number : %s\n",seat_number);
        printf("\nDestination : KHULNA to Dhaka");
        printf("\nDeparture Time : 6:00 pm");
        printf("\nBus Number: Dhaka Metro-HA,52-57-71");
        printf("\nSupervisor Name : Sazedul Islam Suman");
        printf("\nSupervisor Phone Number : 01646731824\n");
    }

    else
    {
        printf("\nBus Number: Dhaka Metro-HA,55-55-55\n");

        seatplan();

        char seat_number[10];
        printf("\nEnter your desired seat : ");
        scanf("%s",seat_number);
        printf("\nThis is the soft copy of your ticket - \n");
        printf("\nSeat Number : %s",seat_number);
        printf("\nDestination : KHULNA to Dhaka");
        printf("\nDeparture Time : 11:00 am");
        printf("\nBus Number: Dhaka Metro-HA,55-55-55");
        printf("\nSupervisor Name : M.B.Abu Noman");
        printf("\nSupervisor Phone Number : 01646731824\n");
    }
}


//FUNCTION FOR DHAKA TO RAJSHAHI ROUTE:
void details_of_booking_ticket_Rajshahi()
{

    coach();

    int coach_for_Rajshahi;

    press();

    scanf("%d",&coach_for_Rajshahi);
    while(coach_for_Rajshahi!=1 && coach_for_Rajshahi!=2 && coach_for_Rajshahi!=3 && coach_for_Rajshahi!=4)
    {
        printf("\nError!!! Invalid Key!!!\n");
        printf("\nEnter mentioned key from above to select your coach = ");
        scanf("%d",&coach_for_Rajshahi);
    }

    if(coach_for_Rajshahi==1)
    {
        printf("\nBus Number: Dhaka Metro-HA,22-27-51\n");

        seatplan();

        char seat_number[10];
        printf("\nEnter your desired seat : ");
        scanf("%s",seat_number);
        printf("\nThis is the soft copy of your ticket - \n");
        printf("\nSeat Number : %s",seat_number);
        printf("\nDestination : DHAKA to RAJSHAHI");
        printf("\nDeparture Time : 7:00 am");
        printf("\nBus Number: Dhaka Metro-HA,22-27-51");
        printf("\nSupervisor Name : M.B.Abu Noman");
        printf("\nSupervisor Phone Number : 01646731824\n");
    }

    else if(coach_for_Rajshahi==2)
    {
        printf("\nBus Number: Dhaka Metro-LA,82-89-91\n");

        seatplan();

        char seat_number[10];
        printf("\nEnter your desired seat : ");
        scanf("%s",seat_number);
        printf("\nThis is the soft copy of your ticket - \n");
        printf("\nSeat Number : %s",seat_number);
        printf("\nDestination : DHAKA to RAJSHAHI");
        printf("\nDeparture Time : 12:00 pm");
        printf("\nBus Number: Dhaka Metro-LA,82-89-91");
        printf("\nSupervisor Name : M.B.Abu Noman");
        printf("\nSupervisor Phone Number : 01646731824\n");
    }

    else if(coach_for_Rajshahi==3)
    {
        printf("\nBus Number: Dhaka Metro-HA,42-57-42\n");

        seatplan();

        char seat_number[10];
        printf("\nEnter your desired seat : ");
        scanf("%s",seat_number);
        printf("\nThis is the soft copy of your ticket - \n");
        printf("\nSeat Number : %s",seat_number);
        printf("\nDestination : DHAKA to RAJSHAHI");
        printf("\nDeparture Time : 6:00 pm");
        printf("\nBus Number: Dhaka Metro-HA,42-57-42");
        printf("\nSupervisor Name : M.B.Abu Noman");
        printf("\nSupervisor Phone Number : 01646731824\n");
    }

    else
    {
        printf("\nBus Number: Dhaka Metro-HA,57-75-55\n");

        seatplan();

        char seat_number[10];
        printf("\nEnter your desired seat : ");
        scanf("%s",seat_number);
        printf("\nThis is the soft copy of your ticket - \n");
        printf("\nSeat Number : %s",seat_number);
        printf("\nDestination : DHAKA to RAJSHAHI");
        printf("\nDeparture Time : 11:00 am");
        printf("\nBus Number: Dhaka Metro-HA,57-75-55");
        printf("\nSupervisor Name : M.B.Abu Noman");
        printf("\nSupervisor Phone Number : 01646731824\n");
    }
}


//FUNCTION FOR RAJSHAHI TO DHAKA:
void details_of_booking_ticket_Rajshahi_back()
{

    coach();

    int coach_for_Rajshahi;

    press();

    scanf("%d",&coach_for_Rajshahi);
    while(coach_for_Rajshahi!=1 && coach_for_Rajshahi!=2 && coach_for_Rajshahi!=3 && coach_for_Rajshahi!=4)
    {
        printf("\nError!!! Invalid Key!!!\n");
        printf("\nEnter mentioned key from above to select your coach = ");
        scanf("%d",&coach_for_Rajshahi);
    }

    if(coach_for_Rajshahi==1)
    {
        printf("\nBus Number: Dhaka Metro-HA,22-27-51\n");

        seatplan();

        char seat_number[10];
        printf("\nEnter your desired seat : ");
        scanf("%s",seat_number);
        printf("\nThis is the soft copy of your ticket - \n");
        printf("\nSeat Number : %s",seat_number);
        printf("\nDestination : RAJSHAHI to DHAKA");
        printf("\nDeparture Time : 7:00 am");
        printf("\nBus Number: Dhaka Metro-HA,22-27-51");
        printf("\nSupervisor Name : M.B.Abu Noman");
        printf("\nSupervisor Phone Number : 01646731824\n");
    }

    else if(coach_for_Rajshahi==2)
    {
        printf("\nBus Number: Dhaka Metro-LA,82-89-91\n");

        seatplan();

        char seat_number[10];
        printf("\nEnter your desired seat : ");
        scanf("%s",seat_number);
        printf("\nThis is the soft copy of your ticket - \n");
        printf("\nSeat Number : %s",seat_number);
        printf("\nDestination : RAJSHAHI to DHAKA");
        printf("\nDeparture Time : 12:00 pm");
        printf("\nBus Number: Dhaka Metro-LA,82-89-91");
        printf("\nSupervisor Name : M.B.Abu Noman");
        printf("\nSupervisor Phone Number : 01646731824\n");
    }

    else if(coach_for_Rajshahi==3)
    {
        printf("\nBus Number: Dhaka Metro-HA,42-57-42\n");

        seatplan();

        char seat_number[10];
        printf("\nEnter your desired seat : ");
        scanf("%s",seat_number);
        printf("\nThis is the soft copy of your ticket - \n");
        printf("\nSeat Number : %s",seat_number);
        printf("\nDestination : RAJSHAHI to DHAKA");
        printf("\nDeparture Time : 6:00 pm");
        printf("\nBus Number: Dhaka Metro-HA,42-57-42");
        printf("\nSupervisor Name : M.B.Abu Noman");
        printf("\nSupervisor Phone Number : 01646731824\n");
    }

    else
    {
        printf("\nBus Number: Dhaka Metro-HA,57-75-55\n");

        seatplan();

        char seat_number[10];
        printf("\nEnter your desired seat : ");
        scanf("%s",seat_number);
        printf("\nThis is the soft copy of your ticket - \n");
        printf("\nSeat Number : %s",seat_number);
        printf("\nDestination : RAJSHAHI to DHAKA");
        printf("Departure Time : 11:00 am");
        printf("\nBus Number: Dhaka Metro-HA,57-75-55");
        printf("\nSupervisor Name : M.B.Abu Noman");
        printf("\nSupervisor Phone Number : 01646731824\n");
    }
}


//FUNCTION FOR DHAKA TO COMILLA ROUTE:
void details_of_booking_ticket_Comilla()
{

    coach();

    int coach_for_Comilla;

    press();

    scanf("%d",&coach_for_Comilla);
    while(coach_for_Comilla!=1 && coach_for_Comilla!=2 && coach_for_Comilla!=3 && coach_for_Comilla!=4)
    {
        printf("\nError!!! Invalid Key!!!\n");
        printf("\nEnter mentioned key from above to select your coach = ");
        scanf("%d",&coach_for_Comilla);
    }

    if(coach_for_Comilla==1)
    {
        printf("\nBus Number: Dhaka Metro-HA,12-27-51\n");

        seatplan();

        char seat_number[10];
        printf("\nEnter your desired seat : ");
        scanf("%s",seat_number);
        printf("\nThis is the soft copy of your ticket - \n");
        printf("\nSeat Number : %s",seat_number);
        printf("\nDestination : DHAKA to COMILLA\n");
        printf("Departure Time : 7:00 am");
        printf("\nBus Number: Dhaka Metro-HA,12-27-51");
        printf("\nSupervisor Name : M.B.Abu Noman");
        printf("\nSupervisor Phone Number : 01646731824\n");
    }

    else if(coach_for_Comilla==2)
    {
        printf("\nBus Number: Dhaka Metro-LA,82-88-91\n");

        seatplan();

        char seat_number[10];
        printf("\nEnter your desired seat : ");
        scanf("%s",seat_number);
        printf("\nThis is the soft copy of your ticket - \n");
        printf("\nSeat Number : %s",seat_number);
        printf("\nDestination : DHAKA to COMILLA\n");
        printf("Departure Time : 12:00 pm");
        printf("\nBus Number: Dhaka Metro-LA,82-88-91");
        printf("\nSupervisor Name : M.B.Abu Noman");
        printf("\nSupervisor Phone Number : 01646731824\n");
    }

    else if(coach_for_Comilla==3)
    {
        printf("\nBus Number: Dhaka Metro-HA,42-57-52\n");

        seatplan();

        char seat_number[10];
        printf("\nEnter your desired seat : ");
        scanf("%s",seat_number);
        printf("\nThis is the soft copy of your ticket - \n");
        printf("\nSeat Number : %s",seat_number);
        printf("\nDestination : DHAKA to COMILLA\n");
        printf("Departure Time : 6:00 pm");
        printf("\nBus Number: Dhaka Metro-HA,42-57-52");
        printf("\nSupervisor Name : M.B.Abu Noman");
        printf("\nSupervisor Phone Number : 01646731824\n");
    }

    else
    {
        printf("\nBus Number: Dhaka Metro-HA,55-75-45\n");

        seatplan();

        char seat_number[10];
        printf("\nEnter your desired seat : ");
        scanf("%s",seat_number);
        printf("\nThis is the soft copy of your ticket - \n");
        printf("\nSeat Number : %s",seat_number);
        printf("\nDestination : DHAKA to COMILLA\n");
        printf("Departure Time : 11:00 am");
        printf("\nBus Number: Dhaka Metro-HA,55-75-45");
        printf("\nSupervisor Name : M.B.Abu Noman");
        printf("\nSupervisor Phone Number : 01646731824\n");
    }
}


//FUNCTION FOR COMILLA TO DHAKA ROUTE:
void details_of_booking_ticket_Comilla_back()
{

    coach();

    int coach_for_Comilla;

    press();

    scanf("%d",&coach_for_Comilla);
    while(coach_for_Comilla!=1 && coach_for_Comilla!=2 && coach_for_Comilla!=3 && coach_for_Comilla!=4)
    {
        printf("\nError!!! Invalid Key!!!\n");
        printf("\nEnter mentioned key from above to select your coach = ");
        scanf("%d",&coach_for_Comilla);
    }

    if(coach_for_Comilla==1)
    {
        printf("\nBus Number: Dhaka Metro-HA,12-27-51\n");

        seatplan();

        char seat_number[10];
        printf("\nEnter your desired seat : ");
        scanf("%s",seat_number);
        printf("\nThis is the soft copy of your ticket - \n");
        printf("\nSeat Number : %s",seat_number);
        printf("\nDestination : COMILLA to DHAKA\n");
        printf("Departure Time : 7:00 am");
        printf("\nBus Number: Dhaka Metro-HA,12-27-51");
        printf("\nSupervisor Name : M.B.Abu Noman");
        printf("\nSupervisor Phone Number : 01646731824\n");
    }

    else if(coach_for_Comilla==2)
    {
        printf("\nBus Number: Dhaka Metro-LA,82-88-91\n");

        seatplan();

        char seat_number[10];
        printf("\nEnter your desired seat : ");
        scanf("%s",seat_number);
        printf("\nThis is the soft copy of your ticket - \n");
        printf("\nSeat Number : %s",seat_number);
        printf("\nDestination : COMILLA to DHAKA\n");
        printf("Departure Time : 12:00 pm");
        printf("\nBus Number: Dhaka Metro-LA,82-88-91");
        printf("\nSupervisor Name : M.B.Abu Noman");
        printf("\nSupervisor Phone Number : 01646731824\n");
    }

    else if(coach_for_Comilla==3)
    {
        printf("\nBus Number: Dhaka Metro-HA,42-57-52\n");

        seatplan();

        char seat_number[10];
        printf("\nEnter your desired seat : ");
        scanf("%s",seat_number);
        printf("\nThis is the soft copy of your ticket - \n");
        printf("\nSeat Number : %s",seat_number);
        printf("\nDestination : COMILLA to DHAKA\n");
        printf("Departure Time : 6:00 pm");
        printf("\nBus Number: Dhaka Metro-HA,42-57-52");
        printf("\nSupervisor Name : M.B.Abu Noman");
        printf("\nSupervisor Phone Number : 01646731824\n");
    }

    else
    {
        printf("\nBus Number: Dhaka Metro-HA,55-75-45\n");

        seatplan();

        char seat_number[10];
        printf("\nEnter your desired seat : ");
        scanf("%s",seat_number);
        printf("\nThis is the soft copy of your ticket - \n");
        printf("\nSeat Number : %s",seat_number);
        printf("\nDestination : COMILLA to DHAKA\n");
        printf("Departure Time : 11:00 am");
        printf("\nBus Number: Dhaka Metro-HA,55-75-45");
        printf("\nSupervisor Name : M.B.Abu Noman");
        printf("\nSupervisor Phone Number : 01646731824\n");
    }
}


//FUNCTION FOR DHAKA TO CHITTAGONG ROUTE:
void details_of_booking_ticket_Chittagong()
{

    coach();

    int coach_for_Chittagong;

    press();

    scanf("%d",&coach_for_Chittagong);
    while(coach_for_Chittagong!=1 && coach_for_Chittagong!=2 && coach_for_Chittagong!=3 && coach_for_Chittagong!=4)
    {
        printf("\nError!!! Invalid Key!!!\n");
        printf("\nEnter mentioned key from above to select your coach = ");
        scanf("%d",&coach_for_Chittagong);
    }

    if(coach_for_Chittagong==1)
    {
        printf("\nBus Number: Dhaka Metro-HA,13-27-51\n");

        seatplan();

        char seat_number[10];
        printf("\nEnter your desired seat : ");
        scanf("%s",seat_number);
        printf("\nThis is the soft copy of your ticket - \n");
        printf("\nSeat Number : %s",seat_number);
        printf("\nDestination : DHAKA to CHITTAGONG\n");
        printf("Departure Time : 7:00 am");
        printf("\nBus Number: Dhaka Metro-HA,13-27-51");
        printf("\nSupervisor Name : M.B.Abu Noman");
        printf("\nSupervisor Phone Number : 01646731824\n");
    }

    else if(coach_for_Chittagong==2)
    {
        printf("\nBus Number: Dhaka Metro-LA,62-86-91\n");

        seatplan();

        char seat_number[10];
        printf("\nEnter your desired seat : ");
        scanf("%s",seat_number);
        printf("\nThis is the soft copy of your ticket - \n");
        printf("\nSeat Number : %s",seat_number);
        printf("\nDestination : DHAKA to CHITTAGONG\n");
        printf("Departure Time : 12:00 pm");
        printf("\nBus Number: Dhaka Metro-LA,62-86-91");
        printf("\nSupervisor Name : M.B.Abu Noman");
        printf("\nSupervisor Phone Number : 01646731824\n");
    }

    else if(coach_for_Chittagong==3)
    {
        printf("\nBus Number: Dhaka Metro-HA,02-57-52\n");

        seatplan();

        char seat_number[10];
        printf("\nEnter your desired seat : ");
        scanf("%s",seat_number);
        printf("\nThis is the soft copy of your ticket - \n");
        printf("\nSeat Number : %s",seat_number);
        printf("\nDestination : DHAKA to CHITTAGONG\n");
        printf("Departure Time : 6:00 pm");
        printf("\nBus Number: Dhaka Metro-HA,02-57-52");
        printf("\nSupervisor Name : M.B.Abu Noman");
        printf("\nSupervisor Phone Number : 01646731824\n");
    }

    else
    {
        printf("\nBus Number: Dhaka Metro-HA,55-65-46\n");

        seatplan();

        char seat_number[10];
        printf("\nEnter your desired seat : ");
        scanf("%s",seat_number);
        printf("\nThis is the soft copy of your ticket - \n");
        printf("\nSeat Number : %s",seat_number);
        printf("\nDestination : DHAKA to CHITTAGONG\n");
        printf("Departure Time : 11:00 am");
        printf("\nBus Number: Dhaka Metro-HA,55-65-46");
        printf("\nSupervisor Name : M.B.Abu Noman");
        printf("\nSupervisor Phone Number : 01646731824\n");
    }
}


//FUNCTION FOR CHITTAGONG TO DHAKA ROUTE:
void details_of_booking_ticket_Chittagong_back()
{

    coach();

    int coach_for_Chittagong;

    press();

    scanf("%d",&coach_for_Chittagong);
    while(coach_for_Chittagong!=1 && coach_for_Chittagong!=2 && coach_for_Chittagong!=3 && coach_for_Chittagong!=4)
    {
        printf("\nError!!! Invalid Key!!!\n");
        printf("\nEnter mentioned key from above to select your coach = ");
        scanf("%d",&coach_for_Chittagong);
    }

    if(coach_for_Chittagong==1)
    {
        printf("\nBus Number: Dhaka Metro-HA,13-27-51\n");

        seatplan();

        char seat_number[10];
        printf("\nEnter your desired seat : ");
        scanf("%s",seat_number);
        printf("\nThis is the soft copy of your ticket - \n");
        printf("\nSeat Number : %s",seat_number);
        printf("\nDestination : CHITTAGONG to DHAKA\n");
        printf("Departure Time : 7:00 am");
        printf("\nBus Number: Dhaka Metro-HA,13-27-51");
        printf("\nSupervisor Name : M.B.Abu Noman");
        printf("\nSupervisor Phone Number : 01646731824\n");
    }

    else if(coach_for_Chittagong==2)
    {
        printf("\nBus Number: Dhaka Metro-LA,62-86-91\n");

        seatplan();

        char seat_number[10];
        printf("\nEnter your desired seat : ");
        scanf("%s",seat_number);
        printf("\nThis is the soft copy of your ticket - \n");
        printf("\nSeat Number : %s",seat_number);
        printf("\nDestination : CHITTAGONG to DHAKA\n");
        printf("Departure Time : 12:00 pm");
        printf("\nBus Number: Dhaka Metro-LA,62-86-91");
        printf("\nSupervisor Name : M.B.Abu Noman");
        printf("\nSupervisor Phone Number : 01646731824\n");
    }

    else if(coach_for_Chittagong==3)
    {
        printf("\nBus Number: Dhaka Metro-HA,02-57-52\n");

        seatplan();

        char seat_number[10];
        printf("\nEnter your desired seat : ");
        scanf("%s",seat_number);
        printf("\nThis is the soft copy of your ticket - \n");
        printf("\nSeat Number : %s",seat_number);
        printf("\nDestination : CHITTAGONG to DHAKA\n");
        printf("Departure Time : 6:00 pm");
        printf("\nBus Number: Dhaka Metro-HA,02-57-52");
        printf("\nSupervisor Name : M.B.Abu Noman");
        printf("\nSupervisor Phone Number : 01646731824\n");
    }

    else
    {
        printf("\nBus Number: Dhaka Metro-HA,55-65-46\n");

        seatplan();

        char seat_number[10];
        printf("\nEnter your desired seat : ");
        scanf("%s",seat_number);
        printf("\nThis is the soft copy of your ticket - \n");
        printf("\nSeat Number : %s",seat_number);
        printf("\nDestination : CHITTAGONG to DHAKA\n");
        printf("Departure Time : 11:00 am");
        printf("\nBus Number: Dhaka Metro-HA,55-65-46");
        printf("\nSupervisor Name : M.B.Abu Noman");
        printf("\nSupervisor Phone Number : 01646731824\n");
    }
}


//FUNCTION FOR PAYMENT METHOD:
void payment()
{
    int payment;
    printf("\nN.B. - To complete your prebooking, please pay the ticket cost within 2 hours of your order!!!\n");
    printf("\nPAYMENT METHOD - ");
    printf("\n\tpayment with bkash = enter 1");
    printf("\n\tpayment with rocket = enter 2\n");
    printf("\nEnter mentioned key from above to select your payment method = ");
    scanf("%d",&payment);
    while(payment!=1 && payment!=2)
    {
        printf("\nError!!! Invalid Key!!!\n");
        printf("\nEnter mentioned key from above to select your payment method = ");
        scanf("%d",&payment);
    }

    if(payment==1)
    {
        printf("\nThank you for choosing bkash!!!\n");
        printf("\nStep 1.Make sure your payment to (01646731824) this number.");
        printf("\nStep 2.You will get a pin number via text massage through your entered phone number.");
        printf("\nStep 3.Come to our ticket counter before the departure of your bus along with the pin number.");
        printf("\nStep 4.Collect the hard copy of the ticket and enjoy your journey!!!\n");
        printf("\nTHANK YOU!!!");
    }

    else
    {
       printf("\nThank you for choosing rocket!!!\n");
       printf("\nStep 1. Make sure your payment to (01712177490) this number.");
       printf("\nStep 2. You will get a pin number via text massage through your entered phone number.");
       printf("\nStep 3. Come to our ticket counter before the departure of your bus along with the pin number.");
       printf("\nStep 4. Collect the hard copy of the ticket and enjoy your journey!!!\n");
       printf("\nTHANK YOU!!!");
    }
}
