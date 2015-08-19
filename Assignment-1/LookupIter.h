//
// Created by ek on 10/8/15.
//

#include "TreeNode.h"

#ifndef LOOKUPITER_H
#define LOOKUPITER_H

class LookupIter {
private:
    bool nullIter;
    TreeNode* node;
    int position;
    
    char* key;
    KeyType keyType;
    int payloadlen;

public:

    /* constructor to create valid lookup iter*/
    LookupIter(char *_key, KeyType _keyType, TreeNode *_node, int _position, int _payloadLen);

    /* constructor to create null lookup iter */
    LookupIter();

    /* whether the iterator is empty */
    bool isNull();

    /* return true if iterator can return more elements to get(), false if not*/
    bool hasNext();

    /* advance to the next key. return 0 if successful, -1 if unsuccessful */
    int next();

    /* The payload value corresponding to the current iterator position
     * will be loaded in the given char array, and 0 is returned.
     * If there is no next, then -1 is returned. */
    int get(char* payload);
};


#endif //LOOKUPITER_H
