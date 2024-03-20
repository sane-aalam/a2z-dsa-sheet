class Solution
{
public:
  void calc(Node * root,int cnt,int pathsum,int &ans,int &maxpath){
           if(root==NULL){
               return ;
           }
           cnt++;
           pathsum+=root->data;
           
           if(maxpath<cnt){
               maxpath=cnt;
               ans=pathsum;
           }else if(pathsum>ans && cnt==maxpath){
               ans=pathsum;
           }
           
          calc(root->left,cnt,pathsum,ans,maxpath);
          calc(root->right,cnt,pathsum,ans,maxpath);
           
        
    }
    
    int sumOfLongRootToLeafPath(Node *root)
    {
        //code here
        if(root==NULL){
            return 0;
        }
        int ans=0;
        int maxpath=0;
        calc(root,0,0,ans,maxpath);
        return ans;
        
    }
};