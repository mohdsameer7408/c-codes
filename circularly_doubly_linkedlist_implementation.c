#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node *left;
  struct node *right;
};
struct node *root = NULL;
int len;

int length() {
  int c = 0;
  struct node *tmp = root;
  if (tmp) {
    do {
      c++;
      tmp = tmp->right;
    } while (tmp != root);
  }
  return c;
}

void append() {
  struct node *tmp;
  tmp = (struct node *)malloc(sizeof(struct node));
  printf("Enter node data = ");
  scanf("%d", &tmp->data);
  tmp->left = NULL;
  tmp->right = NULL;
  if (root == NULL) {
    root = tmp;
    tmp->right = root;
    root->left = tmp;
  } else {
    struct node *p;
    p = root;
    do {
      p = p->right;
    } while (p->right != root);
    p->right = tmp;
    tmp->left = p;
    tmp->right = root;
    root->left = tmp;
  }
  printf("%d appended successfully.\n", tmp->data);
}

void addatbegin() {
  struct node *tmp;
  tmp = (struct node *)malloc(sizeof(struct node));
  printf("Enter the node data = ");
  scanf("%d", &tmp->data);
  tmp->left = NULL;
  tmp->right = NULL;
  if (root == NULL) {
    root = tmp;
    tmp->right = root;
    root->left = tmp;
  } else {
    struct node *p = root;
    do {
      p = p->right;
    } while (p->right != root);
    p->right = tmp;
    tmp->right = root;
    tmp->left = p;
    root->left = tmp;
    root = tmp;
  }
  printf("%d added at the beginning successfully.\n", tmp->data);
}

void addatafter() {
  int loc, l, i = 1;
  struct node *tmp;
  printf("Enter a location after which you prefer to add a new node = ");
  scanf("%d", &loc);
  l = length();
  if (loc > l) {
    printf("Invalid location.\n");
    printf("List conatins only %d nodes.\n", l);
  } else {
    tmp = (struct node *)malloc(sizeof(struct node));
    printf("Enter node data = ");
    scanf("%d", &tmp->data);
    tmp->left = NULL;
    tmp->right = NULL;
    struct node *p = root;
    while (i < loc) {
      p = p->right;
      i++;
    }
    tmp->right = p->right;
    p->right->left = tmp;
    tmp->left = p;
    p->right = tmp;
    printf("Node had been connected successfully.\n");
  }
}

void traverse() {
  struct node *tmp = root;
  if (tmp == NULL) {
    printf("Node is empty, no elements to display.\n");
  } else {
    printf("Node elements are.........\n");
    do {
      printf("%d-->", tmp->data);
      tmp = tmp->right;
    } while (tmp != root);
  }
}

void delete () {
  int loc, l, i = 1;
  struct node *tmp;
  printf("Enter a location which you are willing to delete = ");
  scanf("%d", &loc);
  l = length();
  if (loc > l) {
    printf("Invalid location, the list contains only %d nodes.\n", l);
  } else if (loc == 1) {
    if (length() == 1) {
      tmp = root;
      tmp->left = NULL;
      tmp->right = NULL;
      root = NULL;
      free(tmp);
    } else {
      struct node *p = root;
      do {
        p = p->right;
      } while (p->right != root);
      p->right = root->right;
      tmp = root;
      root = tmp->right;
      tmp->right->left = p;
      tmp->right = NULL;
      tmp->left = NULL;
      free(tmp);
    }
    printf("Node at %d location had been deleted successfully.\n", loc);
  }
  //	else if(loc == l)
  //	{
  //		struct node* p=root,*q;
  //		while(i<(loc-1))
  //		{
  //			p=p->right;
  //			i++;
  //		}
  //		q=p->right;
  //		p->right=q->right;
  //		root->left=p;
  //		q->right=NULL;
  //		q->left=NULL;
  //		free(q);
  //		printf("Node at %d location had been deleted
  //successfully.\n",loc);
  //	}
  else {
    struct node *p = root, *q;
    while (i < (loc - 1)) {
      p = p->right;
      i++;
    }
    q = p->right;
    q->right->left = p;
    p->right = q->right;
    q->right = NULL;
    q->left = NULL;
    free(q);
    printf("Node at %d location had been deleted successfully.\n", loc);
  }
}

void main() {
  int ch;
  while (1) {
    printf("\n\nCircularly doubly linked list operations....\n");
    printf("1. Append,\n2. Add at beginning,\n3. Add at a location after which "
           "you prefer,\n4. Length,\n5. Delete,\n6. Display,\n7. Quit\nEnter "
           "choice.....  : ");
    scanf("%d", &ch);
    switch (ch) {
    case 1:
      append();
      break;
    case 2:
      addatbegin();
      break;
    case 3:
      addatafter();
      break;
    case 4:
      len = length();
      printf("Length = %d.\n", len);
      break;
    case 5:
      delete ();
      break;
    case 6:
      traverse();
      break;
    case 7:
      exit(0);
    default:
      printf("Invalid choice!!!");
    }
    getch();
    system("cls");
  }
}
