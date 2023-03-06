#include <iostream>
#include <queue>
#include<string>
#include"database.h"
using namespace std;
const int NUM_ROOMS = 30; // Number of rooms in the hostel

// Structure to store student details
struct Student {
    std::string name;
    int rollNo;
};

// Queue to store room allocations
std::queue<Student> roomAllocations[NUM_ROOMS];

// Function to check the status of rooms
void checkRoomStatus() {
    for (int i = 0; i < NUM_ROOMS; i++) {
        std::cout << "Room " << i+1 << ": ";
        if (roomAllocations[i].empty()) {
            std::cout << "Vacant" << std::endl;
        } else {
            std::cout << "Occupied" << std::endl;
        }
    }
}

// Function to take student details and allocate a room
void allocateRoom(std::string name, int rollNo) {
    std::cout << "Select room number (1-" << NUM_ROOMS << "): ";
    int roomNo;
    std::cin >> roomNo;
    if(checker(name,rollNo)==1)
    {
    if (roomNo < 1 || roomNo > NUM_ROOMS) {
        std::cout << "Invalid room number" << std::endl;
        return;
    }
    Student newStudent = {name, rollNo};
    roomAllocations[roomNo - 1].push(newStudent);
    std::cout << name << " with roll number " << rollNo << " has been allotted room " << roomNo << std::endl;
    }
    else{
        cout<<"Sorry, As your name is not present in the hostel list we cannot allot you the room"<<endl;
    }
}

// Function to print the list of alloted rooms with members
void printAllotments() {
    std::cout << "Room Number" << "\t" << "Members" << std::endl;
    for (int i = 0; i < NUM_ROOMS; i++) {
        std::cout << i + 1 << "\t"<<"---->"<<"\t";
        int roomSize = roomAllocations[i].size();
        for (int j = 0; j < roomSize; j++) {
            Student student = roomAllocations[i].front();
            roomAllocations[i].pop();
            
            std::cout<<student.name << " (Roll No. " << student.rollNo << ") ";
            roomAllocations[i].push(student);
        }
        std::cout << std::endl;
    }
}

int main() {
    // // Test the functions
    // checkRoomStatus();
    // allocateRoom("John Doe", 123456);
    // printAllotments();

    while(1){

        cout<<"---------------------------------------------------------"<<endl;
        cout<<"| 1. For allotment of room                              |"<<endl;
        cout<<"---------------------------------------------------------"<<endl;
        cout<<"| 2. For checking the availabale rooms in hostel        |"<<endl;
        cout<<"---------------------------------------------------------"<<endl;
        cout<<"| 3. For printing the allotments                        |"<<endl;
        cout<<"---------------------------------------------------------"<<endl;
        cout<<"| 4. For Exiting the program                            |"<<endl;
        cout<<"---------------------------------------------------------"<<endl;
        cout<<"Enter the number to execute the program : "<<endl;

        
        int n;

        cin>>n;

        if(n==2)
        {
            checkRoomStatus();
        }
        else if(n==4)
        {
            break;
        }
        else if(n==1)
        {
            cout<<"Enter your name : "<<endl;
            string nam;
            cin>>nam;
            cout<<"Enter your roll no :"<<endl;
            int roll;
            cin>>roll;
            allocateRoom(nam,roll);
        }
        else if(n==3)
        {
            printAllotments();
        }
        
    }

    return 0;
}
