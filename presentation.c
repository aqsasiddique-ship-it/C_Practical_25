/*
 * presentation.c
 *
 *  Created on: 05-Aug-2026
 *      Author: aqsa
 *
 */

#include <stdio.h>
#include <string.h>

int main()
{

	char name [50];
	char severity[20];
	int age;

	//Collection of patient data and severity
	printf("Patient Name:");
	scanf("%s",name);

	printf("Age:");
	scanf("%d", &age);

	printf("\n1. Critical\n");
	printf("2. Serious\n");
	printf("3. Stable\n");
	printf("4. Minor\n");

	printf("\nSeverity : ");
	scanf("%s", severity);

    //Display for the patient details
	printf("\n------------ HOSPITAL TRIAGE ------------\n");

	printf("\nPatient Name: %s", name);
	printf("\nAge : %d", age);
	printf("\nSeverity : %s", severity);

    //Determining treatment priority based on the severity level
	if (strcmp(severity, "Critical") == 0)
	{
		printf("\nTreatment Priority : Immediate Treatment");
		printf("\nPlease Proceed to Emergency Ward");
	}

	else if (strcmp(severity, "Serious") == 0)
	{
		printf("\nTreatment Priority : High Priority");
	}

	else if (strcmp(severity, "Stable") == 0)
	{
		printf("\nTreatment Priority : Normal Priority");
	}

	else if (strcmp(severity, "Minor") == 0)
	{
		printf("\nTreatment Priority : Low Priority");
	}

	else
	{
		printf("\nInvalid Severity Level");
	}

	printf ("\n-----------------------------------------");

	return 0;
}
