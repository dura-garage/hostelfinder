#ifndef HOSTELOWNERSERVICE_H
#define HOSTELOWNERSERVICE_H

#include <string>
#include<vector>

#include "hostelowner.h"

using namespace std;

class HostelOwnerRepository
{

public:
HostelOwnerRepository();

//memeber functions
vector<HostelOwner> getAllHostelOwners();
HostelOwner getHostelOwner(string email, string password);
};

#endif
#endif // HOSTELOWNERSERVICE_H
