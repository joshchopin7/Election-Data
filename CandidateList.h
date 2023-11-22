#pragma once
#ifndef CANDIDATELIST_H
#define CANDIDATELIST_H

#include "Node.h"
#include "CandidateType.h"
#include "PersonType.h"


class CandidateList
{
private:
    Node* first;
    Node* last;
    int count;
public:
    CandidateList();
    void addCandidate(CandidateType obj);
    int getWinner();
    bool searchCandidate(int ssn);
    void printCandidateName(int ssn);
    void printAllCandidates();
    void printCandidateCampusVotes(int ssn, int divisionNum);
    void printCandidateTotalVotes(int ssn);
    void destroyList();
    ~CandidateList();
};



#endif