#include <stdio.h>
#include <string.h>
#include "../inc/StudentRecordHeader.h"



int main()

{

    setbuf(stdout,0);



    struct StudentRecord record1;
    createStudentRecord(&record1);
    reportStudent(&record1);



    struct StudentRecord record2;
    createStudentRecord(&record2);
    reportStudent(&record2);



    struct StudentRecord record3;
    createStudentRecord(&record3);
    reportStudent(&record3);



printf("***************************************************REPORT CARDS******************************************************\n\n\n");
    reportStudent(&record1);
     reportStudent(&record2);
    reportStudent(&record3);







    return 0;
}