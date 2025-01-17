#ifndef HEADER_H
# define HEADER_H

/*--------------------------------
  !! required structure
  --------------------------------*/

/*--------------------------------
  :) function you must implement
  --------------------------------*/

/*
	Queue
*/

//struct of a stack node
struct s_node {
	char          *message;
	struct s_node *next;
};

//queue is made of 2 stacks
struct s_queue {
  struct s_node *first;
	struct s_node *last;
};


struct s_queue *queueInit(void);

char *dequeue(struct s_queue *queue);

void enqueue(struct s_queue *queue, char *message);

char *peek(struct s_queue *queue);

int isEmpty(struct s_queue *queue);


/*--------------------------------
  ?? test function used in main 
  --------------------------------*/

/*--------------------------------
  &  your own other function
  --------------------------------*/
void push(struct s_node *stack1, char *message);
char *pop(struct s_node *stack2);

#endif
