#pragma once
#ifndef CANDIDATETYPE_H
#define CANDIDATETYPE_H

#include "persontype.h"

const int NUM_OF_CAMPUSUS = 4;


class CandidateType:public PersonType
{
public:
    CandidateType();

    int getTotalVotes() const;
    int getVotesByCampus(int campusArr[]) const;
    
    void updateVotesByCampus(int totalVotes, int votesForCampus);
    void printCandidateInfo();
    void printCandidateInfo();
    void printCandidateCampusVotes();

    ~CandidateType();

private:
    int numVotes;
    int campusArr[NUM_OF_CAMPUSES];
};








#endif