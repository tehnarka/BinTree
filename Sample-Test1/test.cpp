#include "pch.h"
#include <iostream>
#include "../bi.drevo/Source.cpp"

TEST(ololo, kekw) {
	// Arrange
	btree* tree = new btree();
	// Act
	tree->insert(10);
	// Assert
	int actual = tree->root->value;
	EXPECT_EQ(actual, 10);

}
/*TEST(preorder_print, Testpr) {
	EXPECT_EQ(10, 10);
}*/

/*TEST(search, Testpr) {
	btree* tree = new btree();
	tree->insert(10);
	EXPECT_EQ(tree->search(0),10);
}
*/