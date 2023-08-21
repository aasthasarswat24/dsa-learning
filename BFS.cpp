/*
BFS (Breadth First Search) (Level Order Traversal)
- search in a binary tree
- starts at root, visits all nodes at current level and then move to next level
*/

class Node {
  public:
  int data;
  Node *left, *right;
}

Node* newNode (int data){
  Node *Node = new Node();
  Node->data = data;
  Node->right = NULL;
  Node->left = NULL;

  return (Node);
}

int getHeightOfTree(Node* node){
  if(node == NULL){
    return 0;
  }
  else{
    //height of each subtree
    int left = getHeightOfTree(node->left);
    int right = getHeightOfTree(node->right)  

    if(left > right){
      return left + 1;
    }else{
      return right + 1;
    }
  }
}

void searchLevelOrder (Node *root, int number){
  int h = getHeightOfTree(root);
  for (int i = 1; i <= h; i++ ){
    searchCurrentLevel(root, number, i);
  }
}

void searchCurrentLevel (Node* node, int number, int level){
  if(node == NULL){
    return;
  }
  else if(node->data == number ){
    //element found
    cout << "element at level: " << level;
  }
  else{
    searchCurrentLevel(node->left, level - 1);
    searchCurrentLevel(node->right, level - 1);
  } 
} 





