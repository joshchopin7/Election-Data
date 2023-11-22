#include <iostream>
#include "CandidateType.h"


CandidateType::CandidateType()
{
	totalVotes = 0;
	//campusArr[NUM_OF_CAMPUSES] = {};
}



int CandidateType::getTotalVotes() const
{
	return totalVotes;
}



int CandidateType::getVotesByCampus(int campusNum) const
{
	return campusArr[campusNum];
}



void CandidateType::updateVotesByCampus(int campusNum, int newVotes)
{
	campusArr[campusNum - 1] += newVotes;

	totalVotes += newVotes;
}



void CandidateType::printCandidateInfo()
{

	printPersonInfo();

}



void CandidateType::printCandidateTotalVotes()
{
	printName();
	std::cout << "\n\tTotal Votes ( all campuses ) : " << totalVotes;
}



void CandidateType::printCandidateCampusVotes(int campusNum)
{
	printName();
	std::cout << "\n\tCampus " << campusNum << " total votes: " << campusArr[campusNum-1];
}



CandidateType::~CandidateType()
{


}


