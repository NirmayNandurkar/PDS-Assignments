#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100


struct Stack {
    int top;
    char items[MAX_SIZE];
};


void initialize(struct Stack *s) {
    s->top = -1;
}


int isFull(struct Stack *s) {
    return s->top == MAX_SIZE - 1;
}


int isEmpty(struct Stack *s) {
    return s->top == -1;
}

void push(struct Stack *s, char item) {
    if (isFull(s)) {
        printf("Stack Overflow\n");
        return;
    }
    s->items[++(s->top)] = item;
}


char pop(struct Stack *s) {
    if (isEmpty(s)) {
        printf("Stack Underflow\n");
        return -1;
    }
    return s->items[(s->top)--];
}


void reverseString(char *str) {
    struct Stack s;
    initialize(&s);

   
    for (int i = 0; i < strlen(str); i++) {
        push(&s, str[i]);
    }

    
    for (int i = 0; i < strlen(str); i++) {
        str[i] = pop(&s);
    }
}

int main() {
    char str[MAX_SIZE];

    printf("Enter a string: ");
    fgets(str, MAX_SIZE, stdin);
    
    
    str[strlen(str) - 1] = '\0';

    
    reverseString(str);

    printf("Reversed string: %s\n", str);

    return 0;
}
