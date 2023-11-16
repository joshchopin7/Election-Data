#ifndef CANDIDATELIST_H
#define CANDIDATELIST_H

#include "CandidateType.h"
#include "PersonType.h"
#include "Node.h"

class CandidateList
{
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


private:
    Node* first;
    Node* last;
    int count;
};





#endif