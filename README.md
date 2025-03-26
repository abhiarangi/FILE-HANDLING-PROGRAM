# FILE-HANDLING-PROGRAM

 **COMPANY**: CODTECH SOLUTIONS

 **NAME** : ARANGI ABHISHEK

 **INTERN ID**  : CT08WCM

 **DOMAIN** : C PROGRAMMING

 **DURATION** : 4 WEEKS 

 **MENTOR** : NEELA SANTHOSH KUMAR

 **DESCRIPTION ON FILE HANDLING**

 Creating, writing, and appending data to a file in C is a fundamental task often used in file handling operations. 

**File Handling in C:**
File handling allows programs to store information permanently on a storage device. In C, file operations are performed using pointers to **FILE** objects, which are declared in the
**<stdio.h>** header file. The main functions used for file handling are:
1. **fopen():** Opens a file in a specific mode.
2. **fprintf():** Writes formatted data to a file.
3. **fputs():** Writes a string to a file.
4. **fclose():** Closes a file.
5. **fseek():** Moves the file pointer to a specific position.
6. **fgets():** Reads a string from a file.

**Creating and Writing to a File:**
When a file needs to be created or written to, the **fopen()** function is used. A file can be opened in "write mode" (`"w"`), which creates a new file or overwrites an existing one. For instance:
In this code, **file.txt** is created (or overwritten if it already exists), and data is written to it using **fprintf()**.
**Appending Data to a File:**
To append data to an existing file without overwriting its contents, the file is opened in "append mode" (`"a"`):
Here, the contents of the file are preserved, and new data is added to the end of *example.txt*.

**Explaining the Functions:**
**fopen():** Takes two parameters—the file name and the mode (`"w"`, `"a"`, `"r"`, etc.). It returns a **FILE** pointer if successful or **NULL** if an error occurs.
**fprintf():** Writes formatted data (e.g., strings, integers) to the file.
**fclose():** Ensures resources are freed and changes are saved.

**Error Handling:**
It's important to check if **fopen()** returns **NULl**. This indicates that the file could not be opened, which could be due to permissions, missing directory paths, or other reasons.

When working with file handling in C:
- Always close the file using **fclose()** to ensure proper resource management.
- Use appropriate file modes (`"w"`, `"a"`, `"r"`, etc.) based on the intended operation.
- Handle errors gracefully by checking the return values of file functions.

 **OUTPUT** 

![Image](https://github.com/user-attachments/assets/51b5bd76-ab23-4b97-94dd-c812f305c51b) 
