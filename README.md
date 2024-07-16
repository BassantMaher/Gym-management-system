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
- [Contributing](#contributing)
- [License](#license)

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
Navigate to the project directory:

sh
Copy code
cd gym-management-system
Compile the program:

sh
Copy code
g++ -o gym_management_system main.cpp
Run the program:

sh
Copy code
./gym_management_system
Usage
New Member
To register a new member, choose the option for new members from the main menu.
Enter the required details such as full name, email address, phone number, and address.
Answer health-related questions and specify how you heard about the gym.
Choose a subscription package and make the payment.
The system will generate a unique ID for the new member.
Old Member
To manage an existing membership, choose the option for old members from the main menu.
Enter the member's unique ID.
Choose options to renew subscription, unsubscribe, lodge a complaint, or rate the gym.
Functions
new_memb(): Registers a new member by collecting personal details and health-related information.
get_id(): Generates a unique ID for a new member.
display_name(): Displays the name of the current member.
subscribenew(): Manages subscription packages for new members.
subscribtion_new_member(): Guides the new member through the subscription process.
store_new_members(): Stores new member details in a file.
old_member(): Manages actions for existing members based on their ID.
subscribtion_old_member(): Handles subscription renewal and unsubscription for existing members.
complain(): Collects and records complaints from members.
rating(): Collects and records ratings from members.
menu_old(): Displays the menu for old members to manage their subscriptions, complaints, and ratings.
search_id(long long id): Searches for a member by their unique ID.
equipments(): Displays information about gym equipment.
about_us(): Displays information about the gym.
File Structure
main.cpp: Contains the main function and all the functionalities for managing the gym system.
members.txt: A file to store member information.
Contributing
Contributions are welcome! Please fork this repository and submit pull requests for any improvements or bug fixes.