#include <iostream>
using namespace std;

#include "Header.h"

int main()
{
	Bug a("button doesn't show","easy","next week","resolved","John");
	Bug b("app doesn't open", "hard", "tomorow", "unresolved", "Peter");
	Bug c("there is no sound in menu", "medium", "next week", "resolved", "Nick");

	Backlog problems;

	problems.list[0] = a;
	problems.list[1] = b;
	problems.list[2] = c;

	problems.sort_list();


	//problems.print_list(0);
	//problems.print_list(1);
	//problems.print_list(2);
	
	//problems.print_resolved(0);

}
