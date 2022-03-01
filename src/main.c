#include <stdio.h>
#include <string.h>
#include "../inc/StudentRecordHeader.h"



int main()
{
//    //Sample
//    struct data person;
//    Student(person);
//

    //Student 1
    struct StudentRecord record1;
    createStudentRecord(record1);
//    //Student 2
    struct StudentRecord record2;
    createStudentRecord(record2);

    struct StudentRecord record3;
    createStudentRecord(record3);

    struct StudentRecord *record=&record1;

//
//    reportWithPoint(record1);
//    reportWithPoint(record2);
//    reportWithPoint(record3);

    return 0;
}