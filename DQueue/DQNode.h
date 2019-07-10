class DQNode {
		friend class DQueue;
	private:
		char data;
		DQNode* rlink;
		DQNode* llink;
		DQNode(char d) : data(d) {}
};
