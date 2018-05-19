#include <list>
#include <iostream>
#include <string>
#include <unordered_set>
struct Client{
	long id;
	int fd;
	std::unordered_set<std::string> pubsub_channels;
	std::list<std::string> pubsub_patterns;
	
};
