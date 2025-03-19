#include <stdio.h>
#include <stdlib.h>

// Function to create a file
void createFile() {
    FILE *file = fopen("file.txt", "w");
    if (file == NULL) {
        printf("Error: Could not create the file.\n");
        return;
    }
    printf("File 'file.txt' created successfully.\n");
    fclose(file);
}

// Function to write data to a file
void writeFile() {
    FILE *file = fopen("file.txt", "w");
    if (file == NULL) {
        printf("Error: Could not open the file for writing.\n");
        return;
    }
    char data[200];
    printf("Enter data to write into the file:\n");
    getchar(); // Clear input buffer
    fgets(data, sizeof(data), stdin);
    fprintf(file, "%s", data);
    printf("Data written successfully to 'file.txt'.\n");
    fclose(file);
}

// Function to append data to a file
void appendFile() {
    FILE *file = fopen("file.txt", "a");
    if (file == NULL) {
        printf("Error: Could not open the file for appending.\n");
        return;
    }
    char data[200];
    printf("Enter data to append into the file:\n");
    getchar(); // Clear input buffer
    fgets(data, sizeof(data), stdin);
    fprintf(file, "%s", data);
    printf("Data appended successfully to 'file.txt'.\n");
    fclose(file);
}

// Function to read data from a file
void readFile() {
    FILE *file = fopen("file.txt", "r");
    if (file == NULL) {
        printf("Error: Could not open the file for reading.\n");
        return;
    }
    char ch;
    printf("Contents of 'file.txt':\n");
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
    fclose(file);
}

int main() {
    int choice = 0;

    while (choice != 5) {
        printf("\nFile Operations Menu:\n");
        printf("1. Create a file\n");
        printf("2. Write to the file\n");
        printf("3. Append to the file\n");
        printf("4. Read from the file\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            createFile();
        } else if (choice == 2) {
            writeFile();
        } else if (choice == 3) {
            appendFile();
        } else if (choice == 4) {
            readFile();
        } else if (choice == 5) {
            printf("Exiting program.\n");
        } else {
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
