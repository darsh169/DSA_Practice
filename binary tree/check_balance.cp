#include<bts/stdc++.h>
using namespace std;


bool is_balanced(node *root,int& h)
{
	if(root==NULL)
	{
		h=0;
		return true;
	}
	int lh=0;	//for height of left subtree
	int rh=0;	//for height of right subtree
	int l=0;	//l=1 if left subtree is balanced
	int r=0;

	l=is_balanced(root->left,lh);	//this fuction will give true if left subtree is balanced
	r=is_balanced(root->right,rh);	//along with it,this function will also update the height of lh
									//which will be used in this function to calculate h
	h=max(lh,rh)+1;
	if(abs(lh-rh)>1)
		return false;

	return (l && r); 

}

int main()
{
  node *root=NULL;
  
  return 0;
}
