#pragma once
#ifndef CANDIDATETYPE_H
#define CANDIDATETYPE_H

#include "persontype.h"

const int NUM_OF_CAMPUSES = 4;


class CandidateType:public PersonType
{
public:
    CandidateType();
    
    int getTotalVotes() const;
    int getVotesByCampus(int campusNum) const;
    
    void updateVotesByCampus(int totalVotes, int votesForCampus);
    void printCandidateInfo();
    void printCandidateTotalVotes();
    void printCandidateCampusVotes(int campusNum);

    ~CandidateType();

private:
    int totalVotes;
    int campusArr[NUM_OF_CAMPUSES];
};



#endif