#include "CandidateList.h"
#include "Node.h"

/*
Node() : link(nullptr) {}
	Node(const CandidateType& votes, Node* theLink)
		: candidate(votes), link(theLink) {}
	Node* getLink() const { return link; }
	CandidateType getCandidate() const { return candidate; }
	void setCandidate(const CandidateType& votes) { candidate = votes; }
	void setLink(Node* theLink) { link = theLink; }
	~Node() {}
private:
	CandidateType candidate;
	Node* link;
*/


CandidateList::CandidateList()
{
    first = nullptr;
    last = nullptr;
    count = 0;
}



void CandidateList::addCandidate(CandidateType obj)
{
	int votes = 10;
	//creat a node
	Node* temp = new Node();

	//load the temp node with the obj data
	temp->setCandidate(obj);

	// add the newly created node to the list
	
	//check to see if it is the first node
	if (count == 0) // this is my first node
	{
		first = last = temp;
	}
	else // there are nodes
	{
		last->setLink(temp);
		last = temp;
	}
	temp = nullptr;
	count++;

}



int CandidateList::getWinner()
{


	//dummy functions
	return 0;
}



bool CandidateList::searchCandidate(int ssn)
{

	return true;

}



void CandidateList::printCandidateName(int ssn)
{

}



void CandidateList::printAllCandidates()
{

}



void CandidateList::printCandidateCampusVotes(int ssn, int divisionNum)
{

}



void CandidateList::printCandidateTotalVotes(int ssn)
{

}



void CandidateList::destroyList()
{

}



CandidateList::~CandidateList()
{

}