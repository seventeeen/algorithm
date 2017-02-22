/*
 * About
 *
 * Author: seventeeen@GitHub <powdragon1@gmail.com>
 * Date  : 2017-02-20
 * URL   : https://www.acmicpc.net/problem/1991
 *
 */

#include <iostream>
#include <cstdio>

using namespace std;

struct node {
	char data;
	node* left;
	node* right;
};

node* createNode(char value){
	node* newNode = (node*)malloc(sizeof(node));
	newNode->data = value;
	newNode->left = NULL;
	newNode->right = NULL;
	return newNode;
}
void func(node* A, char value, char left, char right) {
	if (A == NULL)
		return;
	if (A->data == value) {
		if (left != '.')
			A->left = createNode(left);
		else
			A->left = NULL;
		if (right != '.')
			A->right = createNode(right);
		else
			A->right = NULL;
		return;
	}
	func(A->left, value, left, right);
	func(A->right, value, left, right);
}
void inorder(node* NODE) {
	if (NODE == NULL)
		return;
	inorder(NODE->left);
	cout << NODE->data;
	inorder(NODE->right);
}
void preorder(node* NODE) {
	if (NODE == NULL)
		return;
	cout << NODE->data;
	preorder(NODE->left);
	preorder(NODE->right);
}

void postorder(node* NODE) {
	if (NODE == NULL)
		return;
	postorder(NODE->left);
	postorder(NODE->right);
	cout << NODE->data;
}

int main(void) {
	int n;
	cin >> n;
	char a, b, c;
	node* root = createNode('A');
	for (int i = 0; i < n; i++) {
		cin >> a >> b >> c;
		func(root, a, b, c);
	}
	preorder(root);
	printf("\n");
	inorder(root);
	printf("\n");
	postorder(root);

	return 0;
}
