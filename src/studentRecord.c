#include <stdio.h>
#include <string.h>
#include "../inc/StudentRecordHeader.h"


//
// Created by asbur on 2/28/2022.
//
float calculateAverage(struct StudentRecord record){
    float total;
    float avg;
    total = record.courseRecords[0].mark + record.courseRecords[1].mark + record.courseRecords[2].mark + record.courseRecords[3].mark + record.courseRecords[4].mark;


    avg = total / 5;
//float avg = 6;
    return avg;
}
//void report(struct data person){printf("\n\nThe age is %i\nThe ID_Num is %i\nThe name is %s\n",person.age,person.ID_Num,person.name);}

void reportStudent(struct StudentRecord record){
//    printf("here %s!!",record.firstName);
    printf("Student: ID:%i\t\tName:%s, %s",record.studentID, record.lastName, record.firstName);
    printf("\n----------------------------------------\n");

    printf("Course name: %s\tCourse mark: %.2f\n", record.courseRecords[0].courseName, record.courseRecords[0].mark);
    printf("Course name: %s\tCourse mark: %.2f\n", record.courseRecords[1].courseName, record.courseRecords[1].mark);
    printf("Course name: %s\tCourse mark: %.2f\n", record.courseRecords[2].courseName, record.courseRecords[2].mark);
    printf("Course name: %s\tCourse mark: %.2f\n", record.courseRecords[3].courseName, record.courseRecords[3].mark);
    printf("Course name: %s\tCourse mark: %.2f\n", record.courseRecords[4].courseName, record.courseRecords[4].mark);
    printf("Grade Avereage: %.2f\n", calculateAverage(record));

}



void reportWithPoint(struct StudentRecord *r){
    printf("here %s!!",r->firstName);


    printf("Student: ID:%i\t\tName:%s, %s",r->studentID, r->lastName, r->firstName);
    printf("\n----------------------------------------\n");

    printf("Course name: %s\tCourse mark: %.2f\n", r->courseRecords[0].courseName, r->courseRecords[0].mark);
    printf("Course name: %s\tCourse mark: %.2f\n", r->courseRecords[0].courseName, r->courseRecords[0].mark);
    printf("Course name: %s\tCourse mark: %.2f\n", r->courseRecords[0].courseName, r->courseRecords[0].mark);
    printf("Course name: %s\tCourse mark: %.2f\n", r->courseRecords[0].courseName, r->courseRecords[0].mark);
    printf("Course name: %s\tCourse mark: %.2f\n", r->courseRecords[0].courseName, r->courseRecords[0].mark);
    printf("Course name: %s\tCourse mark: %.2f\n", r->courseRecords[0].courseName, r->courseRecords[0].mark);
    printf("Grade Avereage: %.2f", r->averageMark);



}









void createStudentRecord(struct StudentRecord record){
    printf("Please enter the student ID:\n");
    scanf("%i", &record.studentID );
    printf("Please enter the last name for the Student #%i:\n", record.studentID);
    scanf("%s", record.lastName);
    printf("Please enter the first name for the Student #%i:\n", record.studentID);
    scanf("%s",record.firstName );





       printf("Please enter the course name:\n");
       scanf("%s", record.courseRecords[0].courseName);
       printf("Please enter the mark for %s:\n",record.courseRecords[0].courseName);
       scanf("%f", &record.courseRecords[0].mark);

    printf("Please enter the course name:\n");
    scanf("%s", record.courseRecords[1].courseName);
    printf("Please enter the mark for %s:\n",record.courseRecords[1].courseName);
    scanf("%f", &record.courseRecords[1].mark);

    printf("Please enter the course name:\n");
    scanf("%s", record.courseRecords[2].courseName);
    printf("Please enter the mark for %s:\n",record.courseRecords[2].courseName);
    scanf("%f", &record.courseRecords[2].mark);

    printf("Please enter the course name:\n");
    scanf("%s", record.courseRecords[3].courseName);
    printf("Please enter the mark for %s:\n",record.courseRecords[3].courseName);
    scanf("%f", &record.courseRecords[3].mark);

    printf("Please enter the course name:\n");
    scanf("%s", record.courseRecords[4].courseName);
    printf("Please enter the mark for %s:\n",record.courseRecords[4].courseName);
    scanf("%f", &record.courseRecords[4].mark);

    record.averageMark= calculateAverage(record);
    reportStudent(record);


}







void report(struct data person){printf("\n\nThe age is %i\nThe ID_Num is %i\nThe name is %s\n",person.age,person.ID_Num,person.name);}


void Student(struct data person) {
    printf("Please enter name : ");
    scanf("%s", person.name);
    printf("Please enter age : ");
    scanf("%i", &person.age);
    printf("Please enter ID_Num : ");
    scanf("%i", &person.ID_Num);

    report(person);
}
