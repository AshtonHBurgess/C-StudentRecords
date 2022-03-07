#include <stdio.h>
#include <string.h>
#include "../inc/StudentRecordHeader.h"


//
// Created by asbur on 2/28/2022.
//
float calculateAverage(struct StudentRecord *record){
    float total;
    float avg;
    total = record->courseRecords[0].mark + record->courseRecords[1].mark + record->courseRecords[2].mark + record->courseRecords[3].mark + record->courseRecords[4].mark;
    avg = total / 5;
    return avg;
}

void reportStudent(struct StudentRecord *record){

    printf("Student: ID:%i\t\t\tName: %s, %s",record->studentID, record->lastName, record->firstName);
    printf("\n----------------------------------------\n");
    printf("Course name: %s\tCourse mark: %.0f\n", record->courseRecords[0].courseName, record->courseRecords[0].mark);
    printf("Course name: %s\tCourse mark: %.0f\n", record->courseRecords[1].courseName, record->courseRecords[1].mark);
    printf("Course name: %s\tCourse mark: %.0f\n", record->courseRecords[2].courseName, record->courseRecords[2].mark);
    printf("Course name: %s\tCourse mark: %.0f\n", record->courseRecords[3].courseName, record->courseRecords[3].mark);
    printf("Course name: %s\tCourse mark: %.0f\n", record->courseRecords[4].courseName, record->courseRecords[4].mark);
    printf("\nGrade Average: %.1f\n", calculateAverage(record));

}












void createStudentRecord(struct StudentRecord *record){
    printf("\nPlease enter the student ID:\n");
    scanf("%i", &record->studentID );
    printf("Please enter the last name for the Student #%i:\n", record->studentID);
    scanf("%s", record->lastName);
    printf("Please enter the first name for the Student #%i:\n", record->studentID);
    scanf("%s",record->firstName );




        for (int i =0; i < 5; i++) {
            printf("Please enter the course name:\n");
            scanf("%s", record->courseRecords[i].courseName);
            printf("Please enter the mark for %s:\n", record->courseRecords[i].courseName);
            scanf("%f", &record->courseRecords[i].mark);
        }

    record->averageMark= calculateAverage(record);



}







