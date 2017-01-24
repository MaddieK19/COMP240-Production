#pragma once
#include "Companion.h"
#include "SelectorNode.h"

//! Class for Branch Manager.
/*!
This is a class for handling the companions current branch
*/
class BranchManager: public SelectorNode
{ 
public:
	//! Constructor
	BranchManager();
	//! Constructor where companion is passed in
	BranchManager(Companion* theCompanion);
	//! Destructor
	~BranchManager();

	// Pointer to the node that is running
	//std::shared_ptr<CompositeNode> currentNode;



	//! Pointer to companion animal
	Companion* companion;

	//! changeBranch is called when the current branch fails of succedes
	void changeBranch();

	//! Updates the current branch
	Node::NodeStates  update();
};

