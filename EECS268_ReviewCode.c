//Public add Section; public add call he protected balancedAdd
template<typename ItemType> 
bool BinaryNodeTree<ItemType>::add(const ItemType& newData)
{
	BinaryNode<ItemType>* newNodePtr = new BinaryNode<ItemType>(newData);
	rootPtr = balancedAdd(rootPtr, newNodePr);
	
	return true;
}

//Protected balancedAdd Section
template<typename Itemtype>
BinaryNode<ItemType> BinaryNodeTree<ItemType>::balancedAdd(BinaNode<IemType>* subTreePtr, BinaryNode<ItemType>* newNodePtr)
{
	if(subtreePtr == nullptr)
		return newNodePtr;
	else 
	{
		BinayNode<ItemType>* leftPtr = subTreePtr->getLeftChildPtr();
		BinayNode<ItemType>* rightPtr = subTreePr->getRightChildPtr();
		
		if(getHeighHelper(leftPtr) >getHeightHelpter(rightPtr))
		{	
			rightPtr = balancedAdd(rightPtr, newNodePtr);
			subTreePtr->setRightChildPtr(rightPtr);
		}
		else 
		{
			leftPtr = balancedAdd(leftPtr, newNodePtr);
			subTreePtr->setLeftChildPtr(leftPtr);
		}
		return subTreePtr;
	}
}


//Public Traversals Sections

template<typename ItemType>
void BinaryNodeTree<ItemType>::preorderTravrse(void visit(ItemType&)) const
{
	preorder(visit, rootPtr);
}


//Pretected Preorder section
//@param treePtr because of he recusive calls, eventually "points to EVERY NODE" in the tree.
template<typename ItemType>
void BinayTreeNode<ItemType>::preorder(void visit(ItemType&); BianryNode<ItemType>* treePtr) const
{
	if(treePtr !==nullptr)
	{
		ItemType theItem = treePtr->getItem();
		visit(theItem);
		preoder(visit, treePtr->getLeftChildPtr());
		preorder(visit, treePtr->getRightChildPtr());
	}
}


template<typename ItemType>
void BinaryTreeNode<ItemType>::inorder(void visit(ItemType&); BinaryNode<ItemType>* treePtr) const
{
	if(treePtr != nullptr)
	{
		inoder(visit, treePtr->getLeftChildPtr());
		ItemType anItem = treePtr->getItem();
		visit(anItem);
		inorder(visit, treePtr->getRightChildPtr());
	}
	
}






	