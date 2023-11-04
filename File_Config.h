#ifndef FILE_H
#define  FILE_H

/************* Macros Definition *****************/
#define Value_Of_End_File  EOF
#define File_Closed_Successfully  0
/*************************************************/

/************** Helper Definition  ***************/
FILE *Source_File = NULL;
FILE *Destination_File = NULL;

char Source_file_Path[100];
char Destination_file_Path[100];

char check_character = '\0';
int Check_Close_File = 0;
/*************************************************/

#endif
