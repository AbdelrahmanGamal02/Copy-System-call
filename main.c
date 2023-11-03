#include <stdio.h>
#include "file.h"

int main() {

    PATHINPUT: // Label to use goto and return here if entered invalid path
    printf("Please Enter The Path Of Source File :\n");
    gets(Source_file_Path);
    Source_File = fopen(Source_file_Path , "r");
    if(NULL != Source_File)
    {
        printf("File opened successfully \n");

        PATH2INPUT: // Label to use goto and return here if entered invalid path
        printf("Please Enter The Path Of Destination File :\n");
        gets(Destination_file_Path);
        Destination_File = fopen(Destination_file_Path , "w");
        if(NULL != Destination_File)
        {
            printf("Destination File is Ready\n");

            do
            {
                check_character = getc(Source_File);
                if (check_character != Value_Of_End_File) // to prevent add unwanted character and stop at the end of file
                {
                    putc(check_character, Destination_File);
                }
            }while(check_character != Value_Of_End_File);


            Check_Close_File = fclose(Destination_File);
            if(File_Closed_Successfully == Check_Close_File)
            {
                printf("Copy Process done Successfully and File Closed \n");
            }else
            {
                printf("There Are A problem In The cLose Of Destination File \n");
            }
        }
        else
        {
            printf("Path Not Valid \n Please Enter Valid Path \n");
            goto PATH2INPUT;
        }

    }else
    {
        printf("File NOT Exist\n Please Enter Valid Path \n");
        goto PATHINPUT;
    }
    Check_Close_File = fclose(Source_File);
    if(File_Closed_Successfully == Check_Close_File)
    {
        printf("Source File Closed Successfully \n");
    }else
    {
        printf("There Are A problem In The cLose Of Source File \n");
    }

    return 0;
}
