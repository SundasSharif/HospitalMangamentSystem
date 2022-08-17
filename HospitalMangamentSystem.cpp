#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

void WelcomeScreen(void);
void Title(void);
void MainMenu(void);
void LoginScreen(void);
void rec_of_patient(void);
void Doctor_details(void);
void about_us(void);
void contact(void);
void ex_it(void);

struct patient
{
	int age;
	char Gender;
	char First_Name[20];
	char Last_Name[20]; 
	char Contact_no[15];
	char Address[30];
	char Email[30];
	char Doctor[20];
	char Problem[20];
};

struct doctor
{
	
	char First_Name[20];
	char Last_Name[20]; 
	char Contact_no[15];
	char day[20];
	char Timing[20];
	char Email[30];
	char Room[20];
	char Specialist[20];
	char floor[20];
	
};






main()
{
	
    WelcomeScreen();
	Title();
	LoginScreen();	

}

void WelcomeScreen(void) 
{
	
	printf("\n\n\n\n\n\n\n\t\t\t\t#########################################");
	printf("\n\t\t\t\t#\t\t WELCOME TO\t\t#");
	printf("\n\t\t\t\t#   IQRA HOSPITAL MANAGEMENT SYSTEM     #");
	printf("\n\t\t\t\t#########################################");
	printf("\n\n\n\n\n Press any key to continue......\n");
	getch();
	system("cls");
	
}

void Title(void)
{
	printf("\n\n\t\t----------------------------------------------------------------------------------");
	printf("\n\t\t\t\t             IQRA HOSPTAL         ");
	printf("\n\t\t----------------------------------------------------------------------------------");
}


void MainMenu(void)
{
	system("cls");
	int choose;
	Title();
	printf("\n\n\n\n\n\t\t\t\t1. Patients Record\n");
	printf("\n\t\t\t\t2. Doctors Data\n");
	printf("\n\t\t\t\t3. Contact\n");
	printf("\n\t\t\t\t4. About Us\n");
	printf("\n\t\t\t\t5. Exit\n");
	printf("\n\n\n \n\t\t\t\tChoose from 1 to 5:");
	scanf("%i", &choose);
	
	switch(choose)
	{
	
	case 1:
	rec_of_patient();
    	break;
    case 2:
     Doctor_details();
    	break;

	case 3:
     contact();
		break;
	case 4:
     about_us();
		break;
	case 5:
		ex_it();
    	break;

	default:
		printf("\t\t\tInvalid entry. Please enter right option :)");
		getch();
	}
		
	
}

void LoginScreen(void)
{

int a=0	;
char Username[15];
char Password[15];
char original_Username[25]="noman";
char original_Password[15]="1234";



do
{
	printf("\n\n\n\n\t\t\t\tEnter your Username and Password :)");
	printf("\n\n\n\t\t\t\t\tUSERNAME:");
	scanf("%s",&Username);
	
	printf("\n\n\t\t\t\t\tPASSWORD:");
	scanf("%s",&Password);
	
	if (strcmp(Username,original_Username)==0 && strcmp(Password,original_Password)==0)
	{
		printf("\n\n\n\t\t\t\t\t...Login Successfull...");
		getch();
		MainMenu();
		break;
	}
	else
	{
		printf("\n\t\t\tPassword in incorrect:( Try Again :)");
		a++;
		getch();
		system("cls");
	
	}
}
while(a<=2);
	if(a>2)
	{
	printf("You have cross the limit. You cannot login. :( :(");
	getch();
     ex_it();
	}
 
system("cls");
}

void ex_it(void)
{
	system("cls");
	printf("\n\n\n\t\t\tSee You again :)\n\n\n");
	printf("\t\t\tPress any button to back on login page\n\n\n");
	getch();
     system("cls");
     LoginScreen();	
	
}

void rec_of_patient(void)
{
	
	system("cls");
	printf("\t\t\t*****RECORDS OF PATIENTS*****\n\n");
	struct patient p1;
     strcpy(p1.First_Name,"Muhammad");
     strcpy(p1.Last_Name,"Umar");
     strcpy(p1.Problem,"Heart Problem");
     strcpy(p1.Email,"umar@gmail.com");
     strcpy(p1.Address,"B-45 bufferzone");
     strcpy(p1.Doctor,"Muhammad Rizwan");
     strcpy(p1.Contact_no,"0314625197");
     p1.age = 31;
     p1.Gender = 'M';
     printf("\t\t\t*** Record of Patient No : 1 ***\n\n\n");
     printf("\t\t\tFull Name: %s %s\n",p1.First_Name,p1.Last_Name);
     printf("\t\t\tAge: %d\n",p1.age);
     printf("\t\t\tGender :%c\n",p1.Gender);
     printf("\t\t\tEmail :%s\n",p1.Email);
     printf("\t\t\tAdress: %s\n",p1.Address);
     printf("\t\t\tContact No : %s\n",p1.Contact_no);
     printf("\t\t\tProblem : %s\n",p1.Problem);
     printf("\t\t\tDoctor : %s\n",p1.Doctor);
     
     struct patient p2;

     strcpy(p2.First_Name,"Muhammad");
     strcpy(p2.Last_Name,"Ahsan");
     strcpy(p2.Problem,"Lungs Problen");
     strcpy(p2.Email,"Ahsan@gmail.com");
     strcpy(p2.Address,"B-48 Defence");
     strcpy(p2.Doctor,"Muhammad Hafeez");
     strcpy(p2.Contact_no,"031423215197");
     p2.age = 56;
     p2.Gender = 'M';
     printf("\n\n\n\t\t\t*** Record of Patient No : 2 ***\n\n\n");
     printf("\t\t\tFull Name: %s %s\n",p1.First_Name,p2.Last_Name);
     printf("\t\t\tAge: %d\n",p2.age);
     printf("\t\t\tGender :%c\n",p2.Gender);
     printf("\t\t\tEmail :%s\n",p2.Email);
     printf("\t\t\tAdress: %s\n",p2.Address);
     printf("\t\t\tContact No : %s\n",p2.Contact_no);
     printf("\t\t\tProblem : %s\n",p2.Problem);
     printf("\t\t\tDoctor : %s\n",p2.Doctor);
     printf("\n\t\t\tPress any button to back on menu page :  :)\n\n\n");
     getch();
     system("cls");
     MainMenu();
	
}

