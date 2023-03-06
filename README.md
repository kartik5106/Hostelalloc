# Hostelalloc
Hostel Room Allotment System

This is a C++ program for an online hostel room allotment system that allows students to check the status of rooms, allocate rooms to themselves, and print the allotment list with members.
Features

The program provides the following features:

    Checking the status of rooms (vacant or occupied)
    Allocating rooms to students, with input of student details (name and roll number)
    Printing the allotment list with members in a matrix-style format

Implementation:
The program is implemented using C++ and data structures like arrays and queues. It uses an array of queues to store the room allocations, with each queue representing a room and storing the details of the students allocated to that room.
The checkRoomStatus() function iterates through the array of queues and checks whether each room is vacant or occupied. The allocateRoom() function takes the name and roll number of a student as input and allows the user to select a room number. The printAllotments() function prints the list of alloted rooms with members.
The checker() function in the database.h header file contains a list of student names and corresponding addresses. This function can be used to verify the eligibility of students and ensure that only authorized users can access the service.

Usage:
To use the program, compile the hostel.cpp file using a C++ compiler (e.g., g++). Run the compiled executable and follow the prompts to use the program.

Shell:
$ g++ main.cpp -o hostel
$ ./hostel
