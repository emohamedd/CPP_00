# My Awesome PhoneBook

## Exercise 01

Welcome to Exercise 01: My Awesome PhoneBook! In this exercise, you will create a simple phonebook program that emulates the technology of the 1980s. You will be required to implement two classes: `PhoneBook` and `Contact`. The `PhoneBook` class will store a maximum of 8 contacts and replace the oldest contact when adding a new one, with dynamic allocation being forbidden. The `Contact` class represents an individual phonebook contact.

## Instructions

You are provided with the following guidelines for completing this exercise:

### Classes

#### PhoneBook

- It contains an array of contacts.
- It can store a maximum of 8 contacts. If the user tries to add a 9th contact, replace the oldest one with the new one.
- Dynamic allocation is forbidden.

#### Contact

- Represents a phonebook contact.
- Fields for a contact include: first name, last name, nickname, phone number, and darkest secret.
- A saved contact cannot have empty fields.

### Implementation Details

- Instantiate the phonebook as an instance of the `PhoneBook` class.
- Instantiate contacts as instances of the `Contact` class.
- Design the classes as you like, keeping in mind that private members are for internal use within a class, while public members are accessible from outside the class.

### Program Execution

- On program start-up, the phonebook is empty.
- The program only accepts the following commands: ADD, SEARCH, and EXIT.
  - ADD: Save a new contact by inputting the contact's information field by field.
  - SEARCH: Display saved contacts in a formatted list.
  - EXIT: Quit the program.

### Commands

#### ADD

- If the user enters this command, they are prompted to input the information of the new contact one field at a time.
- The contact fields are: first name, last name, nickname, phone number, and darkest secret.
- A saved contact cannot have empty fields.

#### SEARCH

- Display the saved contacts as a list with columns: index, first name, last name, and nickname.
- Each column is 10 characters wide, right-aligned, and separated by a pipe character ('|').
- Text longer than the column is truncated, and the last displayable character is replaced by a dot ('.').
- Prompt the user for the index of the entry to display.
- Define relevant behavior for incorrect inputs.

#### EXIT

- The program quits, and the contacts are lost forever.

- Any other input is discarded.

### Completion

- The program continues to execute commands until the user enters EXIT.

Give a relevant name to your executable.