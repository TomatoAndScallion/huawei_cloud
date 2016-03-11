#ifndef TYPE_H_
#define TYPE_H_
struct Link
{
	struct Node *SourceNode;
	int LinkID;
	int Cost;
	struct Node *DestinationNode;
};
struct Node
{
	int NodeID;
	struct Link *Rode_to[8] = {NULL};
	struct Node *Next_Node;
	
};
#endif
