#include <stdio.h>
#include <string.h>
struct EMPLOYEE

{
  char name[50];
  char ID[50];
  int sal;
  int age;
  char des[50];
struct ADDRESS

{
	int h_no;
	int str_no;
	char area[50];
	char city[50];
	char country[50];
}
addr[3];
}
emp[3];

int main()

{
	int i;
	for (i=0; i<3; i++)

	{
		printf("Enter the details of Employee %d: ",i+1);
		printf("\nName: ");
		scanf("%s", &emp[i].name);
		printf("\nID: ");
		scanf("%s", &emp[i].ID);
		printf("\nSalary: ");
		scanf("%d", &emp[i].sal);
		printf("\nAge: ");
		scanf("%d", &emp[i].age);
		printf("\nDesignation: ");
		scanf("%s", &emp[i].des);
		printf("\nHouse no. : ");
		scanf("%d", &emp[i].addr[i].h_no);
		printf("\nStreet no. : ");
		scanf("%d", &emp[i].addr[i].str_no);
		printf("\nArea: ");
		scanf("%s", &emp[i].addr[i].area);
		printf("\nCity: ");
		scanf("%s", &emp[i].addr[i].city);
		printf("\nCountry: ");
		scanf("%s", &emp[i].addr[i].country);
	}
	for (i=0; i<3; i++)

	{
		printf("\n The details of employee %d are: ",i+1);
		printf("\nName: %s", emp[i].name);
		printf("\nID: %s", emp[i].ID);
		printf("\nSalary: %d", emp[i].sal);
		printf("\nAge: %d", emp[i].age);
		printf("\nDesignation: %s",emp[i].des);
		printf("\nAddress: House no. %d, Street no. %d, %s, %s, %s", emp[i].addr[i].h_no, emp[i].addr[i].str_no, emp[i].addr[i].area, emp[i].addr[i].city, emp[i].addr[i].country);
		printf("\n");
	}
}