void Doctor_details()
{
		system("cls");
	printf("\t\t\t*****LIST OF DOCTORS*****\n\n");
	struct doctor d1;
     strcpy(d1.First_Name,"Muhammad");
     strcpy(d1.Last_Name,"Rizwan");
     strcpy(d1.Timing,"10 O'Clock Morning'");
     strcpy(d1.Room,"207");
     strcpy(d1.day,"Monday");
     strcpy(d1.floor,"3rd Floor");
     strcpy(d1.Contact_no,"0314632137");
     strcpy(d1.Specialist,"General Physician");
     strcpy(d1.Email,"Rizwan@gmail.com");
     
    
     printf("\t\t\t*** Record of Doctor No : 1 ***\n\n\n");
     printf("\t\t\tFull Name: %s %s\n",d1.First_Name,d1.Last_Name);
     printf("\t\t\tContact No : %s\n",d1.Contact_no);
     printf("\t\t\tEmail :%s\n",d1.Email);
     printf("\t\t\tTiming :%s\n",d1.Timing);
     printf("\t\t\tRoom : %s\n",d1.Room);
     printf("\t\t\tFloor :%s\n",d1.floor);
     printf("\t\t\tDay : %s\n",d1.day);
     printf("\t\t\tSpecialist :%s\n",d1.Specialist);
     
     	struct doctor d2;
     strcpy(d2.First_Name,"Muhammad");
     strcpy(d2.Last_Name,"Hafiz");
     strcpy(d2.Timing,"7 O ' Clock EVENING");
     strcpy(d2.Room,"108");
     strcpy(d2.day,"Saturday");
     strcpy(d2.floor,"2nd Floor");
     strcpy(d2.Contact_no,"030454237");
     strcpy(d2.Specialist,"Heart Specialist");
     strcpy(d2.Email,"Hafiz@gmail.com");
     
    
     printf("\n\n\n\t\t\t*** Record of Doctor No : 2 ***\n\n\n");
     printf("\t\t\tFull Name: %s %s\n",d2.First_Name,d2.Last_Name);
     printf("\t\t\tContact No : %s\n",d2.Contact_no);
     printf("\t\t\tEmail :%s\n",d2.Email);
     printf("\t\t\tTiming :%s\n",d2.Timing);
     printf("\t\t\tRoom : %s\n",d2.Room);
     printf("\t\t\tFloor :%s\n",d2.floor);
     printf("\t\t\tDay : %s\n",d2.day);
     printf("\t\t\tSpecialist :%s\n",d2.Specialist);
     printf("\n\t\t\tPress any button to back on menu page :  :)\n\n\n");
     getch();
     system("cls");
     MainMenu();
}

void contact(void)
{
	system("cls");
	printf("\n\n\n\t\t\t****CONTACT INFORMATION****\n\n\n");
	printf("\n\n\n\t\t\tIqra University Hospital, Karachi\n");
	printf("\t\t\tStadium Road, P.O. Box 3500 Karachi 74800, Pakistan\n");
	printf("\t\t\tTel: +92 21 111-911-911\n");
	printf("\t\t\tFax: +92 21 3493 4294, 3493 2095\n");
	printf("\t\t\tEmail: Iqra.information@iugc.edu\n");
	printf("\n\t\t\tPress any button to back on menu page :  :)\n\n\n");
	getch();
     system("cls");
     MainMenu();
}
void about_us(void)
{
	system("cls");
     printf("\n\n\n\t\t\t****ABOUT US****\n\n");
	printf("\t\t\tIqra University Hospitals in Karachi, Pakistan and Nairobi\n");
	printf("\t\t\tKenya are private, not-for-profit institutions providing high quality health\n");
	printf("\t\t\tcare. The Main Hospitals serve as the principal sites for clinical training\n");
	printf("\t\t\tMidwifery in Pakistan and East Africa.\n");
	printf("\t\t\tfor the University's Medical Colleges and Schools of Nursing and\n");
	printf("\n\t\t\tPress any button to back on menu page :  :)\n\n\n");
	getch();
     system("cls");
     MainMenu();
	
}
