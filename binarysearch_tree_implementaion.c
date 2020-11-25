#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct node
{
	int data;
	struct node *left;
	struct node *right;
};
struct node *root = NULL;
int lc, rc;

void insert(int d)
{
	struct node *tmp, *p;
	tmp = (struct node *)malloc(sizeof(struct node));
	tmp->data = d;
	tmp->left = NULL;
	tmp->right = NULL;
	p = root;
	if (root == NULL)
	{
		root = tmp;
	}
	else
	{
		struct node *q;
		q = root;
		while (q)
		{
			p = q;
			if (tmp->data > q->data)
			{
				q = q->right;
			}
			else
			{
				q = q->left;
			}
		}
		if (tmp->data > p->data)
		{
			p->right = tmp;
		}
		else
		{
			p->left = tmp;
		}
	}
	printf("Element %d had been inserted to  the binary search tree!!!\n", d);
}

void delete (int d)
{
	if (root == NULL)
	{
		printf("Binary search tree is empty!!!\n");
	}
	else
	{
		struct node *p, *q = root;
		while (q->data != d)
		{
			p = q;
			if (d > q->data)
			{
				q = q->right;
			}
			else
			{
				q = q->left;
			}
		}
		if (q->left == NULL && q->right == NULL)
		{
			if (p->left == q)
			{
				p->left = NULL;
				free(q);
			}
			else
			{
				p->right = NULL;
				free(q);
			}
		}
		else if (q->left == NULL || q->right == NULL)
		{
			if (q->left != NULL)
			{
				if (q == p->left)
				{
					p->left = q->left;
					q->left = NULL;
					free(q);
				}
				else
				{
					p->right = q->left;
					q->left = NULL;
					free(q);
				}
			}
			else
			{
				if (q == p->left)
				{
					p->left = q->right;
					q->right = NULL;
					free(q);
				}
				else
				{
					p->right = q->right;
					q->right = NULL;
					free(q);
				}
			}
		}
		else if (q->left != NULL && q->right != NULL)
		{
			struct node *t1, *t2;
			t1 = q->right;
			if (t1->left == NULL && t1->right == NULL)
			{
				q->data = t1->data;
				q->right = NULL;
				free(t1);
			}
			else if (t1->right != NULL && t1->left == NULL)
			{
				q->data = t1->data;
				q->right = t1->right;
				t1->right = NULL;
				free(t1);
			}
			else
			{
				while (t1->left != NULL)
				{
					t2 = t1;
					t1 = t1->left;
				}
				q->data = t1->data;
				t2->left = t1->right;
				t1->right = NULL;
				free(t1);
			}
		}
		printf("Element %d had been deleted from the binary search tree!!!\n", d);
	}
}

void inorder(struct node *t)
{
	if (t->left)
	{
		inorder(t->left);
	}
	printf("%d-->", t->data);
	if (t->right)
	{
		inorder(t->right);
	}
}

void pre_order(struct node *t)
{
	printf("%d-->", t->data);
	if (t->left)
	{
		pre_order(t->left);
	}
	if (t->right)
	{
		pre_order(t->right);
	}
}

void post_order(struct node *t)
{
	if (t->left)
	{
		post_order(t->left);
	}
	if (t->right)
	{
		post_order(t->right);
	}
	printf("%d-->", t->data);
}

int height(struct node *t)
{
	if (t == NULL)
	{
		return 0;
	}
	else
	{
		lc = height(t->left);
		rc = height(t->right);
		if (lc > rc)
		{
			return (lc + 1);
		}
		else
		{
			return (rc + 1);
		}
	}
}

void main()
{
	int ch, e, d;
	while (1)
	{
		printf("\n\nBinary search tree implementation........\n");
		printf("1. Insert,\n");
		printf("2. Delete,\n");
		printf("3. Inorder traversal,\n");
		printf("4. Pre-order traversal,\n");
		printf("5. Post-order traversal,\n");
		printf("6. Height of the tree,\n");
		printf("7. Exit\n");
		printf("Enter your choice.........  : ");
		scanf("%d", &ch);
		switch (ch)
		{
		case 1:
			printf("Enter an element to insert in binary search tree = ");
			scanf("%d", &e);
			insert(e);
			break;
		case 2:
			printf("Enter an element to delete from binary search tree = ");
			scanf("%d", &d);
			delete (d);
			break;
		case 3:
			printf("The inorder traversal of the binary search tree is.......... :\n");
			inorder(root);
			break;
		case 4:
			printf("The pre-order traversal of the binary search tree is.......... : ");
			pre_order(root);
			break;
		case 5:
			printf("The post-order traversal of the binary search tree is.......... : ");
			post_order(root);
			break;
		case 6:
			printf("Height of the tree is = %d", height(root) + 1);
			break;
		case 7:
			exit(0);
		default:
			printf("Invalid choice!!!\n");
		}
		getch();
		system("cls");
	}
}
