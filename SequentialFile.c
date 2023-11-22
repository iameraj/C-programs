#include <stdio.h>

#define FILENAME "student_records.txt"

struct StudentRecord {
    int rollNo;
    char name[50];
    float subject1Marks;
    float subject2Marks;
    float subject3Marks;
};

void addRecord(FILE *file);
void displayRecords(FILE *file);

int main() {
    FILE *file;

    // Open the file in append mode (creates a new file if it doesn't exist)
    file = fopen(FILENAME, "a");

    if (file == NULL) {
        printf("Error opening file.\n");
        return 1; // Exit with an error code
    }

    // Perform operations
    addRecord(file);
    displayRecords(file);

    // Close the file
    fclose(file);

    return 0;
}

void addRecord(FILE *file) {
    struct StudentRecord newRecord;

    // Input a new student record
    printf("Enter Roll No.: ");
    scanf("%d", &newRecord.rollNo);

    printf("Enter Name: ");
    scanf("%s", newRecord.name);

    printf("Enter Subject 1 Marks: ");
    scanf("%f", &newRecord.subject1Marks);

    printf("Enter Subject 2 Marks: ");
    scanf("%f", &newRecord.subject2Marks);

    printf("Enter Subject 3 Marks: ");
    scanf("%f", &newRecord.subject3Marks);

    // Write the record to the file
    fprintf(file, "%d %s %.2f %.2f %.2f\n", newRecord.rollNo, newRecord.name, newRecord.subject1Marks, newRecord.subject2Marks, newRecord.subject3Marks);

    printf("Record added successfully.\n");
}

void displayRecords(FILE *file) {
    struct StudentRecord record;

    // Rewind the file to the beginning
    rewind(file);

    printf("\nStudent Records:\n");

    // Read and display each record from the file
    while (fscanf(file, "%d %s %f %f %f", &record.rollNo, record.name, &record.subject1Marks, &record.subject2Marks, &record.subject3Marks) != EOF) {
        printf("Roll No.: %d, Name: %s, Subject 1 Marks: %.2f, Subject 2 Marks: %.2f, Subject 3 Marks: %.2f\n",
               record.rollNo, record.name, record.subject1Marks, record.subject2Marks, record.subject3Marks);
    }
}
