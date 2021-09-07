

// function to find merge point of 2 linked list

int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) 
{  int count1=0,count2=0;
    SinglyLinkedListNode *head3=head1,*head4=head2;
   while(head1!=NULL )
   {
       head1=head1->next;
       count1++;
       
   }
   while(head2!=NULL)
   {
       head2=head2->next;
       count2++;
   }
  
  int res=abs(count1-count2);
   if(count1>count2)
   {
       for(int i=0;i<res;i++)
        head3=head3->next;
   }
   else 
   {
       for(int i=0;i<res;i++)
        head4=head4->next;
   }
   
   while(head3!=NULL && head4!=NULL)
   {
       head3=head3->next;
       head4=head4->next;
       
       if(head3==head4)
       {
          break;
       }
   }
  
return head3->data;
}



// deletions required to make 2 strings Anagram
int makeAnagram(string a, string b) 
{
  int res=0,v,ind;
  int arr[26]={0},arr2[26]={0};
  
  for(int i=0;i<a.size();i++)
  {   v=(int)a[i];
      ind=v-97;
      arr[ind]+=1;
   }
   for(int i=0;i<b.size();i++)
  {
      v=(int)b[i];
      ind=v-97;
      arr2[ind]+=1;
  }
 
  for(int i=0;i<26;i++)
  {
       res+=abs(arr[i]-arr2[i]);
  }
  return res;

}
 


