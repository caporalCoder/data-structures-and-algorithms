


#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <list>
#include <sstream>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <set>
#include <stack>
#include <queue>
#include <iostream>
#include <fstream>
#include <chrono>
#include <complex>
#define endl "\n"
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define pll pair<long long, long long>
#define mod 1000000007
#define inf 1000000000000000001;
#define all(c) c.begin(),c.end()
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define eb emplace_back

	
using namespace std;

 static int preIndex = 0; 

struct TreeNode {
    char val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(char x) : val(x), left(NULL), right(NULL) {}
 };

 struct TreeNode* newNode(char data)  { 
    struct TreeNode* node = (struct TreeNode*)malloc(sizeof(struct TreeNode)); 
    node->val = data; 
    node->left = NULL; 
    node->right = NULL; 
  
    return (node); 
} 

int search(vector<char> arr, int strt, int end, char value) { 
    int i; 
    for (i = strt; i <= end; i++) { 
        if (arr[i] == value) 
            return i; 
    } 
} 

struct TreeNode* buildTree(vector<char> inorder, vector<char> preorder, int inStrt, int inEnd)  { 
   
  
    if (inStrt > inEnd) 
        return NULL; 
 
    struct TreeNode* tNode = newNode(preorder[preIndex++]); 
  
    if (inStrt == inEnd) 
        return tNode; 
    int inIndex = search(inorder, inStrt, inEnd, tNode->val); 
  

    tNode->left = buildTree(inorder, preorder, inStrt, inIndex - 1); 
    tNode->right = buildTree(inorder, preorder, inIndex + 1, inEnd); 
  
    return tNode; 
} 
  


int height(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }
        return max(height(root->left), height(root->right)) + 1;
    }

void printTree(TreeNode* root, int row, int low, int high, vector<vector<char> >& res) {
        if (root == nullptr) {
            return;
        }

        int mid = low + (high - low) / 2;

        res[row][mid] = root->val;
        printTree(root->left, row + 1, low, mid - 1, res);
        printTree(root->right, row + 1, mid + 1, high, res);
}

vector<vector<char> > printTree(TreeNode* root) {
        int h = height(root);
        int col = (1 << (h - 1)) + (1 << (h - 1)) - 1;
        vector<vector<char> > res(h, vector<char>(col, ' '));
        printTree(root, 0, 0, col - 1, res);
        return res;
 }

void printInorder(struct TreeNode* node) { 
    if (node == NULL) {
        return; 
    }
  
    // first recur on left subtree 
    
  
  	cout << node->val << " "; 
  	printInorder(node->left); 
    // then recur on right subtree 
    printInorder(node->right); 
  
    // now deal with the node 
    
} 


int main() {
	string s1, s2;

	while (cin >> s1 >> s2) {
		
	


		vector<char> inorder(s1.begin(), s1.end());
		vector<char> preorder(s2.begin(), s2.end());

		TreeNode* root = buildTree(inorder, preorder, 0, inorder.size() - 1);

		
		vector<vector<char> > respo =  printTree(root);
		
		//printInorder(root);
		for(vector<char> vt: respo) {
			for (char str: vt){
				cout << (char) str ;
			} 
			cout << endl;
		}
		preIndex = 0;

	}
	

	
	return 0;
}