# Assignment 3 - A list of WHAT?
Design Due: Sunday 3/1    
Final Due: Thursday 3/12

# Goal
To gain experience with:
* a linked list in C
* structs in C

# Problem
You are CTO of LUM Games and you have a hot new card game coming to market. You are going to be responsible for implementing a deck of cards using a linked list.

# Analysis
*\[Software Engineers first attempt to determine **WHAT** is to be done (analysis) before determining **HOW** to do it (design).\]*

## What is a card?
A card includes a suit: Spades, Hearts, Diamonds, Clubs, and a rank: 2-9, Jack, Queen, King, Ace.

## What operations should our linked list support?
You must be able to do the following with your list:
* Create an empty list
* Insert at the beginning
* Insert at the end
* Find an object in the list
* Print the list
* Delete an item from the list

I have provided the skeleton of a main program to demonstrate functionality of the list. This skeleton will need some changes.

# Design
Design Due: Sunday 3/1

1. Create a set of milestones. Each milestone should include a test case or test cases to ensure that you have correctly reached that milestone before moving on to the next bit of coding. These milestones would be good times to commit to GitHub (you can see commits using the ```git log``` command, if you are curious).  Test cases should have the same form as in assignment 2: in, out, rationale. Place your milestones in ***milestones.txt*** in your GitHub repo. 
2. Come up with additional analysis questions that you need answered. Place these questions in ***questions.txt*** in your GitHub repo.
3. Create card.c and card.h such that you can at least: create a new card, check for card equality, pretty print a card. How a card is stored internally is up to you.

# Final submission
Final Due: Thursday 3/12

Your GitHub repo should contain:
1. A ```Makefile``` that I can use to run ```make clean``` and ```make all``` to remove derivable files and create all needed executables, respectively. I have provided a file that should serve as an execellent starting point. You may not need to make any changes depending on your implementation.
2. The files created in your Design and all necessary source code. 
3. A file named [Design.md](Design.md "Design of the list") that contains Markdown decribing any design decisions you made.
4. *Either* ***script.out*** (from the ```script``` command) or ***script.sh*** (a stand alone bash script) to demonstrate at least the first six (6) of your test cases for your final products.
5. A file named ***memwatch.log*** containing the output of memwatch for the cleanest of your two programs. The goal is no anomalies.
