//
// Created by asbur on 2/23/2022.
//

#ifndef ASSIGN3_STUDENTRECORDHEADER_H
#define ASSIGN3_STUDENTRECORDHEADER_H




#include <stdbool.h>

struct CourseRecord
{
    char    courseName[21];
    float   mark;
};

struct StudentRecord
{
    int     studentID;
    char    firstName[21];
    char    lastName[21];
    struct  CourseRecord courseRecords[5];
    float   averageMark;

};



void createStudentRecord(struct StudentRecord *record);

void reportStudent(struct StudentRecord *record);

float calculateAverage(struct StudentRecord *record);

#endif //ASSIGN3_STUDENTRECORDHEADER_H


