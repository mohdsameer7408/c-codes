/* This program is basically designed to convert an inputted infix expression to
   a postfix or prefix expresssion, and evaluation of that expression as per
   users need*/

#include <conio.h>
#include <stdio.h>
#include <string.h>
#define size 50

char stack[size], exp[size];
int top = -1, count = -1;

void push(int e) { stack[++top] = e; }

char pop() {
  if (top == -1) {
    printf("Stack is underflowed!!!\n");
    return 0;
  }
  return (stack[top--]);
}

int priority_checker(char opr) {
  if (opr == '(' || opr == ')') {
    return 0;
  } else if (opr == '+' || opr == '-') {
    return 1;
  } else if (opr == '*' || opr == '/' || opr == '%') {
    return 2;
  }
  return -1;
}

void infix_to_postfix_converter(char infix_exp[]) {
  int i = 0;
  char p;
  while (infix_exp[i] != '\0') {
    if (isalpha(infix_exp[i]) || isdigit(infix_exp[i])) {
      exp[++count] = infix_exp[i];
    } else if (infix_exp[i] == '(') {
      push(infix_exp[i]);
    } else if (infix_exp[i] == ')') {
      while ((p = pop()) != '(') {
        exp[++count] = p;
      }
    } else {
      if (priority_checker(stack[top]) >= priority_checker(infix_exp[i])) {
        while (priority_checker(stack[top]) >= priority_checker(infix_exp[i])) {
          p = pop();
          exp[++count] = p;
        }
      }
      push(infix_exp[i]);
    }
    i++;
  }
  while (top != -1) {
    exp[++count] = pop();
  }
}

void postfix_evaluator(char postfix_exp[]) {
  int i = 0;
  while (postfix_exp[i]) {
    if (isdigit(postfix_exp[i])) {
      push(postfix_exp[i]);
    } else {
      int a, b;
      char c;
      a = (int)pop() - 48;
      b = (int)pop() - 48;
      switch (postfix_exp[i]) {
        case '-':
          c = (char)((b - a) + 48);
          break;
        case '+':
          c = (char)((b + a) + 48);
          break;
        case '%':
          c = (char)((b % a) + 48);
          break;
        case '/':
          c = (char)((b / a) + 48);
          break;
        case '*':
          c = (char)((b * a) + 48);
          break;
      }
      push(c);
    }
    i++;
  }
}

void reverse(char arr[]) {
  int i = 0, l = strlen(arr) - 1;
  char tmp[l + 1];
  while (l >= 0) {
    tmp[i++] = arr[l--];
  }
  tmp[i] = '\0';
  i = 0;
  while (tmp[i]) {
    arr[i] = tmp[i];
    i++;
  }
  arr[i] = '\0';
}

void infix_to_prefix_converter(char infix_exp[]) {
  int i = 0;
  //	strrev(infix_exp);
  reverse(infix_exp);
  char p;
  while (infix_exp[i] != '\0') {
    if (isalpha(infix_exp[i]) || isdigit(infix_exp[i])) {
      exp[++count] = infix_exp[i];
    } else if (infix_exp[i] == ')') {
      push(infix_exp[i]);
    } else if (infix_exp[i] == '(') {
      while ((p = pop()) != ')') {
        exp[++count] = p;
      }
    } else {
      if (priority_checker(stack[top]) >= priority_checker(infix_exp[i])) {
        while (priority_checker(stack[top]) >= priority_checker(infix_exp[i])) {
          p = pop();
          exp[++count] = p;
        }
      }
      push(infix_exp[i]);
    }
    i++;
  }
  while (top != -1) {
    exp[++count] = pop();
  }
  reverse(exp);
  //	strrev(exp);
}

void prefix_evaluator(char prefix_exp[]) {
  int i = strlen(prefix_exp) - 1;
  while (i >= 0) {
    if (isdigit(prefix_exp[i])) {
      push(prefix_exp[i]);
    } else {
      int a, b;
      char c;
      a = (int)pop() - 48;
      b = (int)pop() - 48;
      switch (prefix_exp[i]) {
        case '-':
          c = (char)((a - b) + 48);
          break;
        case '+':
          c = (char)((a + b) + 48);
          break;
        case '%':
          c = (char)((a % b) + 48);
          break;
        case '/':
          c = (char)((a / b) + 48);
          break;
        case '*':
          c = (char)((a * b) + 48);
          break;
      }
      push(c);
    }
    i--;
  }
}

void main() {
  char infix_exp[50], ch;
  int choice, i = 0;
  while (1) {
    printf(
        "\n\n "
        "======================================================================"
        "========================================");
    printf(
        "\n|\t\t\t\t\tOperations on an Infix Expression                        "
        "              |");
    printf(
        "\n "
        "======================================================================"
        "========================================");
    printf("\n\n\t1. To convert an infix expression to postfix");
    printf("\n\t2. To convert an infix expression to prefix");
    printf("\n\t3. Quit");
    printf("\n\tEnter your choice...... : ");
    scanf("%d", &choice);
    switch (choice) {
      case 1:
        printf("\n\t\tEnter an infix expression = ");
        scanf("%s", infix_exp);
        infix_to_postfix_converter(infix_exp);
        printf("\n\t\tYour converted postfix expression is = %s", exp);
        printf("\n\n\t\t\tDo you want the evaluation of your experession!!!");
        printf("\n\t\t\t      [y/Y for yes]    [n/N for no]");
        printf("\n\t\t\t       >>");
        scanf(" %c", &ch);
        if (ch == 'y' || ch == 'Y') {
          if (isalpha(exp[0])) {
            printf("\n\t\tEvaluation isn't possible on alphabets!!!");
            break;
          }
          postfix_evaluator(exp);
          printf("\t\tResult for your postfix expression is = %d",
                 (int)stack[top] - 48);
        }
        break;
      case 2:
        printf("\n\t\tEnter an infix expression = ");
        scanf("%s", infix_exp);
        infix_to_prefix_converter(infix_exp);
        printf("\n\t\tYour converted prefix expression is = %s", exp);
        printf("\n\n\t\t\tDo you want the evaluation of your experession!!!");
        printf("\n\t\t\t      [y/Y for yes]    [n/N for no]");
        printf("\n\t\t\t       >>");
        scanf(" %c", &ch);
        if (ch == 'y' || ch == 'Y') {
          if (isalpha(exp[strlen(exp) - 1])) {
            printf("\n\t\tEvaluation isn't possible on alphabets!!!");
            break;
          }
          prefix_evaluator(exp);
          printf("\t\tResult for your prefix expression is = %d",
                 (int)stack[top] - 48);
        }
        break;
      case 3:
        exit(0);
      default:
        printf("\tEnter a valid choice from the above menu!!!");
    }
    printf("\n\n\t\t\tPress any key to continue!!!");
    getch();
    system("cls");
    count = -1;
    top = -1;
  }
}
