class Node {
		protected Object info = null;
		protected Node link = null;
		
		public Node(Object info, Node link) {
			this.info=info; 
			this.link=link;
		}
		
		public Node(Object info)	{
			this(info,null);
		}
		
		public Node()	{
			this(null,null);
		}
		
		public Object getInfo() {
			return this.info;
		}
		
		public void setInfo(Object info) {
			this.info=info;
		}
		
	    public Node getLink() {
	        return this.link;
	    }
	    
	    public void setLink(Node node) {
	        this.link = node;
	    }
	}


class List {

	protected Node head = null;
	
	public int length() {
		Node trav=head;
		int i=0;
		while (trav!=null) {
			i++;
			trav=trav.getLink();
		}
		return i;
	}
	
	public void print() {
		Node trav=head;
		//System.out.print("[ ");		
		while (trav!=null) {
			System.out.print(trav.getInfo()+" ");
			trav=trav.link;
		}
		System.out.println("");
	}

	public void addHead(Object newItem) throws Exception  { 
		Node newNode=new Node(newItem);
		newNode.link = head;
		head=newNode;
	}

	public void addTail(Object newItem) throws Exception  { 
		Node newNode=new Node(newItem);
		Node trav = head;
		Node trav2 = head;
		while(trav!=null){
			trav2 = trav;
			trav = trav.link;
		}
		if(trav!=trav2)
			trav2.link = newNode;
		else
			head = newNode;
	}

    public void addSort(Object newItem) throws Exception  {
    	Node newNode = new Node(newItem);
    	Node trav = head;
    	Node trav2 = head;
    	while(trav!=null&&(char)trav.info<(char)newNode.info){
    		trav2 = trav;
    		trav = trav.link;
    	}
    	newNode.link = trav;
    	if(trav!=trav2) 
    		trav2.link = newNode;
    	else 
    		head = newNode;
    }

    public void deleteHead() {
    	head = head.link;
    }

    public void deleteTail() {
    	Node trav = head;
		Node trav2 = head;
		while(trav.link!=null){
			trav2 = trav;
			trav = trav.link;
		}
		if(trav!=trav2)
			trav2.link=null;
    }
    
    public void deleteInfo(Object inf) {
    	Node trav = head;
    	Node trav2=head;
		while(trav!=null){								
			if(trav.info==inf){
				if(trav!=head)
					trav2.link=trav.link;
				else
					head = trav.link;
			}
			else 
				trav2 = trav;
			trav = trav.link;
		}
    }
    
    public boolean isEmpty(){
    	Node trav = head;
    	Node trav2 = head;
    	while(trav!=null){
    		trav2=trav;
    		trav = trav.link;
    	}
    	if(trav2!=trav)
    		return (trav==head);
    	else
    		return true;
    }
    
    public Object pop(){
    	Node trav = head;
    	Node trav2 = head;
    	while(trav.link!=null){
    		trav2 = trav;
    		trav = trav.link;
    	}
    	if(trav!=trav2)
    		trav2.link = null;
    	else
    		head = null;
    	return trav.info;
    }
}