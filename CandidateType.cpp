#include <iostream>
#include "CandidateType.h"
using namespace std;

CandidateType::CandidateType()
{
	totalVotes = 0;
}

int CandidateType::getTotalVotes() const
{
	return totalVotes;
}
int CandidateType::getVotesByCampus(int campusNum) const
{
	return campusArr[campusNum -1];
}

void CandidateType::updateVotesByCampus(int campusNum, int newVotes)
{
	campusArr[campusNum - 1] += newVotes;

	totalVotes += newVotes;

}
void CandidateType::printCandidateInfo()
{
	printInfo();
}
void CandidateType::printCandidateTotalVotes()
{
	printName();
	cout << "\n\tTotal Votes (all campuses) : "<<totalVotes;
}
void CandidateType::printCandidateCampusVotes(int campusNum)
{
	printName();
	cout << "\n\tCampus " << campusNum << " total votes: " << campusArr[campusNum - 1];
}

CandidateType::~CandidateType()
{

}