#pragma once
#include "BinaryTree.h"


int main() {

    btree* tree = new btree();

    tree->insert(10);
    tree->insert(6);
    tree->insert(14);
    tree->insert(5);
    tree->insert(8);
    tree->insert(11);
    tree->insert(18);
    tree->insert(20);
    tree->insert(45);
    tree->insert(64);
    tree->insert(35);
    tree->insert(17);
    tree->insert(13);

    delete tree;

}