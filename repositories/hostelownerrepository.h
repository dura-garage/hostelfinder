#ifndef HOSTELOWNERREPOSITORY_H
#define HOSTELOWNERREPOSITORY_H

#include <string>
#include<vector>

#include "models/hostelowner.h"

using namespace std;

class HostelOwnerRepository
{

public:
HostelOwnerRepository();

//memeber functions
vector<HostelOwner> getAllHostelOwners();
HostelOwner getHostelOwner(string email, string password);
};
#endif // HOSTELOWNERREPOSITORY_H
