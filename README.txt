COMP 10050 Software Engineering Assignment 3
 Group BQ:
	Jack Dunne			22483576
	Maciej Szmagara 	22325591

How was the board loaded?
We created a function void load_Board() to ask the user for a specific filename to open for reading. It would then print out
all the contents of the file onto the interface before closing said file. If the user chose to display a board without loading
from a file beforehand,then a template board (default.txt) would be displayed instead.

How were lists and items edited?
//WIP// We used a nested linked list to store the lists in the outer nodes and the items in the inner nodes.
This allowed us to use the functions InsertI(),InsertL(),DeleteI(),DeleteL() to dynamically edit the list size

How were boards saved?
We created a function void save_Board() that asks the user to enter a filename for the board to save. save_Board then creates
a copy of default.txt renamed with the entered filename within the assignment folder

What's your ASCII art about?
Our ASCII art is Karl Marx. This is a placeholder. Jack is reading the Communist Manifesto.
