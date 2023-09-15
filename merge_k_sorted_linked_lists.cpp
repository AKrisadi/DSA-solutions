Node * mergeKLists(Node *arr[], int K)
    {
           Node* head = nullptr;
           Node* tail = nullptr;
           priority_queue<Node*, vector<Node*>, compare> pq;
           for (int i=0;i<K;i++){
               if (arr[i]!=nullptr){
                   pq.push(arr[i]);
               }
           }
           
           while (!pq.empty()){
               Node* temp = pq.top();
               pq.pop();
               
               if(temp->next != NULL){
                    pq.push(temp->next);
               }
               if (head == nullptr){
                   head = temp;
                   tail = temp;
               }
               else{
                   tail -> next = temp;
                   tail = temp;
               }
           }
           
           return head;
    }
