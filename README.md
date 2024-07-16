# Gym Management System

This project is a Gym Management System written in C++. It provides functionalities for managing gym memberships, including member registration, subscription management, complaints, and rating systems.

## Table of Contents

- [Features](#features)
- [Getting Started](#getting-started)
- [Usage](#usage)
  - [New Member](#new-member)
  - [Old Member](#old-member)
- [Functions](#functions)
- [File Structure](#file-structure)


## Features

- Register new members
- Manage subscriptions for new and existing members
- Handle complaints and ratings from members
- Display information about gym equipment, schedule of classes, prices, offers, and gym details

## Getting Started

### Prerequisites

- A C++ compiler (e.g., GCC, MSVC)
- A text editor or an IDE (e.g., Visual Studio, Code::Blocks)

### Installation

1. Clone the repository:
   ```sh
   git clone https://github.com/BassantMaher/Gym-management-system

2. Navigate to the project directory:
    ```sh
    cd gym-management-system

3. Compile the program:
    ```sh
    g++ -o gym_management_system main.cpp


4. Run the program:
     ```sh
     ./gym_management_system


## Usage
### New Member
1. To register a new member, choose the option for new members from the main menu.
2. Enter the required details such as full name, email address, phone number, and address.
3. Answer health-related questions and specify how you heard about the gym.
4. Choose a subscription package and make the payment.
5. The system will generate a unique ID for the new member.
### Old Member
1. To manage an existing membership, choose the option for old members from the main menu.
2. Enter the member's unique ID.
3. Choose options to renew subscription, unsubscribe, lodge a complaint, or rate the gym.
### Functions
1. new_memb(): Registers a new member by collecting personal details and health-related information.
2. get_id(): Generates a unique ID for a new member.
3. display_name(): Displays the name of the current member.
4. subscribenew(): Manages subscription packages for new members.
5. subscribtion_new_member(): Guides the new member through the subscription process.
6. store_new_members(): Stores new member details in a file.
7. old_member(): Manages actions for existing members based on their ID.
8. subscribtion_old_member(): Handles subscription renewal and unsubscription for existing members.
9. complain(): Collects and records complaints from members.
10. rating(): Collects and records ratings from members.
11. menu_old(): Displays the menu for old members to manage their subscriptions, complaints, and ratings.
12. search_id(long long id): Searches for a member by their unique ID.
13. equipments(): Displays information about gym equipment.
14. about_us(): Displays information about the gym.
### File Structure
1. main.cpp: Contains the main function and all the functionalities for managing the gym system.
2. members.txt: A file to store member information.
