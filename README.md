# Movie Rating Manager

**Overview:**
The Movie Rating Manager is a C++ project designed to manage and sort movies based on their ratings. Utilizing a dynamic linked list, this program efficiently handles movie data, allowing for seamless insertion and sorting operations. The core functionality revolves around reading movie data from a file, processing it, and displaying the movies in ascending order of their ratings.

**Features:**
The project features a dynamic linked list to manage nodes that store movie ratings and titles. It reads data from a file named test, processes each entry, and sorts the list accordingly. The sorting is done in ascending order based on ratings, and the final sorted list of movies is displayed to the user.

**Components:**
The primary component of the project is the NodeList class, which defines the structure and operations for the linked list nodes. This class includes a constructor for initializing nodes with ratings and titles, methods for inserting nodes (InsertFront and InsertintoPosition), and functions for traversing and displaying the list. The main program handles file reading, node creation, insertion into the list, and displays the sorted movie data.

**How to Use:**
To use the Movie Rating Manager, first compile the C++ code using a suitable compiler. Prepare an input file named test with movie ratings and titles. When the program is executed, it will read from this file, sort the movies by rating, and output the sorted list.

**Example:**
For an input file test containing:
8.5 Inception
9.2 The Dark Knight
7.8 Interstellar


The program will sort and display:
7.8 Interstellar     
8.5 Inception        
9.2 The Dark Knight 

# Notes
Ensure that the file test is located in the working directory before running the program. The program includes basic error handling but assumes that the input is correctly formatted.
