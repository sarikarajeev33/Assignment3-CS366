// main.c for a linked list of cards

#include <stdio.h>
#include "memwatch.h"
#include "cardlist.h"
#include "card.h"

static const char INSERT_BEGINNING = 'b';
static const char INSERT_END       = 'e';
static const char DELETE           = 'd';
static const char FIND             = 'f';
static const char PRINT            = 'p';
static const char QUIT             = 'q';

static const int BUFFER_LENGTH = 2;


/* purpose: print a message and terminate the program
 * input:   the message
 * returns: never!! terminates progam
 */
static void die(char *msg)
{
  perror(msg);
  exit(-1);
}


int main(int argc, char *argv[])
{
  char command[BUFFER_LENGTH];
  tCard card;
  tList list = list_create();

  while (1)
  {
    if (scanf("%1s", command) < 1)
      die("scanf command: ");

    if (*command != QUIT && *command != PRINT){
      card = read_card();
    }

    switch (*command)
    {
      case DELETE: 
	      list = list_delete(list, card); 
	      break;
      case FIND: 
	      /*print out the card we found*/; 
	      break;
      case INSERT_BEGINNING: 
	      list = list_insert_beginning(list, card); 
	      break;
      default: printf("Invalid command!\n"); break;
    }
  }
}
