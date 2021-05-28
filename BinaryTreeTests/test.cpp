#include "pch.h"
#include "../bi.drevo/BinaryTree.h"
TEST(BinaryTreeInsertTest, VerifyingRootValue) {

	btree* b = new btree();
	b->insert(10);
	int actual = b->root->value;
	EXPECT_EQ(actual, 10);
}
TEST(BinaryTreeInsertTest, VerifyingLeftValue) {

	btree* b = new btree();
	b->insert(10);
	b->insert(5);
	b->insert(11);
	int actual = b->root->left->value;
	EXPECT_EQ(actual, 5);
}
TEST(BinaryTreeInsertTest, VerifyingRightValue) {

	btree* b = new btree();
	b->insert(10);
	b->insert(5);
	b->insert(11);
	int actual = b->root->right->value;
	EXPECT_EQ(actual, 11);
}

TEST(BinaryTreeSearchTest, VerifyingSearchValue) {

	btree* b = new btree();
	b->insert(5);
	b->insert(20);
	b->insert(10);
	b->insert(3);
	b->insert(4);
	b->insert(2);
	b->search(10);
	int actual = b->root->value;
	EXPECT_EQ((bool)b->search(10), true);
}

TEST(BinaryTreeSearchTest, VerifyingFalseSearchValue) {

	btree* b = new btree();
	b->insert(5);
	b->insert(20);
	b->insert(3);
	b->insert(4);
	b->insert(2);
	b->search(10);
	int actual = b->root->value;
	EXPECT_EQ((bool)b->search(10), false);
}
