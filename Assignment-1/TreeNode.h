/*
 * TreeNode.h
 *
 *  Created on: 08-Feb-2012
 *      Author: sandeep
 */

#ifndef TREENODE_H_
#define TREENODE_H_
#include "commons.h"
#include "Utils.h"
class TreeNode {
public:
	int numkeys;
	byte data[DATA_SIZE];
	byte myaddr[NODE_OFFSET_SIZE];
	Utils *utils;
	char flag;
	TreeNode* next;
	TreeNode();
	~TreeNode();
	int addData(KeyType keytype, char* key, int payloadlen, char* payload,
			int position);
	int getKey(KeyType keytype, char* key, int position);
	int readData(int position, KeyType keytype, char key[], int payloadlen,
			char payload[]);
	int getPayload(int payloadlen, char *payload, int position);

    void display(KeyType keyType);
};
#endif /* TREENODE_H_ */
