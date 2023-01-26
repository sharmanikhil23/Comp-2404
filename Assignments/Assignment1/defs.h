#ifndef DEFS_H
#define DEFS_H

#define NUM_USERS       3
#define MAX_ARR_SIZE  128

typedef enum { ORDER_BY_YEAR, ORDER_BY_AUTHOR } OrderType;

class BookLib;
class User;

void loadMasterLib(BookLib&, string, OrderType);
void loadUsers(User*, BookLib&);
void printMenu(int&);

#endif

